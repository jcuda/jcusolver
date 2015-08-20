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

#include "JCusolverDn.hpp"
#include "JCusolver_common.hpp"
#include <iostream>
#include <string>



/**
 * Converts the given jobject
 * into a int*
 * and returns whether this conversion succeeded.
 */
bool toNative(JNIEnv *env, jobject &input, int* &output)
{
    output = (int*)getPointer(env, input);
    return true;
}

/**
 * Converts the given jobject
 * into a unsigned int*
 * and returns whether this conversion succeeded.
 */
bool toNative(JNIEnv *env, jobject &input, unsigned int* &output)
{
    output = (unsigned int*)getPointer(env, input);
    return true;
}

/**
 * Converts the given jobject
 * into a float*
 * and returns whether this conversion succeeded.
 */
bool toNative(JNIEnv *env, jobject &input, float* &output)
{
    output = (float*)getPointer(env, input);
    return true;
}

/**
 * Converts the given jobject
 * into a double*
 * and returns whether this conversion succeeded.
 */
bool toNative(JNIEnv *env, jobject &input, double* &output)
{
    output = (double*)getPointer(env, input);
    return true;
}








//=== Auto-generated part: ===================================================

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCreateNative(JNIEnv *env, jclass cls, jobject handle)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCreate");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCreate(handle=%p)\n",
        handle);

    // Native variable declarations
    cusolverDnHandle_t handle_native;

    // Obtain native variable values
    // handle is initialized here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCreate(&handle_native);

    // Write back native variable values
    setNativePointerValue(env, handle, (jlong)handle_native);

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDestroyNative(JNIEnv *env, jclass cls, jobject handle)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDestroy");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDestroy(handle=%p)\n",
        handle);

    // Native variable declarations
    cusolverDnHandle_t handle_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDestroy(handle_native);

    // Write back native variable values
    // handle is destroyed here

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSetStreamNative(JNIEnv *env, jclass cls, jobject handle, jobject streamId)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSetStream");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // streamId may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSetStream(handle=%p, streamId=%p)\n",
        handle, streamId);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cudaStream_t streamId_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    if (streamId != NULL)
    {
        streamId_native = (cudaStream_t)getNativePointerValue(env, streamId);
    }

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSetStream(handle_native, streamId_native);

    // Write back native variable values
    // handle is a native pointer object
    // streamId is a read-only native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnGetStreamNative(JNIEnv *env, jclass cls, jobject handle, jobject streamId)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnGetStream");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (streamId == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'streamId' is null for cusolverDnGetStream");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnGetStream(handle=%p, streamId=%p)\n",
        handle, streamId);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cudaStream_t streamId_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    // streamId is initialized here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnGetStream(handle_native, &streamId_native);

    // Write back native variable values
    // handle is a native pointer object
    setNativePointerValue(env, streamId, (jlong)streamId_native);

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** Cholesky factorization and its solver */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSpotrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSpotrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSpotrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnSpotrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSpotrf_bufferSize(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, uplo, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    float* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSpotrf_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDpotrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDpotrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDpotrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnDpotrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDpotrf_bufferSize(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, uplo, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    double* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDpotrf_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCpotrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCpotrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCpotrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnCpotrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCpotrf_bufferSize(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, uplo, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCpotrf_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZpotrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZpotrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZpotrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnZpotrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZpotrf_bufferSize(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, uplo, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZpotrf_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSpotrfNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject Workspace, jint Lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Workspace == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Workspace' is null for cusolverDnSpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnSpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSpotrf(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, Workspace=%p, Lwork=%d, devInfo=%p)\n",
        handle, uplo, n, A, lda, Workspace, Lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    float* A_native;
    int lda_native = 0;
    float* Workspace_native;
    int Lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (float*)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSpotrf(handle_native, uplo_native, n_native, A_native, lda_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDpotrfNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject Workspace, jint Lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Workspace == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Workspace' is null for cusolverDnDpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnDpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDpotrf(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, Workspace=%p, Lwork=%d, devInfo=%p)\n",
        handle, uplo, n, A, lda, Workspace, Lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    double* A_native;
    int lda_native = 0;
    double* Workspace_native;
    int Lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (double*)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDpotrf(handle_native, uplo_native, n_native, A_native, lda_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCpotrfNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject Workspace, jint Lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Workspace == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Workspace' is null for cusolverDnCpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnCpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCpotrf(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, Workspace=%p, Lwork=%d, devInfo=%p)\n",
        handle, uplo, n, A, lda, Workspace, Lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    cuComplex* Workspace_native;
    int Lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (cuComplex*)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCpotrf(handle_native, uplo_native, n_native, A_native, lda_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZpotrfNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject Workspace, jint Lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Workspace == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Workspace' is null for cusolverDnZpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnZpotrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZpotrf(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, Workspace=%p, Lwork=%d, devInfo=%p)\n",
        handle, uplo, n, A, lda, Workspace, Lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    cuDoubleComplex* Workspace_native;
    int Lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (cuDoubleComplex*)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZpotrf(handle_native, uplo_native, n_native, A_native, lda_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSpotrsNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jint nrhs, jobject A, jint lda, jobject B, jint ldb, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    // nrhs is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnSpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnSpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSpotrs(handle=%p, uplo=%d, n=%d, nrhs=%d, A=%p, lda=%d, B=%p, ldb=%d, devInfo=%p)\n",
        handle, uplo, n, nrhs, A, lda, B, ldb, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    int nrhs_native = 0;
    float* A_native;
    int lda_native = 0;
    float* B_native;
    int ldb_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (float*)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSpotrs(handle_native, uplo_native, n_native, nrhs_native, A_native, lda_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // nrhs is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDpotrsNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jint nrhs, jobject A, jint lda, jobject B, jint ldb, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    // nrhs is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnDpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnDpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDpotrs(handle=%p, uplo=%d, n=%d, nrhs=%d, A=%p, lda=%d, B=%p, ldb=%d, devInfo=%p)\n",
        handle, uplo, n, nrhs, A, lda, B, ldb, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    int nrhs_native = 0;
    double* A_native;
    int lda_native = 0;
    double* B_native;
    int ldb_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (double*)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDpotrs(handle_native, uplo_native, n_native, nrhs_native, A_native, lda_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // nrhs is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCpotrsNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jint nrhs, jobject A, jint lda, jobject B, jint ldb, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    // nrhs is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnCpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnCpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCpotrs(handle=%p, uplo=%d, n=%d, nrhs=%d, A=%p, lda=%d, B=%p, ldb=%d, devInfo=%p)\n",
        handle, uplo, n, nrhs, A, lda, B, ldb, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    int nrhs_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    cuComplex* B_native;
    int ldb_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (cuComplex*)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCpotrs(handle_native, uplo_native, n_native, nrhs_native, A_native, lda_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // nrhs is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZpotrsNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jint nrhs, jobject A, jint lda, jobject B, jint ldb, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    // nrhs is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnZpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnZpotrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZpotrs(handle=%p, uplo=%d, n=%d, nrhs=%d, A=%p, lda=%d, B=%p, ldb=%d, devInfo=%p)\n",
        handle, uplo, n, nrhs, A, lda, B, ldb, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    int nrhs_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    cuDoubleComplex* B_native;
    int ldb_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (cuDoubleComplex*)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZpotrs(handle_native, uplo_native, n_native, nrhs_native, A_native, lda_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // nrhs is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** LU Factorization */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgetrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSgetrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSgetrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnSgetrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSgetrf_bufferSize(handle=%p, m=%d, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, m, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    float* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgetrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgetrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDgetrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDgetrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnDgetrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDgetrf_bufferSize(handle=%p, m=%d, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, m, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    double* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgetrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgetrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCgetrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCgetrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnCgetrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCgetrf_bufferSize(handle=%p, m=%d, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, m, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgetrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgetrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZgetrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZgetrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnZgetrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZgetrf_bufferSize(handle=%p, m=%d, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, m, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgetrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgetrfNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jobject Workspace, jobject devIpiv, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Workspace == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Workspace' is null for cusolverDnSgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (devIpiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devIpiv' is null for cusolverDnSgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnSgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSgetrf(handle=%p, m=%d, n=%d, A=%p, lda=%d, Workspace=%p, devIpiv=%p, devInfo=%p)\n",
        handle, m, n, A, lda, Workspace, devIpiv, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    float* A_native;
    int lda_native = 0;
    float* Workspace_native;
    int* devIpiv_native;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (float*)getPointer(env, Workspace);
    devIpiv_native = (int*)getPointer(env, devIpiv);
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgetrf(handle_native, m_native, n_native, A_native, lda_native, Workspace_native, devIpiv_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // devIpiv is a native pointer
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgetrfNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jobject Workspace, jobject devIpiv, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Workspace == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Workspace' is null for cusolverDnDgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (devIpiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devIpiv' is null for cusolverDnDgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnDgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDgetrf(handle=%p, m=%d, n=%d, A=%p, lda=%d, Workspace=%p, devIpiv=%p, devInfo=%p)\n",
        handle, m, n, A, lda, Workspace, devIpiv, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    double* A_native;
    int lda_native = 0;
    double* Workspace_native;
    int* devIpiv_native;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (double*)getPointer(env, Workspace);
    devIpiv_native = (int*)getPointer(env, devIpiv);
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgetrf(handle_native, m_native, n_native, A_native, lda_native, Workspace_native, devIpiv_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // devIpiv is a native pointer
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgetrfNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jobject Workspace, jobject devIpiv, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Workspace == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Workspace' is null for cusolverDnCgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (devIpiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devIpiv' is null for cusolverDnCgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnCgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCgetrf(handle=%p, m=%d, n=%d, A=%p, lda=%d, Workspace=%p, devIpiv=%p, devInfo=%p)\n",
        handle, m, n, A, lda, Workspace, devIpiv, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    cuComplex* Workspace_native;
    int* devIpiv_native;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (cuComplex*)getPointer(env, Workspace);
    devIpiv_native = (int*)getPointer(env, devIpiv);
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgetrf(handle_native, m_native, n_native, A_native, lda_native, Workspace_native, devIpiv_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // devIpiv is a native pointer
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgetrfNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jobject Workspace, jobject devIpiv, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Workspace == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Workspace' is null for cusolverDnZgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (devIpiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devIpiv' is null for cusolverDnZgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnZgetrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZgetrf(handle=%p, m=%d, n=%d, A=%p, lda=%d, Workspace=%p, devIpiv=%p, devInfo=%p)\n",
        handle, m, n, A, lda, Workspace, devIpiv, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    cuDoubleComplex* Workspace_native;
    int* devIpiv_native;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (cuDoubleComplex*)getPointer(env, Workspace);
    devIpiv_native = (int*)getPointer(env, devIpiv);
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgetrf(handle_native, m_native, n_native, A_native, lda_native, Workspace_native, devIpiv_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // devIpiv is a native pointer
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** Row pivoting */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSlaswpNative(JNIEnv *env, jclass cls, jobject handle, jint n, jobject A, jint lda, jint k1, jint k2, jobject devIpiv, jint incx)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSlaswp");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSlaswp");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    // k1 is primitive
    // k2 is primitive
    if (devIpiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devIpiv' is null for cusolverDnSlaswp");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // incx is primitive

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSlaswp(handle=%p, n=%d, A=%p, lda=%d, k1=%d, k2=%d, devIpiv=%p, incx=%d)\n",
        handle, n, A, lda, k1, k2, devIpiv, incx);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int n_native = 0;
    float* A_native;
    int lda_native = 0;
    int k1_native = 0;
    int k2_native = 0;
    int* devIpiv_native;
    int incx_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    k1_native = (int)k1;
    k2_native = (int)k2;
    devIpiv_native = (int*)getPointer(env, devIpiv);
    incx_native = (int)incx;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSlaswp(handle_native, n_native, A_native, lda_native, k1_native, k2_native, devIpiv_native, incx_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // k1 is primitive
    // k2 is primitive
    // devIpiv is a native pointer
    // incx is primitive

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDlaswpNative(JNIEnv *env, jclass cls, jobject handle, jint n, jobject A, jint lda, jint k1, jint k2, jobject devIpiv, jint incx)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDlaswp");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDlaswp");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    // k1 is primitive
    // k2 is primitive
    if (devIpiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devIpiv' is null for cusolverDnDlaswp");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // incx is primitive

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDlaswp(handle=%p, n=%d, A=%p, lda=%d, k1=%d, k2=%d, devIpiv=%p, incx=%d)\n",
        handle, n, A, lda, k1, k2, devIpiv, incx);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int n_native = 0;
    double* A_native;
    int lda_native = 0;
    int k1_native = 0;
    int k2_native = 0;
    int* devIpiv_native;
    int incx_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    k1_native = (int)k1;
    k2_native = (int)k2;
    devIpiv_native = (int*)getPointer(env, devIpiv);
    incx_native = (int)incx;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDlaswp(handle_native, n_native, A_native, lda_native, k1_native, k2_native, devIpiv_native, incx_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // k1 is primitive
    // k2 is primitive
    // devIpiv is a native pointer
    // incx is primitive

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnClaswpNative(JNIEnv *env, jclass cls, jobject handle, jint n, jobject A, jint lda, jint k1, jint k2, jobject devIpiv, jint incx)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnClaswp");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnClaswp");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    // k1 is primitive
    // k2 is primitive
    if (devIpiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devIpiv' is null for cusolverDnClaswp");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // incx is primitive

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnClaswp(handle=%p, n=%d, A=%p, lda=%d, k1=%d, k2=%d, devIpiv=%p, incx=%d)\n",
        handle, n, A, lda, k1, k2, devIpiv, incx);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int n_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    int k1_native = 0;
    int k2_native = 0;
    int* devIpiv_native;
    int incx_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    k1_native = (int)k1;
    k2_native = (int)k2;
    devIpiv_native = (int*)getPointer(env, devIpiv);
    incx_native = (int)incx;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnClaswp(handle_native, n_native, A_native, lda_native, k1_native, k2_native, devIpiv_native, incx_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // k1 is primitive
    // k2 is primitive
    // devIpiv is a native pointer
    // incx is primitive

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZlaswpNative(JNIEnv *env, jclass cls, jobject handle, jint n, jobject A, jint lda, jint k1, jint k2, jobject devIpiv, jint incx)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZlaswp");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZlaswp");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    // k1 is primitive
    // k2 is primitive
    if (devIpiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devIpiv' is null for cusolverDnZlaswp");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // incx is primitive

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZlaswp(handle=%p, n=%d, A=%p, lda=%d, k1=%d, k2=%d, devIpiv=%p, incx=%d)\n",
        handle, n, A, lda, k1, k2, devIpiv, incx);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int n_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    int k1_native = 0;
    int k2_native = 0;
    int* devIpiv_native;
    int incx_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    k1_native = (int)k1;
    k2_native = (int)k2;
    devIpiv_native = (int*)getPointer(env, devIpiv);
    incx_native = (int)incx;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZlaswp(handle_native, n_native, A_native, lda_native, k1_native, k2_native, devIpiv_native, incx_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // k1 is primitive
    // k2 is primitive
    // devIpiv is a native pointer
    // incx is primitive

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** LU solve */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgetrsNative(JNIEnv *env, jclass cls, jobject handle, jint trans, jint n, jint nrhs, jobject A, jint lda, jobject devIpiv, jobject B, jint ldb, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // trans is primitive
    // n is primitive
    // nrhs is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (devIpiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devIpiv' is null for cusolverDnSgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnSgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnSgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSgetrs(handle=%p, trans=%d, n=%d, nrhs=%d, A=%p, lda=%d, devIpiv=%p, B=%p, ldb=%d, devInfo=%p)\n",
        handle, trans, n, nrhs, A, lda, devIpiv, B, ldb, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasOperation_t trans_native;
    int n_native = 0;
    int nrhs_native = 0;
    float* A_native;
    int lda_native = 0;
    int* devIpiv_native;
    float* B_native;
    int ldb_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    trans_native = (cublasOperation_t)trans;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    devIpiv_native = (int*)getPointer(env, devIpiv);
    B_native = (float*)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgetrs(handle_native, trans_native, n_native, nrhs_native, A_native, lda_native, devIpiv_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // trans is primitive
    // n is primitive
    // nrhs is primitive
    // A is a native pointer
    // lda is primitive
    // devIpiv is a native pointer
    // B is a native pointer
    // ldb is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgetrsNative(JNIEnv *env, jclass cls, jobject handle, jint trans, jint n, jint nrhs, jobject A, jint lda, jobject devIpiv, jobject B, jint ldb, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // trans is primitive
    // n is primitive
    // nrhs is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (devIpiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devIpiv' is null for cusolverDnDgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnDgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnDgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDgetrs(handle=%p, trans=%d, n=%d, nrhs=%d, A=%p, lda=%d, devIpiv=%p, B=%p, ldb=%d, devInfo=%p)\n",
        handle, trans, n, nrhs, A, lda, devIpiv, B, ldb, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasOperation_t trans_native;
    int n_native = 0;
    int nrhs_native = 0;
    double* A_native;
    int lda_native = 0;
    int* devIpiv_native;
    double* B_native;
    int ldb_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    trans_native = (cublasOperation_t)trans;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    devIpiv_native = (int*)getPointer(env, devIpiv);
    B_native = (double*)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgetrs(handle_native, trans_native, n_native, nrhs_native, A_native, lda_native, devIpiv_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // trans is primitive
    // n is primitive
    // nrhs is primitive
    // A is a native pointer
    // lda is primitive
    // devIpiv is a native pointer
    // B is a native pointer
    // ldb is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgetrsNative(JNIEnv *env, jclass cls, jobject handle, jint trans, jint n, jint nrhs, jobject A, jint lda, jobject devIpiv, jobject B, jint ldb, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // trans is primitive
    // n is primitive
    // nrhs is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (devIpiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devIpiv' is null for cusolverDnCgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnCgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnCgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCgetrs(handle=%p, trans=%d, n=%d, nrhs=%d, A=%p, lda=%d, devIpiv=%p, B=%p, ldb=%d, devInfo=%p)\n",
        handle, trans, n, nrhs, A, lda, devIpiv, B, ldb, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasOperation_t trans_native;
    int n_native = 0;
    int nrhs_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    int* devIpiv_native;
    cuComplex* B_native;
    int ldb_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    trans_native = (cublasOperation_t)trans;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    devIpiv_native = (int*)getPointer(env, devIpiv);
    B_native = (cuComplex*)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgetrs(handle_native, trans_native, n_native, nrhs_native, A_native, lda_native, devIpiv_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // trans is primitive
    // n is primitive
    // nrhs is primitive
    // A is a native pointer
    // lda is primitive
    // devIpiv is a native pointer
    // B is a native pointer
    // ldb is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgetrsNative(JNIEnv *env, jclass cls, jobject handle, jint trans, jint n, jint nrhs, jobject A, jint lda, jobject devIpiv, jobject B, jint ldb, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // trans is primitive
    // n is primitive
    // nrhs is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (devIpiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devIpiv' is null for cusolverDnZgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnZgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnZgetrs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZgetrs(handle=%p, trans=%d, n=%d, nrhs=%d, A=%p, lda=%d, devIpiv=%p, B=%p, ldb=%d, devInfo=%p)\n",
        handle, trans, n, nrhs, A, lda, devIpiv, B, ldb, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasOperation_t trans_native;
    int n_native = 0;
    int nrhs_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    int* devIpiv_native;
    cuDoubleComplex* B_native;
    int ldb_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    trans_native = (cublasOperation_t)trans;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    devIpiv_native = (int*)getPointer(env, devIpiv);
    B_native = (cuDoubleComplex*)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgetrs(handle_native, trans_native, n_native, nrhs_native, A_native, lda_native, devIpiv_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // trans is primitive
    // n is primitive
    // nrhs is primitive
    // A is a native pointer
    // lda is primitive
    // devIpiv is a native pointer
    // B is a native pointer
    // ldb is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** QR factorization */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgeqrfNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jobject TAU, jobject Workspace, jint Lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (TAU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'TAU' is null for cusolverDnSgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Workspace == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Workspace' is null for cusolverDnSgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnSgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSgeqrf(handle=%p, m=%d, n=%d, A=%p, lda=%d, TAU=%p, Workspace=%p, Lwork=%d, devInfo=%p)\n",
        handle, m, n, A, lda, TAU, Workspace, Lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    float* A_native;
    int lda_native = 0;
    float* TAU_native;
    float* Workspace_native;
    int Lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    TAU_native = (float*)getPointer(env, TAU);
    Workspace_native = (float*)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgeqrf(handle_native, m_native, n_native, A_native, lda_native, TAU_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // TAU is a native pointer
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgeqrfNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jobject TAU, jobject Workspace, jint Lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (TAU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'TAU' is null for cusolverDnDgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Workspace == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Workspace' is null for cusolverDnDgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnDgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDgeqrf(handle=%p, m=%d, n=%d, A=%p, lda=%d, TAU=%p, Workspace=%p, Lwork=%d, devInfo=%p)\n",
        handle, m, n, A, lda, TAU, Workspace, Lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    double* A_native;
    int lda_native = 0;
    double* TAU_native;
    double* Workspace_native;
    int Lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    TAU_native = (double*)getPointer(env, TAU);
    Workspace_native = (double*)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgeqrf(handle_native, m_native, n_native, A_native, lda_native, TAU_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // TAU is a native pointer
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgeqrfNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jobject TAU, jobject Workspace, jint Lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (TAU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'TAU' is null for cusolverDnCgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Workspace == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Workspace' is null for cusolverDnCgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnCgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCgeqrf(handle=%p, m=%d, n=%d, A=%p, lda=%d, TAU=%p, Workspace=%p, Lwork=%d, devInfo=%p)\n",
        handle, m, n, A, lda, TAU, Workspace, Lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    cuComplex* TAU_native;
    cuComplex* Workspace_native;
    int Lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    TAU_native = (cuComplex*)getPointer(env, TAU);
    Workspace_native = (cuComplex*)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgeqrf(handle_native, m_native, n_native, A_native, lda_native, TAU_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // TAU is a native pointer
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgeqrfNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jobject TAU, jobject Workspace, jint Lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (TAU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'TAU' is null for cusolverDnZgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Workspace == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Workspace' is null for cusolverDnZgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnZgeqrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZgeqrf(handle=%p, m=%d, n=%d, A=%p, lda=%d, TAU=%p, Workspace=%p, Lwork=%d, devInfo=%p)\n",
        handle, m, n, A, lda, TAU, Workspace, Lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    cuDoubleComplex* TAU_native;
    cuDoubleComplex* Workspace_native;
    int Lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    TAU_native = (cuDoubleComplex*)getPointer(env, TAU);
    Workspace_native = (cuDoubleComplex*)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgeqrf(handle_native, m_native, n_native, A_native, lda_native, TAU_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // TAU is a native pointer
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSormqrNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint trans, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject C, jint ldc, jobject work, jint lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSormqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSormqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnSormqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnSormqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnSormqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnSormqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSormqr(handle=%p, side=%d, trans=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, work=%p, lwork=%d, devInfo=%p)\n",
        handle, side, trans, m, n, k, A, lda, tau, C, ldc, work, lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    float* A_native;
    int lda_native = 0;
    float* tau_native;
    float* C_native;
    int ldc_native = 0;
    float* work_native;
    int lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (float*)getPointer(env, tau);
    C_native = (float*)getPointer(env, C);
    ldc_native = (int)ldc;
    work_native = (float*)getPointer(env, work);
    lwork_native = (int)lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSormqr(handle_native, side_native, trans_native, m_native, n_native, k_native, A_native, lda_native, tau_native, C_native, ldc_native, work_native, lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // side is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // C is a native pointer
    // ldc is primitive
    // work is a native pointer
    // lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDormqrNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint trans, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject C, jint ldc, jobject work, jint lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDormqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDormqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnDormqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnDormqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnDormqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnDormqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDormqr(handle=%p, side=%d, trans=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, work=%p, lwork=%d, devInfo=%p)\n",
        handle, side, trans, m, n, k, A, lda, tau, C, ldc, work, lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    double* A_native;
    int lda_native = 0;
    double* tau_native;
    double* C_native;
    int ldc_native = 0;
    double* work_native;
    int lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (double*)getPointer(env, tau);
    C_native = (double*)getPointer(env, C);
    ldc_native = (int)ldc;
    work_native = (double*)getPointer(env, work);
    lwork_native = (int)lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDormqr(handle_native, side_native, trans_native, m_native, n_native, k_native, A_native, lda_native, tau_native, C_native, ldc_native, work_native, lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // side is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // C is a native pointer
    // ldc is primitive
    // work is a native pointer
    // lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCunmqrNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint trans, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject C, jint ldc, jobject work, jint lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCunmqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCunmqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnCunmqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnCunmqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnCunmqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnCunmqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCunmqr(handle=%p, side=%d, trans=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, work=%p, lwork=%d, devInfo=%p)\n",
        handle, side, trans, m, n, k, A, lda, tau, C, ldc, work, lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    cuComplex* tau_native;
    cuComplex* C_native;
    int ldc_native = 0;
    cuComplex* work_native;
    int lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuComplex*)getPointer(env, tau);
    C_native = (cuComplex*)getPointer(env, C);
    ldc_native = (int)ldc;
    work_native = (cuComplex*)getPointer(env, work);
    lwork_native = (int)lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCunmqr(handle_native, side_native, trans_native, m_native, n_native, k_native, A_native, lda_native, tau_native, C_native, ldc_native, work_native, lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // side is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // C is a native pointer
    // ldc is primitive
    // work is a native pointer
    // lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZunmqrNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint trans, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject C, jint ldc, jobject work, jint lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZunmqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZunmqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnZunmqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnZunmqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnZunmqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnZunmqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZunmqr(handle=%p, side=%d, trans=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, work=%p, lwork=%d, devInfo=%p)\n",
        handle, side, trans, m, n, k, A, lda, tau, C, ldc, work, lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    cuDoubleComplex* tau_native;
    cuDoubleComplex* C_native;
    int ldc_native = 0;
    cuDoubleComplex* work_native;
    int lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuDoubleComplex*)getPointer(env, tau);
    C_native = (cuDoubleComplex*)getPointer(env, C);
    ldc_native = (int)ldc;
    work_native = (cuDoubleComplex*)getPointer(env, work);
    lwork_native = (int)lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZunmqr(handle_native, side_native, trans_native, m_native, n_native, k_native, A_native, lda_native, tau_native, C_native, ldc_native, work_native, lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // side is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // C is a native pointer
    // ldc is primitive
    // work is a native pointer
    // lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** QR factorization workspace query */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgeqrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnSgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSgeqrf_bufferSize(handle=%p, m=%d, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, m, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    float* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgeqrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgeqrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnDgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDgeqrf_bufferSize(handle=%p, m=%d, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, m, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    double* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgeqrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgeqrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnCgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCgeqrf_bufferSize(handle=%p, m=%d, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, m, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgeqrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgeqrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnZgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZgeqrf_bufferSize(handle=%p, m=%d, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, m, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgeqrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** bidiagonal */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgebrdNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jobject D, jobject E, jobject TAUQ, jobject TAUP, jobject Work, jint Lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (D == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'D' is null for cusolverDnSgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (E == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'E' is null for cusolverDnSgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (TAUQ == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'TAUQ' is null for cusolverDnSgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (TAUP == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'TAUP' is null for cusolverDnSgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Work' is null for cusolverDnSgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnSgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSgebrd(handle=%p, m=%d, n=%d, A=%p, lda=%d, D=%p, E=%p, TAUQ=%p, TAUP=%p, Work=%p, Lwork=%d, devInfo=%p)\n",
        handle, m, n, A, lda, D, E, TAUQ, TAUP, Work, Lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    float* A_native;
    int lda_native = 0;
    float* D_native;
    float* E_native;
    float* TAUQ_native;
    float* TAUP_native;
    float* Work_native;
    int Lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    D_native = (float*)getPointer(env, D);
    E_native = (float*)getPointer(env, E);
    TAUQ_native = (float*)getPointer(env, TAUQ);
    TAUP_native = (float*)getPointer(env, TAUP);
    Work_native = (float*)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgebrd(handle_native, m_native, n_native, A_native, lda_native, D_native, E_native, TAUQ_native, TAUP_native, Work_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // D is a native pointer
    // E is a native pointer
    // TAUQ is a native pointer
    // TAUP is a native pointer
    // Work is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgebrdNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jobject D, jobject E, jobject TAUQ, jobject TAUP, jobject Work, jint Lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (D == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'D' is null for cusolverDnDgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (E == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'E' is null for cusolverDnDgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (TAUQ == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'TAUQ' is null for cusolverDnDgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (TAUP == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'TAUP' is null for cusolverDnDgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Work' is null for cusolverDnDgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnDgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDgebrd(handle=%p, m=%d, n=%d, A=%p, lda=%d, D=%p, E=%p, TAUQ=%p, TAUP=%p, Work=%p, Lwork=%d, devInfo=%p)\n",
        handle, m, n, A, lda, D, E, TAUQ, TAUP, Work, Lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    double* A_native;
    int lda_native = 0;
    double* D_native;
    double* E_native;
    double* TAUQ_native;
    double* TAUP_native;
    double* Work_native;
    int Lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    D_native = (double*)getPointer(env, D);
    E_native = (double*)getPointer(env, E);
    TAUQ_native = (double*)getPointer(env, TAUQ);
    TAUP_native = (double*)getPointer(env, TAUP);
    Work_native = (double*)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgebrd(handle_native, m_native, n_native, A_native, lda_native, D_native, E_native, TAUQ_native, TAUP_native, Work_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // D is a native pointer
    // E is a native pointer
    // TAUQ is a native pointer
    // TAUP is a native pointer
    // Work is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgebrdNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jobject D, jobject E, jobject TAUQ, jobject TAUP, jobject Work, jint Lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (D == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'D' is null for cusolverDnCgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (E == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'E' is null for cusolverDnCgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (TAUQ == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'TAUQ' is null for cusolverDnCgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (TAUP == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'TAUP' is null for cusolverDnCgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Work' is null for cusolverDnCgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnCgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCgebrd(handle=%p, m=%d, n=%d, A=%p, lda=%d, D=%p, E=%p, TAUQ=%p, TAUP=%p, Work=%p, Lwork=%d, devInfo=%p)\n",
        handle, m, n, A, lda, D, E, TAUQ, TAUP, Work, Lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    float* D_native;
    float* E_native;
    cuComplex* TAUQ_native;
    cuComplex* TAUP_native;
    cuComplex* Work_native;
    int Lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    D_native = (float*)getPointer(env, D);
    E_native = (float*)getPointer(env, E);
    TAUQ_native = (cuComplex*)getPointer(env, TAUQ);
    TAUP_native = (cuComplex*)getPointer(env, TAUP);
    Work_native = (cuComplex*)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgebrd(handle_native, m_native, n_native, A_native, lda_native, D_native, E_native, TAUQ_native, TAUP_native, Work_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // D is a native pointer
    // E is a native pointer
    // TAUQ is a native pointer
    // TAUP is a native pointer
    // Work is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgebrdNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jobject D, jobject E, jobject TAUQ, jobject TAUP, jobject Work, jint Lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (D == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'D' is null for cusolverDnZgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (E == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'E' is null for cusolverDnZgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (TAUQ == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'TAUQ' is null for cusolverDnZgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (TAUP == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'TAUP' is null for cusolverDnZgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Work' is null for cusolverDnZgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnZgebrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZgebrd(handle=%p, m=%d, n=%d, A=%p, lda=%d, D=%p, E=%p, TAUQ=%p, TAUP=%p, Work=%p, Lwork=%d, devInfo=%p)\n",
        handle, m, n, A, lda, D, E, TAUQ, TAUP, Work, Lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    double* D_native;
    double* E_native;
    cuDoubleComplex* TAUQ_native;
    cuDoubleComplex* TAUP_native;
    cuDoubleComplex* Work_native;
    int Lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    D_native = (double*)getPointer(env, D);
    E_native = (double*)getPointer(env, E);
    TAUQ_native = (cuDoubleComplex*)getPointer(env, TAUQ);
    TAUP_native = (cuDoubleComplex*)getPointer(env, TAUP);
    Work_native = (cuDoubleComplex*)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgebrd(handle_native, m_native, n_native, A_native, lda_native, D_native, E_native, TAUQ_native, TAUP_native, Work_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // D is a native pointer
    // E is a native pointer
    // TAUQ is a native pointer
    // TAUP is a native pointer
    // Work is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsytrdNative(JNIEnv *env, jclass cls, jobject handle, jchar uplo, jint n, jobject A, jint lda, jobject D, jobject E, jobject tau, jobject Work, jint Lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (D == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'D' is null for cusolverDnSsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (E == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'E' is null for cusolverDnSsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnSsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Work' is null for cusolverDnSsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnSsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSsytrd(handle=%p, uplo=%c, n=%d, A=%p, lda=%d, D=%p, E=%p, tau=%p, Work=%p, Lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, D, E, tau, Work, Lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    char uplo_native = 0;
    int n_native = 0;
    float* A_native;
    int lda_native = 0;
    float* D_native;
    float* E_native;
    float* tau_native;
    float* Work_native;
    int Lwork_native = 0;
    int* info_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (char)uplo;
    n_native = (int)n;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    D_native = (float*)getPointer(env, D);
    E_native = (float*)getPointer(env, E);
    tau_native = (float*)getPointer(env, tau);
    Work_native = (float*)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    info_native = (int*)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSsytrd(handle_native, uplo_native, n_native, A_native, lda_native, D_native, E_native, tau_native, Work_native, Lwork_native, info_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // D is a native pointer
    // E is a native pointer
    // tau is a native pointer
    // Work is a native pointer
    // Lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsytrdNative(JNIEnv *env, jclass cls, jobject handle, jchar uplo, jint n, jobject A, jint lda, jobject D, jobject E, jobject tau, jobject Work, jint Lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (D == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'D' is null for cusolverDnDsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (E == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'E' is null for cusolverDnDsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnDsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Work' is null for cusolverDnDsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnDsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDsytrd(handle=%p, uplo=%c, n=%d, A=%p, lda=%d, D=%p, E=%p, tau=%p, Work=%p, Lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, D, E, tau, Work, Lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    char uplo_native = 0;
    int n_native = 0;
    double* A_native;
    int lda_native = 0;
    double* D_native;
    double* E_native;
    double* tau_native;
    double* Work_native;
    int Lwork_native = 0;
    int* info_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (char)uplo;
    n_native = (int)n;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    D_native = (double*)getPointer(env, D);
    E_native = (double*)getPointer(env, E);
    tau_native = (double*)getPointer(env, tau);
    Work_native = (double*)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    info_native = (int*)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDsytrd(handle_native, uplo_native, n_native, A_native, lda_native, D_native, E_native, tau_native, Work_native, Lwork_native, info_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // D is a native pointer
    // E is a native pointer
    // tau is a native pointer
    // Work is a native pointer
    // Lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** bidiagonal factorization workspace query */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgebrd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSgebrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnSgebrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSgebrd_bufferSize(handle=%p, m=%d, n=%d, Lwork=%p)\n",
        handle, m, n, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgebrd_bufferSize(handle_native, m_native, n_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgebrd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDgebrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnDgebrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDgebrd_bufferSize(handle=%p, m=%d, n=%d, Lwork=%p)\n",
        handle, m, n, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgebrd_bufferSize(handle_native, m_native, n_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgebrd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCgebrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnCgebrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCgebrd_bufferSize(handle=%p, m=%d, n=%d, Lwork=%p)\n",
        handle, m, n, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgebrd_bufferSize(handle_native, m_native, n_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgebrd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZgebrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnZgebrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZgebrd_bufferSize(handle=%p, m=%d, n=%d, Lwork=%p)\n",
        handle, m, n, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgebrd_bufferSize(handle_native, m_native, n_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** singular value decomposition, A = U * Sigma * V^H */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgesvd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnSgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSgesvd_bufferSize(handle=%p, m=%d, n=%d, Lwork=%p)\n",
        handle, m, n, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgesvd_bufferSize(handle_native, m_native, n_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgesvd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnDgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDgesvd_bufferSize(handle=%p, m=%d, n=%d, Lwork=%p)\n",
        handle, m, n, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgesvd_bufferSize(handle_native, m_native, n_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgesvd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnCgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCgesvd_bufferSize(handle=%p, m=%d, n=%d, Lwork=%p)\n",
        handle, m, n, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgesvd_bufferSize(handle_native, m_native, n_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgesvd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnZgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZgesvd_bufferSize(handle=%p, m=%d, n=%d, Lwork=%p)\n",
        handle, m, n, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgesvd_bufferSize(handle_native, m_native, n_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgesvdNative(JNIEnv *env, jclass cls, jobject handle, jchar jobu, jchar jobvt, jint m, jint n, jobject A, jint lda, jobject S, jobject U, jint ldu, jobject VT, jint ldvt, jobject Work, jint Lwork, jobject rwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // jobu is primitive
    // jobvt is primitive
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (S == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'S' is null for cusolverDnSgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (U == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'U' is null for cusolverDnSgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldu is primitive
    if (VT == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'VT' is null for cusolverDnSgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldvt is primitive
    if (Work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Work' is null for cusolverDnSgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (rwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'rwork' is null for cusolverDnSgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnSgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSgesvd(handle=%p, jobu=%c, jobvt=%c, m=%d, n=%d, A=%p, lda=%d, S=%p, U=%p, ldu=%d, VT=%p, ldvt=%d, Work=%p, Lwork=%d, rwork=%p, devInfo=%p)\n",
        handle, jobu, jobvt, m, n, A, lda, S, U, ldu, VT, ldvt, Work, Lwork, rwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    char jobu_native = 0;
    char jobvt_native = 0;
    int m_native = 0;
    int n_native = 0;
    float* A_native;
    int lda_native = 0;
    float* S_native;
    float* U_native;
    int ldu_native = 0;
    float* VT_native;
    int ldvt_native = 0;
    float* Work_native;
    int Lwork_native = 0;
    float* rwork_native;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobu_native = (char)jobu;
    jobvt_native = (char)jobvt;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    S_native = (float*)getPointer(env, S);
    U_native = (float*)getPointer(env, U);
    ldu_native = (int)ldu;
    VT_native = (float*)getPointer(env, VT);
    ldvt_native = (int)ldvt;
    Work_native = (float*)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    PointerData *rwork_pointerData = initPointerData(env, rwork);
    if (rwork_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    rwork_native = (float*)rwork_pointerData->getPointer(env);
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgesvd(handle_native, jobu_native, jobvt_native, m_native, n_native, A_native, lda_native, S_native, U_native, ldu_native, VT_native, ldvt_native, Work_native, Lwork_native, rwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // jobu is primitive
    // jobvt is primitive
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // S is a native pointer
    // U is a native pointer
    // ldu is primitive
    // VT is a native pointer
    // ldvt is primitive
    // Work is a native pointer
    // Lwork is primitive
    if (!releasePointerData(env, rwork_pointerData, JNI_ABORT)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgesvdNative(JNIEnv *env, jclass cls, jobject handle, jchar jobu, jchar jobvt, jint m, jint n, jobject A, jint lda, jobject S, jobject U, jint ldu, jobject VT, jint ldvt, jobject Work, jint Lwork, jobject rwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // jobu is primitive
    // jobvt is primitive
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (S == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'S' is null for cusolverDnDgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (U == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'U' is null for cusolverDnDgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldu is primitive
    if (VT == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'VT' is null for cusolverDnDgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldvt is primitive
    if (Work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Work' is null for cusolverDnDgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (rwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'rwork' is null for cusolverDnDgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnDgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDgesvd(handle=%p, jobu=%c, jobvt=%c, m=%d, n=%d, A=%p, lda=%d, S=%p, U=%p, ldu=%d, VT=%p, ldvt=%d, Work=%p, Lwork=%d, rwork=%p, devInfo=%p)\n",
        handle, jobu, jobvt, m, n, A, lda, S, U, ldu, VT, ldvt, Work, Lwork, rwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    char jobu_native = 0;
    char jobvt_native = 0;
    int m_native = 0;
    int n_native = 0;
    double* A_native;
    int lda_native = 0;
    double* S_native;
    double* U_native;
    int ldu_native = 0;
    double* VT_native;
    int ldvt_native = 0;
    double* Work_native;
    int Lwork_native = 0;
    double* rwork_native;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobu_native = (char)jobu;
    jobvt_native = (char)jobvt;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    S_native = (double*)getPointer(env, S);
    U_native = (double*)getPointer(env, U);
    ldu_native = (int)ldu;
    VT_native = (double*)getPointer(env, VT);
    ldvt_native = (int)ldvt;
    Work_native = (double*)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    PointerData *rwork_pointerData = initPointerData(env, rwork);
    if (rwork_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    rwork_native = (double*)rwork_pointerData->getPointer(env);
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgesvd(handle_native, jobu_native, jobvt_native, m_native, n_native, A_native, lda_native, S_native, U_native, ldu_native, VT_native, ldvt_native, Work_native, Lwork_native, rwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // jobu is primitive
    // jobvt is primitive
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // S is a native pointer
    // U is a native pointer
    // ldu is primitive
    // VT is a native pointer
    // ldvt is primitive
    // Work is a native pointer
    // Lwork is primitive
    if (!releasePointerData(env, rwork_pointerData, JNI_ABORT)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgesvdNative(JNIEnv *env, jclass cls, jobject handle, jchar jobu, jchar jobvt, jint m, jint n, jobject A, jint lda, jobject S, jobject U, jint ldu, jobject VT, jint ldvt, jobject Work, jint Lwork, jobject rwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // jobu is primitive
    // jobvt is primitive
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (S == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'S' is null for cusolverDnCgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (U == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'U' is null for cusolverDnCgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldu is primitive
    if (VT == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'VT' is null for cusolverDnCgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldvt is primitive
    if (Work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Work' is null for cusolverDnCgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (rwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'rwork' is null for cusolverDnCgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnCgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCgesvd(handle=%p, jobu=%c, jobvt=%c, m=%d, n=%d, A=%p, lda=%d, S=%p, U=%p, ldu=%d, VT=%p, ldvt=%d, Work=%p, Lwork=%d, rwork=%p, devInfo=%p)\n",
        handle, jobu, jobvt, m, n, A, lda, S, U, ldu, VT, ldvt, Work, Lwork, rwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    char jobu_native = 0;
    char jobvt_native = 0;
    int m_native = 0;
    int n_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    float* S_native;
    cuComplex* U_native;
    int ldu_native = 0;
    cuComplex* VT_native;
    int ldvt_native = 0;
    cuComplex* Work_native;
    int Lwork_native = 0;
    float* rwork_native;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobu_native = (char)jobu;
    jobvt_native = (char)jobvt;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    S_native = (float*)getPointer(env, S);
    U_native = (cuComplex*)getPointer(env, U);
    ldu_native = (int)ldu;
    VT_native = (cuComplex*)getPointer(env, VT);
    ldvt_native = (int)ldvt;
    Work_native = (cuComplex*)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    PointerData *rwork_pointerData = initPointerData(env, rwork);
    if (rwork_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    rwork_native = (float*)rwork_pointerData->getPointer(env);
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgesvd(handle_native, jobu_native, jobvt_native, m_native, n_native, A_native, lda_native, S_native, U_native, ldu_native, VT_native, ldvt_native, Work_native, Lwork_native, rwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // jobu is primitive
    // jobvt is primitive
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // S is a native pointer
    // U is a native pointer
    // ldu is primitive
    // VT is a native pointer
    // ldvt is primitive
    // Work is a native pointer
    // Lwork is primitive
    if (!releasePointerData(env, rwork_pointerData, JNI_ABORT)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgesvdNative(JNIEnv *env, jclass cls, jobject handle, jchar jobu, jchar jobvt, jint m, jint n, jobject A, jint lda, jobject S, jobject U, jint ldu, jobject VT, jint ldvt, jobject Work, jint Lwork, jobject rwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // jobu is primitive
    // jobvt is primitive
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (S == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'S' is null for cusolverDnZgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (U == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'U' is null for cusolverDnZgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldu is primitive
    if (VT == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'VT' is null for cusolverDnZgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldvt is primitive
    if (Work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Work' is null for cusolverDnZgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // Lwork is primitive
    if (rwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'rwork' is null for cusolverDnZgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnZgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZgesvd(handle=%p, jobu=%c, jobvt=%c, m=%d, n=%d, A=%p, lda=%d, S=%p, U=%p, ldu=%d, VT=%p, ldvt=%d, Work=%p, Lwork=%d, rwork=%p, devInfo=%p)\n",
        handle, jobu, jobvt, m, n, A, lda, S, U, ldu, VT, ldvt, Work, Lwork, rwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    char jobu_native = 0;
    char jobvt_native = 0;
    int m_native = 0;
    int n_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    double* S_native;
    cuDoubleComplex* U_native;
    int ldu_native = 0;
    cuDoubleComplex* VT_native;
    int ldvt_native = 0;
    cuDoubleComplex* Work_native;
    int Lwork_native = 0;
    double* rwork_native;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobu_native = (char)jobu;
    jobvt_native = (char)jobvt;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    S_native = (double*)getPointer(env, S);
    U_native = (cuDoubleComplex*)getPointer(env, U);
    ldu_native = (int)ldu;
    VT_native = (cuDoubleComplex*)getPointer(env, VT);
    ldvt_native = (int)ldvt;
    Work_native = (cuDoubleComplex*)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    PointerData *rwork_pointerData = initPointerData(env, rwork);
    if (rwork_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    rwork_native = (double*)rwork_pointerData->getPointer(env);
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgesvd(handle_native, jobu_native, jobvt_native, m_native, n_native, A_native, lda_native, S_native, U_native, ldu_native, VT_native, ldvt_native, Work_native, Lwork_native, rwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // jobu is primitive
    // jobvt is primitive
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // S is a native pointer
    // U is a native pointer
    // ldu is primitive
    // VT is a native pointer
    // ldvt is primitive
    // Work is a native pointer
    // Lwork is primitive
    if (!releasePointerData(env, rwork_pointerData, JNI_ABORT)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** LDLT,UDUT factorization */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsytrfNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject ipiv, jobject work, jint lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (ipiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'ipiv' is null for cusolverDnSsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnSsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnSsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSsytrf(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, ipiv=%p, work=%p, lwork=%d, devInfo=%p)\n",
        handle, uplo, n, A, lda, ipiv, work, lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    float* A_native;
    int lda_native = 0;
    int* ipiv_native;
    float* work_native;
    int lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    ipiv_native = (int*)getPointer(env, ipiv);
    work_native = (float*)getPointer(env, work);
    lwork_native = (int)lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSsytrf(handle_native, uplo_native, n_native, A_native, lda_native, ipiv_native, work_native, lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // ipiv is a native pointer
    // work is a native pointer
    // lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsytrfNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject ipiv, jobject work, jint lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (ipiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'ipiv' is null for cusolverDnDsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnDsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnDsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDsytrf(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, ipiv=%p, work=%p, lwork=%d, devInfo=%p)\n",
        handle, uplo, n, A, lda, ipiv, work, lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    double* A_native;
    int lda_native = 0;
    int* ipiv_native;
    double* work_native;
    int lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    ipiv_native = (int*)getPointer(env, ipiv);
    work_native = (double*)getPointer(env, work);
    lwork_native = (int)lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDsytrf(handle_native, uplo_native, n_native, A_native, lda_native, ipiv_native, work_native, lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // ipiv is a native pointer
    // work is a native pointer
    // lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCsytrfNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject ipiv, jobject work, jint lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (ipiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'ipiv' is null for cusolverDnCsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnCsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnCsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCsytrf(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, ipiv=%p, work=%p, lwork=%d, devInfo=%p)\n",
        handle, uplo, n, A, lda, ipiv, work, lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    int* ipiv_native;
    cuComplex* work_native;
    int lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    ipiv_native = (int*)getPointer(env, ipiv);
    work_native = (cuComplex*)getPointer(env, work);
    lwork_native = (int)lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCsytrf(handle_native, uplo_native, n_native, A_native, lda_native, ipiv_native, work_native, lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // ipiv is a native pointer
    // work is a native pointer
    // lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZsytrfNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject ipiv, jobject work, jint lwork, jobject devInfo)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (ipiv == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'ipiv' is null for cusolverDnZsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnZsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (devInfo == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'devInfo' is null for cusolverDnZsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZsytrf(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, ipiv=%p, work=%p, lwork=%d, devInfo=%p)\n",
        handle, uplo, n, A, lda, ipiv, work, lwork, devInfo);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    int* ipiv_native;
    cuDoubleComplex* work_native;
    int lwork_native = 0;
    int* devInfo_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    ipiv_native = (int*)getPointer(env, ipiv);
    work_native = (cuDoubleComplex*)getPointer(env, work);
    lwork_native = (int)lwork;
    devInfo_native = (int*)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZsytrf(handle_native, uplo_native, n_native, A_native, lda_native, ipiv_native, work_native, lwork_native, devInfo_native);

    // Write back native variable values
    // handle is a native pointer object
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // ipiv is a native pointer
    // work is a native pointer
    // lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** SYTRF factorization workspace query */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsytrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnSsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSsytrf_bufferSize(handle=%p, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int n_native = 0;
    float* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (float*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSsytrf_bufferSize(handle_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsytrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnDsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDsytrf_bufferSize(handle=%p, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int n_native = 0;
    double* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (double*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDsytrf_bufferSize(handle_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCsytrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnCsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCsytrf_bufferSize(handle=%p, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int n_native = 0;
    cuComplex* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (cuComplex*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCsytrf_bufferSize(handle_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZsytrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint n, jobject A, jint lda, jintArray Lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (Lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Lwork' is null for cusolverDnZsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZsytrf_bufferSize(handle=%p, n=%d, A=%p, lda=%d, Lwork=%p)\n",
        handle, n, A, lda, Lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int n_native = 0;
    cuDoubleComplex* A_native;
    int lda_native = 0;
    int Lwork_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (cuDoubleComplex*)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZsytrf_bufferSize(handle_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}



