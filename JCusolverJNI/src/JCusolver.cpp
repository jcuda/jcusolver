/*
 * JCusolver - Java bindings for CUSOLVER, the NVIDIA CUDA solver
 * library, to be used with JCuda
 *
 * Copyright (c) 2010-2015 Marco Hutter - http://www.jcuda.org
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#include "JCusolver_common.hpp"
#include "JCusolver.hpp"
#include <iostream>
#include <string>

jfieldID cuComplex_x; // float
jfieldID cuComplex_y; // float

jfieldID cuDoubleComplex_x; // double
jfieldID cuDoubleComplex_y; // double

/**
 * Called when the library is loaded. Will initialize all
 * required field and method IDs
 */
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *jvm, void *reserved)
{
    JNIEnv *env = NULL;
    if (jvm->GetEnv((void **)&env, JNI_VERSION_1_4))
    {
        return JNI_ERR;
    }

    Logger::log(LOG_TRACE, "Initializing JCusolver\n");

    jclass cls = NULL;

    // Initialize the JNIUtils and PointerUtils
    if (initJNIUtils(env) == JNI_ERR) return JNI_ERR;
    if (initPointerUtils(env) == JNI_ERR) return JNI_ERR;

    // Obtain the fieldIDs for cuComplex#x and cuComplex#y
    if (!init(env, cls, "jcuda/cuComplex")) return JNI_ERR;
    if (!init(env, cls, cuComplex_x, "x", "F")) return JNI_ERR;
    if (!init(env, cls, cuComplex_y, "y", "F")) return JNI_ERR;


    // Obtain the fieldIDs for cuDoubleComplex#x and cuDoubleComplex#y
    if (!init(env, cls, "jcuda/cuDoubleComplex")) return JNI_ERR;
    if (!init(env, cls, cuDoubleComplex_x, "x", "D")) return JNI_ERR;
    if (!init(env, cls, cuDoubleComplex_y, "y", "D")) return JNI_ERR;

    return JNI_VERSION_1_4;
}


/*
 * Set the log level
 *
 * Class:     jcuda_jcusolver_JCusolver
 * Method:    setLogLevelNative
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_jcuda_jcusolver_JCusolver_setLogLevelNative
  (JNIEnv *env, jclass cla, jint logLevel)
{
    Logger::setLogLevel((LogLevel)logLevel);
}



// Initialization / release of handles
/*
bool initNative(JNIEnv *env, jobject &handle, cusolverDnHandle_t &handle_native, bool fill)
{
    if (fill)
    {
        handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    }
    return true;
}

bool releaseNative(JNIEnv *env, cusolverDnHandle_t &handle_native, jobject &handle, bool writeBack)
{
    if (handle != NULL && writeBack)
    {
        setNativePointerValue(env, handle, (jlong)handle_native);
    }
    return true;
}

bool initNative(JNIEnv *env, jobject &handle, cusolverDnHandle_t* &handle_native, bool fill)
{
    handle_native = new cusolverDnHandle_t[1];
    initNative(env, handle, handle_native[0], fill);
    return true;
}

bool releaseNative(JNIEnv *env, cusolverDnHandle_t* &handle_native, jobject &handle, bool writeBack)
{
    if (handle_native != NULL)
    {
        releaseNative(env, handle_native[0], handle, writeBack);
        delete[] handle_native;
    }
    return true;
}
*/


// Initialization / release of streams

bool initNative(JNIEnv *env, jobject &stream, cudaStream_t &stream_native, bool fill)
{
    if (fill)
    {
        stream_native = (cudaStream_t)getNativePointerValue(env, stream);
    }
    return true;
}

bool releaseNative(JNIEnv *env, cudaStream_t &stream_native, jobject &stream, bool writeBack)
{
    if (stream != NULL && writeBack)
    {
        setNativePointerValue(env, stream, (jlong)stream_native);
    }
    return true;
}

bool initNative(JNIEnv *env, jobject &stream, cudaStream_t* &stream_native, bool fill)
{
    stream_native = new cudaStream_t[1];
    initNative(env, stream, stream_native[0], fill);
    return true;
}

bool releaseNative(JNIEnv *env, cudaStream_t* &stream_native, jobject &stream, bool writeBack)
{
    if (stream_native != NULL)
    {
        releaseNative(env, stream_native[0], stream, writeBack);
        delete[] stream_native;
    }
    return true;
}



JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolver_cusolverGetPropertyNative(JNIEnv *env, jclass cls, jint type, jintArray value)
{
    // Null-checks for non-primitive arguments
    // type is primitive
    if (value == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'value' is null for cusolverGetProperty");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverGetProperty(type=%d, value=%p)\n",
        type, value);

    // Native variable declarations
    libraryPropertyType type_native;
    int value_native;

    // Obtain native variable values
    type_native = (libraryPropertyType)type;
    // value is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverGetProperty(type_native, &value_native);

    // Write back native variable values
    // type is primitive
    if (!set(env, value, 0, (jint)value_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolver_cusolverGetVersionNative(JNIEnv *env, jclass cls, jintArray version)
{
    // Null-checks for non-primitive arguments
    if (version == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'version' is null for cusolverGetVersion");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverGetVersion(version=%p)\n",
        version);

    // Native variable declarations
    int version_native;

    // Obtain native variable values
    // version is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverGetVersion(&version_native);

    // Write back native variable values
    if (!set(env, version, 0, (jint)version_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

