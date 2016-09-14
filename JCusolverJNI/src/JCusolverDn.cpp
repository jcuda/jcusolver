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
    // handle is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCreate(&handle_native);

    // Write back native variable values
    setNativePointerValue(env, handle, (jlong)handle_native);

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    // handle is read-only

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cudaStream_t streamId_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    streamId_native = (cudaStream_t)getNativePointerValue(env, streamId);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSetStream(handle_native, streamId_native);

    // Write back native variable values
    // handle is read-only
    // streamId is read-only

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cudaStream_t streamId_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    // streamId is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnGetStream(handle_native, &streamId_native);

    // Write back native variable values
    // handle is read-only
    setNativePointerValue(env, streamId, (jlong)streamId_native);

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    float * A_native = NULL;
    int lda_native = 0;
    int Lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSpotrf_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    double * A_native = NULL;
    int lda_native = 0;
    int Lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDpotrf_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuComplex * A_native = NULL;
    int lda_native = 0;
    int Lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCpotrf_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    int Lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZpotrf_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    float * A_native = NULL;
    int lda_native = 0;
    float * Workspace_native = NULL;
    int Lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (float *)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSpotrf(handle_native, uplo_native, n_native, A_native, lda_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    double * A_native = NULL;
    int lda_native = 0;
    double * Workspace_native = NULL;
    int Lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (double *)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDpotrf(handle_native, uplo_native, n_native, A_native, lda_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * Workspace_native = NULL;
    int Lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (cuComplex *)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCpotrf(handle_native, uplo_native, n_native, A_native, lda_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * Workspace_native = NULL;
    int Lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (cuDoubleComplex *)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZpotrf(handle_native, uplo_native, n_native, A_native, lda_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    float * A_native = NULL;
    int lda_native = 0;
    float * B_native = NULL;
    int ldb_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (float *)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSpotrs(handle_native, uplo_native, n_native, nrhs_native, A_native, lda_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // nrhs is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    double * A_native = NULL;
    int lda_native = 0;
    double * B_native = NULL;
    int ldb_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (double *)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDpotrs(handle_native, uplo_native, n_native, nrhs_native, A_native, lda_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // nrhs is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * B_native = NULL;
    int ldb_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (cuComplex *)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCpotrs(handle_native, uplo_native, n_native, nrhs_native, A_native, lda_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // nrhs is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * B_native = NULL;
    int ldb_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (cuDoubleComplex *)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZpotrs(handle_native, uplo_native, n_native, nrhs_native, A_native, lda_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // nrhs is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    float * A_native = NULL;
    int lda_native = 0;
    int Lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgetrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    double * A_native = NULL;
    int lda_native = 0;
    int Lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgetrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuComplex * A_native = NULL;
    int lda_native = 0;
    int Lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgetrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    int Lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    // Lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgetrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &Lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    float * A_native = NULL;
    int lda_native = 0;
    float * Workspace_native = NULL;
    int * devIpiv_native = NULL;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (float *)getPointer(env, Workspace);
    devIpiv_native = (int *)getPointer(env, devIpiv);
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgetrf(handle_native, m_native, n_native, A_native, lda_native, Workspace_native, devIpiv_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // devIpiv is a native pointer
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    double * A_native = NULL;
    int lda_native = 0;
    double * Workspace_native = NULL;
    int * devIpiv_native = NULL;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (double *)getPointer(env, Workspace);
    devIpiv_native = (int *)getPointer(env, devIpiv);
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgetrf(handle_native, m_native, n_native, A_native, lda_native, Workspace_native, devIpiv_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // devIpiv is a native pointer
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * Workspace_native = NULL;
    int * devIpiv_native = NULL;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (cuComplex *)getPointer(env, Workspace);
    devIpiv_native = (int *)getPointer(env, devIpiv);
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgetrf(handle_native, m_native, n_native, A_native, lda_native, Workspace_native, devIpiv_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // devIpiv is a native pointer
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * Workspace_native = NULL;
    int * devIpiv_native = NULL;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    Workspace_native = (cuDoubleComplex *)getPointer(env, Workspace);
    devIpiv_native = (int *)getPointer(env, devIpiv);
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgetrf(handle_native, m_native, n_native, A_native, lda_native, Workspace_native, devIpiv_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // Workspace is a native pointer
    // devIpiv is a native pointer
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    float * A_native = NULL;
    int lda_native = 0;
    int k1_native = 0;
    int k2_native = 0;
    int * devIpiv_native = NULL;
    int incx_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    k1_native = (int)k1;
    k2_native = (int)k2;
    devIpiv_native = (int *)getPointer(env, devIpiv);
    incx_native = (int)incx;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSlaswp(handle_native, n_native, A_native, lda_native, k1_native, k2_native, devIpiv_native, incx_native);

    // Write back native variable values
    // handle is read-only
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // k1 is primitive
    // k2 is primitive
    // devIpiv is a native pointer
    // incx is primitive

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    double * A_native = NULL;
    int lda_native = 0;
    int k1_native = 0;
    int k2_native = 0;
    int * devIpiv_native = NULL;
    int incx_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    k1_native = (int)k1;
    k2_native = (int)k2;
    devIpiv_native = (int *)getPointer(env, devIpiv);
    incx_native = (int)incx;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDlaswp(handle_native, n_native, A_native, lda_native, k1_native, k2_native, devIpiv_native, incx_native);

    // Write back native variable values
    // handle is read-only
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // k1 is primitive
    // k2 is primitive
    // devIpiv is a native pointer
    // incx is primitive

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuComplex * A_native = NULL;
    int lda_native = 0;
    int k1_native = 0;
    int k2_native = 0;
    int * devIpiv_native = NULL;
    int incx_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    k1_native = (int)k1;
    k2_native = (int)k2;
    devIpiv_native = (int *)getPointer(env, devIpiv);
    incx_native = (int)incx;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnClaswp(handle_native, n_native, A_native, lda_native, k1_native, k2_native, devIpiv_native, incx_native);

    // Write back native variable values
    // handle is read-only
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // k1 is primitive
    // k2 is primitive
    // devIpiv is a native pointer
    // incx is primitive

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    int k1_native = 0;
    int k2_native = 0;
    int * devIpiv_native = NULL;
    int incx_native = 0;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    k1_native = (int)k1;
    k2_native = (int)k2;
    devIpiv_native = (int *)getPointer(env, devIpiv);
    incx_native = (int)incx;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZlaswp(handle_native, n_native, A_native, lda_native, k1_native, k2_native, devIpiv_native, incx_native);

    // Write back native variable values
    // handle is read-only
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // k1 is primitive
    // k2 is primitive
    // devIpiv is a native pointer
    // incx is primitive

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    float * A_native = NULL;
    int lda_native = 0;
    int * devIpiv_native = NULL;
    float * B_native = NULL;
    int ldb_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    trans_native = (cublasOperation_t)trans;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    devIpiv_native = (int *)getPointer(env, devIpiv);
    B_native = (float *)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgetrs(handle_native, trans_native, n_native, nrhs_native, A_native, lda_native, devIpiv_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
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
    jint jniResult = (jint)jniResult_native;
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
    double * A_native = NULL;
    int lda_native = 0;
    int * devIpiv_native = NULL;
    double * B_native = NULL;
    int ldb_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    trans_native = (cublasOperation_t)trans;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    devIpiv_native = (int *)getPointer(env, devIpiv);
    B_native = (double *)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgetrs(handle_native, trans_native, n_native, nrhs_native, A_native, lda_native, devIpiv_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
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
    jint jniResult = (jint)jniResult_native;
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
    cuComplex * A_native = NULL;
    int lda_native = 0;
    int * devIpiv_native = NULL;
    cuComplex * B_native = NULL;
    int ldb_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    trans_native = (cublasOperation_t)trans;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    devIpiv_native = (int *)getPointer(env, devIpiv);
    B_native = (cuComplex *)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgetrs(handle_native, trans_native, n_native, nrhs_native, A_native, lda_native, devIpiv_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
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
    jint jniResult = (jint)jniResult_native;
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
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    int * devIpiv_native = NULL;
    cuDoubleComplex * B_native = NULL;
    int ldb_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    trans_native = (cublasOperation_t)trans;
    n_native = (int)n;
    nrhs_native = (int)nrhs;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    devIpiv_native = (int *)getPointer(env, devIpiv);
    B_native = (cuDoubleComplex *)getPointer(env, B);
    ldb_native = (int)ldb;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgetrs(handle_native, trans_native, n_native, nrhs_native, A_native, lda_native, devIpiv_native, B_native, ldb_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
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
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/** QR factorization */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgeqrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jintArray lwork)
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
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnSgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSgeqrf_bufferSize(handle=%p, m=%d, n=%d, A=%p, lda=%d, lwork=%p)\n",
        handle, m, n, A, lda, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgeqrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgeqrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jintArray lwork)
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
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnDgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDgeqrf_bufferSize(handle=%p, m=%d, n=%d, A=%p, lda=%d, lwork=%p)\n",
        handle, m, n, A, lda, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgeqrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgeqrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jintArray lwork)
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
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnCgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCgeqrf_bufferSize(handle=%p, m=%d, n=%d, A=%p, lda=%d, lwork=%p)\n",
        handle, m, n, A, lda, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgeqrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgeqrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jobject A, jint lda, jintArray lwork)
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
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnZgeqrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZgeqrf_bufferSize(handle=%p, m=%d, n=%d, A=%p, lda=%d, lwork=%p)\n",
        handle, m, n, A, lda, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgeqrf_bufferSize(handle_native, m_native, n_native, A_native, lda_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

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
    float * A_native = NULL;
    int lda_native = 0;
    float * TAU_native = NULL;
    float * Workspace_native = NULL;
    int Lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    TAU_native = (float *)getPointer(env, TAU);
    Workspace_native = (float *)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgeqrf(handle_native, m_native, n_native, A_native, lda_native, TAU_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // TAU is a native pointer
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    double * A_native = NULL;
    int lda_native = 0;
    double * TAU_native = NULL;
    double * Workspace_native = NULL;
    int Lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    TAU_native = (double *)getPointer(env, TAU);
    Workspace_native = (double *)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgeqrf(handle_native, m_native, n_native, A_native, lda_native, TAU_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // TAU is a native pointer
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * TAU_native = NULL;
    cuComplex * Workspace_native = NULL;
    int Lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    TAU_native = (cuComplex *)getPointer(env, TAU);
    Workspace_native = (cuComplex *)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgeqrf(handle_native, m_native, n_native, A_native, lda_native, TAU_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // TAU is a native pointer
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * TAU_native = NULL;
    cuDoubleComplex * Workspace_native = NULL;
    int Lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    TAU_native = (cuDoubleComplex *)getPointer(env, TAU);
    Workspace_native = (cuDoubleComplex *)getPointer(env, Workspace);
    Lwork_native = (int)Lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgeqrf(handle_native, m_native, n_native, A_native, lda_native, TAU_native, Workspace_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // TAU is a native pointer
    // Workspace is a native pointer
    // Lwork is primitive
    // devInfo is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/** generate unitary matrix Q from QR factorization */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSorgqr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSorgqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSorgqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnSorgqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnSorgqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSorgqr_bufferSize(handle=%p, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, lwork=%p)\n",
        handle, m, n, k, A, lda, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (float *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSorgqr_bufferSize(handle_native, m_native, n_native, k_native, A_native, lda_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDorgqr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDorgqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDorgqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnDorgqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnDorgqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDorgqr_bufferSize(handle=%p, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, lwork=%p)\n",
        handle, m, n, k, A, lda, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (double *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDorgqr_bufferSize(handle_native, m_native, n_native, k_native, A_native, lda_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCungqr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCungqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCungqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnCungqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnCungqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCungqr_bufferSize(handle=%p, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, lwork=%p)\n",
        handle, m, n, k, A, lda, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuComplex *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCungqr_bufferSize(handle_native, m_native, n_native, k_native, A_native, lda_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZungqr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZungqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZungqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnZungqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnZungqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZungqr_bufferSize(handle=%p, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, lwork=%p)\n",
        handle, m, n, k, A, lda, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuDoubleComplex *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZungqr_bufferSize(handle_native, m_native, n_native, k_native, A_native, lda_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSorgqrNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSorgqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSorgqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnSorgqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnSorgqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnSorgqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSorgqr(handle=%p, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, m, n, k, A, lda, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * tau_native = NULL;
    float * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (float *)getPointer(env, tau);
    work_native = (float *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSorgqr(handle_native, m_native, n_native, k_native, A_native, lda_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDorgqrNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDorgqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDorgqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnDorgqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnDorgqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnDorgqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDorgqr(handle=%p, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, m, n, k, A, lda, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * tau_native = NULL;
    double * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (double *)getPointer(env, tau);
    work_native = (double *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDorgqr(handle_native, m_native, n_native, k_native, A_native, lda_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCungqrNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCungqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCungqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnCungqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnCungqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnCungqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCungqr(handle=%p, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, m, n, k, A, lda, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * tau_native = NULL;
    cuComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuComplex *)getPointer(env, tau);
    work_native = (cuComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCungqr(handle_native, m_native, n_native, k_native, A_native, lda_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZungqrNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZungqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZungqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnZungqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnZungqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnZungqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZungqr(handle=%p, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, m, n, k, A, lda, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * tau_native = NULL;
    cuDoubleComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuDoubleComplex *)getPointer(env, tau);
    work_native = (cuDoubleComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZungqr(handle_native, m_native, n_native, k_native, A_native, lda_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/** compute Q**T*b in solve min||A*x = b|| */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSormqr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint trans, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject C, jint ldc, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSormqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSormqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnSormqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnSormqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnSormqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSormqr_bufferSize(handle=%p, side=%d, trans=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, lwork=%p)\n",
        handle, side, trans, m, n, k, A, lda, tau, C, ldc, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * tau_native = NULL;
    float * C_native = NULL;
    int ldc_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (float *)getPointer(env, tau);
    C_native = (float *)getPointer(env, C);
    ldc_native = (int)ldc;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSormqr_bufferSize(handle_native, side_native, trans_native, m_native, n_native, k_native, A_native, lda_native, tau_native, C_native, ldc_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
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
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDormqr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint trans, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject C, jint ldc, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDormqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDormqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnDormqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnDormqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnDormqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDormqr_bufferSize(handle=%p, side=%d, trans=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, lwork=%p)\n",
        handle, side, trans, m, n, k, A, lda, tau, C, ldc, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * tau_native = NULL;
    double * C_native = NULL;
    int ldc_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (double *)getPointer(env, tau);
    C_native = (double *)getPointer(env, C);
    ldc_native = (int)ldc;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDormqr_bufferSize(handle_native, side_native, trans_native, m_native, n_native, k_native, A_native, lda_native, tau_native, C_native, ldc_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
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
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCunmqr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint trans, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject C, jint ldc, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCunmqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCunmqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnCunmqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnCunmqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnCunmqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCunmqr_bufferSize(handle=%p, side=%d, trans=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, lwork=%p)\n",
        handle, side, trans, m, n, k, A, lda, tau, C, ldc, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * tau_native = NULL;
    cuComplex * C_native = NULL;
    int ldc_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuComplex *)getPointer(env, tau);
    C_native = (cuComplex *)getPointer(env, C);
    ldc_native = (int)ldc;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCunmqr_bufferSize(handle_native, side_native, trans_native, m_native, n_native, k_native, A_native, lda_native, tau_native, C_native, ldc_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
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
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZunmqr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint trans, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject C, jint ldc, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZunmqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZunmqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnZunmqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnZunmqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnZunmqr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZunmqr_bufferSize(handle=%p, side=%d, trans=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, lwork=%p)\n",
        handle, side, trans, m, n, k, A, lda, tau, C, ldc, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * tau_native = NULL;
    cuDoubleComplex * C_native = NULL;
    int ldc_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuDoubleComplex *)getPointer(env, tau);
    C_native = (cuDoubleComplex *)getPointer(env, C);
    ldc_native = (int)ldc;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZunmqr_bufferSize(handle_native, side_native, trans_native, m_native, n_native, k_native, A_native, lda_native, tau_native, C_native, ldc_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
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
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    float * A_native = NULL;
    int lda_native = 0;
    float * tau_native = NULL;
    float * C_native = NULL;
    int ldc_native = 0;
    float * work_native = NULL;
    int lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (float *)getPointer(env, tau);
    C_native = (float *)getPointer(env, C);
    ldc_native = (int)ldc;
    work_native = (float *)getPointer(env, work);
    lwork_native = (int)lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSormqr(handle_native, side_native, trans_native, m_native, n_native, k_native, A_native, lda_native, tau_native, C_native, ldc_native, work_native, lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
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
    jint jniResult = (jint)jniResult_native;
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
    double * A_native = NULL;
    int lda_native = 0;
    double * tau_native = NULL;
    double * C_native = NULL;
    int ldc_native = 0;
    double * work_native = NULL;
    int lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (double *)getPointer(env, tau);
    C_native = (double *)getPointer(env, C);
    ldc_native = (int)ldc;
    work_native = (double *)getPointer(env, work);
    lwork_native = (int)lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDormqr(handle_native, side_native, trans_native, m_native, n_native, k_native, A_native, lda_native, tau_native, C_native, ldc_native, work_native, lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
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
    jint jniResult = (jint)jniResult_native;
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
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * tau_native = NULL;
    cuComplex * C_native = NULL;
    int ldc_native = 0;
    cuComplex * work_native = NULL;
    int lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuComplex *)getPointer(env, tau);
    C_native = (cuComplex *)getPointer(env, C);
    ldc_native = (int)ldc;
    work_native = (cuComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCunmqr(handle_native, side_native, trans_native, m_native, n_native, k_native, A_native, lda_native, tau_native, C_native, ldc_native, work_native, lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
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
    jint jniResult = (jint)jniResult_native;
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
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * tau_native = NULL;
    cuDoubleComplex * C_native = NULL;
    int ldc_native = 0;
    cuDoubleComplex * work_native = NULL;
    int lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuDoubleComplex *)getPointer(env, tau);
    C_native = (cuDoubleComplex *)getPointer(env, C);
    ldc_native = (int)ldc;
    work_native = (cuDoubleComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZunmqr(handle_native, side_native, trans_native, m_native, n_native, k_native, A_native, lda_native, tau_native, C_native, ldc_native, work_native, lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
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
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/** L*D*L**T,U*D*U**T factorization */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsytrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint n, jobject A, jint lda, jintArray lwork)
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
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnSsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSsytrf_bufferSize(handle=%p, n=%d, A=%p, lda=%d, lwork=%p)\n",
        handle, n, A, lda, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSsytrf_bufferSize(handle_native, n_native, A_native, lda_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsytrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint n, jobject A, jint lda, jintArray lwork)
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
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnDsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDsytrf_bufferSize(handle=%p, n=%d, A=%p, lda=%d, lwork=%p)\n",
        handle, n, A, lda, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDsytrf_bufferSize(handle_native, n_native, A_native, lda_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCsytrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint n, jobject A, jint lda, jintArray lwork)
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
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnCsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCsytrf_bufferSize(handle=%p, n=%d, A=%p, lda=%d, lwork=%p)\n",
        handle, n, A, lda, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCsytrf_bufferSize(handle_native, n_native, A_native, lda_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZsytrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint n, jobject A, jint lda, jintArray lwork)
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
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnZsytrf_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZsytrf_bufferSize(handle=%p, n=%d, A=%p, lda=%d, lwork=%p)\n",
        handle, n, A, lda, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZsytrf_bufferSize(handle_native, n_native, A_native, lda_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // n is primitive
    // A is a native pointer
    // lda is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsytrfNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject ipiv, jobject work, jint lwork, jobject info)
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
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnSsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSsytrf(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, ipiv=%p, work=%p, lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, ipiv, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    int * ipiv_native = NULL;
    float * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    ipiv_native = (int *)getPointer(env, ipiv);
    work_native = (float *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSsytrf(handle_native, uplo_native, n_native, A_native, lda_native, ipiv_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // ipiv is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsytrfNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject ipiv, jobject work, jint lwork, jobject info)
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
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnDsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDsytrf(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, ipiv=%p, work=%p, lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, ipiv, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    int * ipiv_native = NULL;
    double * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    ipiv_native = (int *)getPointer(env, ipiv);
    work_native = (double *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDsytrf(handle_native, uplo_native, n_native, A_native, lda_native, ipiv_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // ipiv is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCsytrfNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject ipiv, jobject work, jint lwork, jobject info)
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
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnCsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCsytrf(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, ipiv=%p, work=%p, lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, ipiv, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    int * ipiv_native = NULL;
    cuComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    ipiv_native = (int *)getPointer(env, ipiv);
    work_native = (cuComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCsytrf(handle_native, uplo_native, n_native, A_native, lda_native, ipiv_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // ipiv is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZsytrfNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject ipiv, jobject work, jint lwork, jobject info)
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
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnZsytrf");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZsytrf(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, ipiv=%p, work=%p, lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, ipiv, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    int * ipiv_native = NULL;
    cuDoubleComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    ipiv_native = (int *)getPointer(env, ipiv);
    work_native = (cuDoubleComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZsytrf(handle_native, uplo_native, n_native, A_native, lda_native, ipiv_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // ipiv is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/** bidiagonal factorization */
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
    int Lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // Lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgebrd_bufferSize(handle_native, m_native, n_native, &Lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    int Lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // Lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgebrd_bufferSize(handle_native, m_native, n_native, &Lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    int Lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // Lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgebrd_bufferSize(handle_native, m_native, n_native, &Lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
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
    int Lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // Lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgebrd_bufferSize(handle_native, m_native, n_native, &Lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    if (!set(env, Lwork, 0, (jint)Lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

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
    float * A_native = NULL;
    int lda_native = 0;
    float * D_native = NULL;
    float * E_native = NULL;
    float * TAUQ_native = NULL;
    float * TAUP_native = NULL;
    float * Work_native = NULL;
    int Lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    D_native = (float *)getPointer(env, D);
    E_native = (float *)getPointer(env, E);
    TAUQ_native = (float *)getPointer(env, TAUQ);
    TAUP_native = (float *)getPointer(env, TAUP);
    Work_native = (float *)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgebrd(handle_native, m_native, n_native, A_native, lda_native, D_native, E_native, TAUQ_native, TAUP_native, Work_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
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
    jint jniResult = (jint)jniResult_native;
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
    double * A_native = NULL;
    int lda_native = 0;
    double * D_native = NULL;
    double * E_native = NULL;
    double * TAUQ_native = NULL;
    double * TAUP_native = NULL;
    double * Work_native = NULL;
    int Lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    D_native = (double *)getPointer(env, D);
    E_native = (double *)getPointer(env, E);
    TAUQ_native = (double *)getPointer(env, TAUQ);
    TAUP_native = (double *)getPointer(env, TAUP);
    Work_native = (double *)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgebrd(handle_native, m_native, n_native, A_native, lda_native, D_native, E_native, TAUQ_native, TAUP_native, Work_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
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
    jint jniResult = (jint)jniResult_native;
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
    cuComplex * A_native = NULL;
    int lda_native = 0;
    float * D_native = NULL;
    float * E_native = NULL;
    cuComplex * TAUQ_native = NULL;
    cuComplex * TAUP_native = NULL;
    cuComplex * Work_native = NULL;
    int Lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    D_native = (float *)getPointer(env, D);
    E_native = (float *)getPointer(env, E);
    TAUQ_native = (cuComplex *)getPointer(env, TAUQ);
    TAUP_native = (cuComplex *)getPointer(env, TAUP);
    Work_native = (cuComplex *)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgebrd(handle_native, m_native, n_native, A_native, lda_native, D_native, E_native, TAUQ_native, TAUP_native, Work_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
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
    jint jniResult = (jint)jniResult_native;
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
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    double * D_native = NULL;
    double * E_native = NULL;
    cuDoubleComplex * TAUQ_native = NULL;
    cuDoubleComplex * TAUP_native = NULL;
    cuDoubleComplex * Work_native = NULL;
    int Lwork_native = 0;
    int * devInfo_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    D_native = (double *)getPointer(env, D);
    E_native = (double *)getPointer(env, E);
    TAUQ_native = (cuDoubleComplex *)getPointer(env, TAUQ);
    TAUP_native = (cuDoubleComplex *)getPointer(env, TAUP);
    Work_native = (cuDoubleComplex *)getPointer(env, Work);
    Lwork_native = (int)Lwork;
    devInfo_native = (int *)getPointer(env, devInfo);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgebrd(handle_native, m_native, n_native, A_native, lda_native, D_native, E_native, TAUQ_native, TAUP_native, Work_native, Lwork_native, devInfo_native);

    // Write back native variable values
    // handle is read-only
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
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/** generates one of the unitary matrices Q or P**T determined by GEBRD*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSorgbr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSorgbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSorgbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnSorgbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnSorgbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSorgbr_bufferSize(handle=%p, side=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, lwork=%p)\n",
        handle, side, m, n, k, A, lda, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (float *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSorgbr_bufferSize(handle_native, side_native, m_native, n_native, k_native, A_native, lda_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDorgbr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDorgbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDorgbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnDorgbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnDorgbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDorgbr_bufferSize(handle=%p, side=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, lwork=%p)\n",
        handle, side, m, n, k, A, lda, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (double *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDorgbr_bufferSize(handle_native, side_native, m_native, n_native, k_native, A_native, lda_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCungbr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCungbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCungbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnCungbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnCungbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCungbr_bufferSize(handle=%p, side=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, lwork=%p)\n",
        handle, side, m, n, k, A, lda, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuComplex *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCungbr_bufferSize(handle_native, side_native, m_native, n_native, k_native, A_native, lda_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZungbr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZungbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZungbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnZungbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnZungbr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZungbr_bufferSize(handle=%p, side=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, lwork=%p)\n",
        handle, side, m, n, k, A, lda, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuDoubleComplex *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZungbr_bufferSize(handle_native, side_native, m_native, n_native, k_native, A_native, lda_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSorgbrNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSorgbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSorgbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnSorgbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnSorgbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnSorgbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSorgbr(handle=%p, side=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, side, m, n, k, A, lda, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * tau_native = NULL;
    float * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (float *)getPointer(env, tau);
    work_native = (float *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSorgbr(handle_native, side_native, m_native, n_native, k_native, A_native, lda_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDorgbrNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDorgbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDorgbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnDorgbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnDorgbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnDorgbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDorgbr(handle=%p, side=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, side, m, n, k, A, lda, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * tau_native = NULL;
    double * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (double *)getPointer(env, tau);
    work_native = (double *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDorgbr(handle_native, side_native, m_native, n_native, k_native, A_native, lda_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCungbrNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCungbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCungbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnCungbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnCungbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnCungbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCungbr(handle=%p, side=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, side, m, n, k, A, lda, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * tau_native = NULL;
    cuComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuComplex *)getPointer(env, tau);
    work_native = (cuComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCungbr(handle_native, side_native, m_native, n_native, k_native, A_native, lda_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZungbrNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint m, jint n, jint k, jobject A, jint lda, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZungbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZungbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnZungbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnZungbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnZungbr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZungbr(handle=%p, side=%d, m=%d, n=%d, k=%d, A=%p, lda=%d, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, side, m, n, k, A, lda, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    int m_native = 0;
    int n_native = 0;
    int k_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * tau_native = NULL;
    cuDoubleComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    m_native = (int)m;
    n_native = (int)n;
    k_native = (int)k;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuDoubleComplex *)getPointer(env, tau);
    work_native = (cuDoubleComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZungbr(handle_native, side_native, m_native, n_native, k_native, A_native, lda_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // m is primitive
    // n is primitive
    // k is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/** tridiagonal factorization */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsytrd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject d, jobject e, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSsytrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSsytrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (d == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'd' is null for cusolverDnSsytrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (e == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'e' is null for cusolverDnSsytrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnSsytrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnSsytrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSsytrd_bufferSize(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, d=%p, e=%p, tau=%p, lwork=%p)\n",
        handle, uplo, n, A, lda, d, e, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * d_native = NULL;
    float * e_native = NULL;
    float * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    d_native = (float *)getPointer(env, d);
    e_native = (float *)getPointer(env, e);
    tau_native = (float *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSsytrd_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, d_native, e_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // d is a native pointer
    // e is a native pointer
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsytrd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject d, jobject e, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDsytrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDsytrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (d == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'd' is null for cusolverDnDsytrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (e == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'e' is null for cusolverDnDsytrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnDsytrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnDsytrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDsytrd_bufferSize(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, d=%p, e=%p, tau=%p, lwork=%p)\n",
        handle, uplo, n, A, lda, d, e, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * d_native = NULL;
    double * e_native = NULL;
    double * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    d_native = (double *)getPointer(env, d);
    e_native = (double *)getPointer(env, e);
    tau_native = (double *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDsytrd_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, d_native, e_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // d is a native pointer
    // e is a native pointer
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnChetrd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject d, jobject e, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnChetrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnChetrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (d == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'd' is null for cusolverDnChetrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (e == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'e' is null for cusolverDnChetrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnChetrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnChetrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnChetrd_bufferSize(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, d=%p, e=%p, tau=%p, lwork=%p)\n",
        handle, uplo, n, A, lda, d, e, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    float * d_native = NULL;
    float * e_native = NULL;
    cuComplex * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    d_native = (float *)getPointer(env, d);
    e_native = (float *)getPointer(env, e);
    tau_native = (cuComplex *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnChetrd_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, d_native, e_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // d is a native pointer
    // e is a native pointer
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZhetrd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject d, jobject e, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZhetrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZhetrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (d == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'd' is null for cusolverDnZhetrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (e == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'e' is null for cusolverDnZhetrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnZhetrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnZhetrd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZhetrd_bufferSize(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, d=%p, e=%p, tau=%p, lwork=%p)\n",
        handle, uplo, n, A, lda, d, e, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    double * d_native = NULL;
    double * e_native = NULL;
    cuDoubleComplex * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    d_native = (double *)getPointer(env, d);
    e_native = (double *)getPointer(env, e);
    tau_native = (cuDoubleComplex *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZhetrd_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, d_native, e_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // d is a native pointer
    // e is a native pointer
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsytrdNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject d, jobject e, jobject tau, jobject work, jint lwork, jobject info)
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
    if (d == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'd' is null for cusolverDnSsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (e == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'e' is null for cusolverDnSsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnSsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnSsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnSsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSsytrd(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, d=%p, e=%p, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, d, e, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * d_native = NULL;
    float * e_native = NULL;
    float * tau_native = NULL;
    float * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    d_native = (float *)getPointer(env, d);
    e_native = (float *)getPointer(env, e);
    tau_native = (float *)getPointer(env, tau);
    work_native = (float *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSsytrd(handle_native, uplo_native, n_native, A_native, lda_native, d_native, e_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // d is a native pointer
    // e is a native pointer
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsytrdNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject d, jobject e, jobject tau, jobject work, jint lwork, jobject info)
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
    if (d == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'd' is null for cusolverDnDsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (e == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'e' is null for cusolverDnDsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnDsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnDsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnDsytrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDsytrd(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, d=%p, e=%p, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, d, e, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * d_native = NULL;
    double * e_native = NULL;
    double * tau_native = NULL;
    double * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    d_native = (double *)getPointer(env, d);
    e_native = (double *)getPointer(env, e);
    tau_native = (double *)getPointer(env, tau);
    work_native = (double *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDsytrd(handle_native, uplo_native, n_native, A_native, lda_native, d_native, e_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // d is a native pointer
    // e is a native pointer
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnChetrdNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject d, jobject e, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnChetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnChetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (d == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'd' is null for cusolverDnChetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (e == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'e' is null for cusolverDnChetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnChetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnChetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnChetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnChetrd(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, d=%p, e=%p, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, d, e, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    float * d_native = NULL;
    float * e_native = NULL;
    cuComplex * tau_native = NULL;
    cuComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    d_native = (float *)getPointer(env, d);
    e_native = (float *)getPointer(env, e);
    tau_native = (cuComplex *)getPointer(env, tau);
    work_native = (cuComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnChetrd(handle_native, uplo_native, n_native, A_native, lda_native, d_native, e_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // d is a native pointer
    // e is a native pointer
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZhetrdNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject d, jobject e, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZhetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZhetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (d == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'd' is null for cusolverDnZhetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (e == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'e' is null for cusolverDnZhetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnZhetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnZhetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnZhetrd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZhetrd(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, d=%p, e=%p, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, d, e, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    double * d_native = NULL;
    double * e_native = NULL;
    cuDoubleComplex * tau_native = NULL;
    cuDoubleComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    d_native = (double *)getPointer(env, d);
    e_native = (double *)getPointer(env, e);
    tau_native = (cuDoubleComplex *)getPointer(env, tau);
    work_native = (cuDoubleComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZhetrd(handle_native, uplo_native, n_native, A_native, lda_native, d_native, e_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // d is a native pointer
    // e is a native pointer
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/** generate unitary Q comes from sytrd */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSorgtr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSorgtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSorgtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnSorgtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnSorgtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSorgtr_bufferSize(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, tau=%p, lwork=%p)\n",
        handle, uplo, n, A, lda, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (float *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSorgtr_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDorgtr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDorgtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDorgtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnDorgtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnDorgtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDorgtr_bufferSize(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, tau=%p, lwork=%p)\n",
        handle, uplo, n, A, lda, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (double *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDorgtr_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCungtr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCungtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCungtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnCungtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnCungtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCungtr_bufferSize(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, tau=%p, lwork=%p)\n",
        handle, uplo, n, A, lda, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuComplex *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCungtr_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZungtr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject tau, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZungtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZungtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnZungtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnZungtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZungtr_bufferSize(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, tau=%p, lwork=%p)\n",
        handle, uplo, n, A, lda, tau, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * tau_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuDoubleComplex *)getPointer(env, tau);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZungtr_bufferSize(handle_native, uplo_native, n_native, A_native, lda_native, tau_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSorgtrNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSorgtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSorgtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnSorgtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnSorgtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnSorgtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSorgtr(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * tau_native = NULL;
    float * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (float *)getPointer(env, tau);
    work_native = (float *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSorgtr(handle_native, uplo_native, n_native, A_native, lda_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDorgtrNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDorgtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDorgtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnDorgtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnDorgtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnDorgtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDorgtr(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * tau_native = NULL;
    double * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (double *)getPointer(env, tau);
    work_native = (double *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDorgtr(handle_native, uplo_native, n_native, A_native, lda_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCungtrNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCungtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCungtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnCungtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnCungtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnCungtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCungtr(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * tau_native = NULL;
    cuComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuComplex *)getPointer(env, tau);
    work_native = (cuComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCungtr(handle_native, uplo_native, n_native, A_native, lda_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZungtrNative(JNIEnv *env, jclass cls, jobject handle, jint uplo, jint n, jobject A, jint lda, jobject tau, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZungtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZungtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnZungtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnZungtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnZungtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZungtr(handle=%p, uplo=%d, n=%d, A=%p, lda=%d, tau=%p, work=%p, lwork=%d, info=%p)\n",
        handle, uplo, n, A, lda, tau, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * tau_native = NULL;
    cuDoubleComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuDoubleComplex *)getPointer(env, tau);
    work_native = (cuDoubleComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZungtr(handle_native, uplo_native, n_native, A_native, lda_native, tau_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/** compute op(Q)*C or C*op(Q) where Q comes from sytrd */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSormtr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint uplo, jint trans, jint m, jint n, jobject A, jint lda, jobject tau, jobject C, jint ldc, jintArray lwork)
{
    // XXX Missing function
    ThrowByName(env, "java/lang/UnsupportedOperationException", "This function is not implemented in CUDA 8.0.27");
    return JCUSOLVER_STATUS_INTERNAL_ERROR;
    /*

    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSormtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSormtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnSormtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnSormtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnSormtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSormtr_bufferSize(handle=%p, side=%d, uplo=%d, trans=%d, m=%d, n=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, lwork=%p)\n",
        handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasFillMode_t uplo_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * tau_native = NULL;
    float * C_native = NULL;
    int ldc_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    uplo_native = (cublasFillMode_t)uplo;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (float *)getPointer(env, tau);
    C_native = (float *)getPointer(env, C);
    ldc_native = (int)ldc;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSormtr_bufferSize(handle_native, side_native, uplo_native, trans_native, m_native, n_native, A_native, lda_native, tau_native, C_native, ldc_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // C is a native pointer
    // ldc is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;

    */
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDormtr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint uplo, jint trans, jint m, jint n, jobject A, jint lda, jobject tau, jobject C, jint ldc, jintArray lwork)
{
    // XXX Missing function
    ThrowByName(env, "java/lang/UnsupportedOperationException", "This function is not implemented in CUDA 8.0.27");
    return JCUSOLVER_STATUS_INTERNAL_ERROR;
    /*

    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDormtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDormtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnDormtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnDormtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnDormtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDormtr_bufferSize(handle=%p, side=%d, uplo=%d, trans=%d, m=%d, n=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, lwork=%p)\n",
        handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasFillMode_t uplo_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * tau_native = NULL;
    double * C_native = NULL;
    int ldc_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    uplo_native = (cublasFillMode_t)uplo;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (double *)getPointer(env, tau);
    C_native = (double *)getPointer(env, C);
    ldc_native = (int)ldc;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDormtr_bufferSize(handle_native, side_native, uplo_native, trans_native, m_native, n_native, A_native, lda_native, tau_native, C_native, ldc_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // C is a native pointer
    // ldc is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;

    */
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCunmtr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint uplo, jint trans, jint m, jint n, jobject A, jint lda, jobject tau, jobject C, jint ldc, jintArray lwork)
{
    // XXX Missing function
    ThrowByName(env, "java/lang/UnsupportedOperationException", "This function is not implemented in CUDA 8.0.27");
    return JCUSOLVER_STATUS_INTERNAL_ERROR;
    /*

    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCunmtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCunmtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnCunmtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnCunmtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnCunmtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCunmtr_bufferSize(handle=%p, side=%d, uplo=%d, trans=%d, m=%d, n=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, lwork=%p)\n",
        handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasFillMode_t uplo_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * tau_native = NULL;
    cuComplex * C_native = NULL;
    int ldc_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    uplo_native = (cublasFillMode_t)uplo;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuComplex *)getPointer(env, tau);
    C_native = (cuComplex *)getPointer(env, C);
    ldc_native = (int)ldc;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCunmtr_bufferSize(handle_native, side_native, uplo_native, trans_native, m_native, n_native, A_native, lda_native, tau_native, C_native, ldc_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // C is a native pointer
    // ldc is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;

    */
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZunmtr_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint uplo, jint trans, jint m, jint n, jobject A, jint lda, jobject tau, jobject C, jint ldc, jintArray lwork)
{
    // XXX Missing function
    ThrowByName(env, "java/lang/UnsupportedOperationException", "This function is not implemented in CUDA 8.0.27");
    return JCUSOLVER_STATUS_INTERNAL_ERROR;
    /*

    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZunmtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZunmtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnZunmtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnZunmtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnZunmtr_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZunmtr_bufferSize(handle=%p, side=%d, uplo=%d, trans=%d, m=%d, n=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, lwork=%p)\n",
        handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasFillMode_t uplo_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * tau_native = NULL;
    cuDoubleComplex * C_native = NULL;
    int ldc_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    uplo_native = (cublasFillMode_t)uplo;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuDoubleComplex *)getPointer(env, tau);
    C_native = (cuDoubleComplex *)getPointer(env, C);
    ldc_native = (int)ldc;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZunmtr_bufferSize(handle_native, side_native, uplo_native, trans_native, m_native, n_native, A_native, lda_native, tau_native, C_native, ldc_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // C is a native pointer
    // ldc is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;

    */
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSormtrNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint uplo, jint trans, jint m, jint n, jobject A, jint lda, jobject tau, jobject C, jint ldc, jobject work, jint lwork, jobject info)
{
    // XXX Missing function
    ThrowByName(env, "java/lang/UnsupportedOperationException", "This function is not implemented in CUDA 8.0.27");
    return JCUSOLVER_STATUS_INTERNAL_ERROR;
    /*

    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSormtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSormtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnSormtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnSormtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnSormtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnSormtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSormtr(handle=%p, side=%d, uplo=%d, trans=%d, m=%d, n=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, work=%p, lwork=%d, info=%p)\n",
        handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasFillMode_t uplo_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * tau_native = NULL;
    float * C_native = NULL;
    int ldc_native = 0;
    float * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    uplo_native = (cublasFillMode_t)uplo;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (float *)getPointer(env, tau);
    C_native = (float *)getPointer(env, C);
    ldc_native = (int)ldc;
    work_native = (float *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSormtr(handle_native, side_native, uplo_native, trans_native, m_native, n_native, A_native, lda_native, tau_native, C_native, ldc_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // C is a native pointer
    // ldc is primitive
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;

    */
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDormtrNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint uplo, jint trans, jint m, jint n, jobject A, jint lda, jobject tau, jobject C, jint ldc, jobject work, jint lwork, jobject info)
{
    // XXX Missing function
    ThrowByName(env, "java/lang/UnsupportedOperationException", "This function is not implemented in CUDA 8.0.27");
    return JCUSOLVER_STATUS_INTERNAL_ERROR;
    /*

    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDormtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDormtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnDormtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnDormtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnDormtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnDormtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDormtr(handle=%p, side=%d, uplo=%d, trans=%d, m=%d, n=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, work=%p, lwork=%d, info=%p)\n",
        handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasFillMode_t uplo_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * tau_native = NULL;
    double * C_native = NULL;
    int ldc_native = 0;
    double * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    uplo_native = (cublasFillMode_t)uplo;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (double *)getPointer(env, tau);
    C_native = (double *)getPointer(env, C);
    ldc_native = (int)ldc;
    work_native = (double *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDormtr(handle_native, side_native, uplo_native, trans_native, m_native, n_native, A_native, lda_native, tau_native, C_native, ldc_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // C is a native pointer
    // ldc is primitive
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;

    */
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCunmtrNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint uplo, jint trans, jint m, jint n, jobject A, jint lda, jobject tau, jobject C, jint ldc, jobject work, jint lwork, jobject info)
{
    // XXX Missing function
    ThrowByName(env, "java/lang/UnsupportedOperationException", "This function is not implemented in CUDA 8.0.27");
    return JCUSOLVER_STATUS_INTERNAL_ERROR;
    /*

    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCunmtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCunmtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnCunmtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnCunmtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnCunmtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnCunmtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCunmtr(handle=%p, side=%d, uplo=%d, trans=%d, m=%d, n=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, work=%p, lwork=%d, info=%p)\n",
        handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasFillMode_t uplo_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * tau_native = NULL;
    cuComplex * C_native = NULL;
    int ldc_native = 0;
    cuComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    uplo_native = (cublasFillMode_t)uplo;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuComplex *)getPointer(env, tau);
    C_native = (cuComplex *)getPointer(env, C);
    ldc_native = (int)ldc;
    work_native = (cuComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCunmtr(handle_native, side_native, uplo_native, trans_native, m_native, n_native, A_native, lda_native, tau_native, C_native, ldc_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // C is a native pointer
    // ldc is primitive
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;

    */
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZunmtrNative(JNIEnv *env, jclass cls, jobject handle, jint side, jint uplo, jint trans, jint m, jint n, jobject A, jint lda, jobject tau, jobject C, jint ldc, jobject work, jint lwork, jobject info)
{
    // XXX Missing function
    ThrowByName(env, "java/lang/UnsupportedOperationException", "This function is not implemented in CUDA 8.0.27");
    return JCUSOLVER_STATUS_INTERNAL_ERROR;
    /*

    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZunmtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZunmtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (tau == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'tau' is null for cusolverDnZunmtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (C == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'C' is null for cusolverDnZunmtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldc is primitive
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnZunmtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnZunmtr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZunmtr(handle=%p, side=%d, uplo=%d, trans=%d, m=%d, n=%d, A=%p, lda=%d, tau=%p, C=%p, ldc=%d, work=%p, lwork=%d, info=%p)\n",
        handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cublasSideMode_t side_native;
    cublasFillMode_t uplo_native;
    cublasOperation_t trans_native;
    int m_native = 0;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * tau_native = NULL;
    cuDoubleComplex * C_native = NULL;
    int ldc_native = 0;
    cuDoubleComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    side_native = (cublasSideMode_t)side;
    uplo_native = (cublasFillMode_t)uplo;
    trans_native = (cublasOperation_t)trans;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    tau_native = (cuDoubleComplex *)getPointer(env, tau);
    C_native = (cuDoubleComplex *)getPointer(env, C);
    ldc_native = (int)ldc;
    work_native = (cuDoubleComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZunmtr(handle_native, side_native, uplo_native, trans_native, m_native, n_native, A_native, lda_native, tau_native, C_native, ldc_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // side is primitive
    // uplo is primitive
    // trans is primitive
    // m is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // tau is a native pointer
    // C is a native pointer
    // ldc is primitive
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;

    */
}

/** singular value decomposition, A = U * Sigma * V^H */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgesvd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnSgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSgesvd_bufferSize(handle=%p, m=%d, n=%d, lwork=%p)\n",
        handle, m, n, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgesvd_bufferSize(handle_native, m_native, n_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgesvd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnDgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDgesvd_bufferSize(handle=%p, m=%d, n=%d, lwork=%p)\n",
        handle, m, n, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgesvd_bufferSize(handle_native, m_native, n_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgesvd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnCgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCgesvd_bufferSize(handle=%p, m=%d, n=%d, lwork=%p)\n",
        handle, m, n, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgesvd_bufferSize(handle_native, m_native, n_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgesvd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnZgesvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZgesvd_bufferSize(handle=%p, m=%d, n=%d, lwork=%p)\n",
        handle, m, n, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgesvd_bufferSize(handle_native, m_native, n_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // m is primitive
    // n is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSgesvdNative(JNIEnv *env, jclass cls, jobject handle, jchar jobu, jchar jobvt, jint m, jint n, jobject A, jint lda, jobject S, jobject U, jint ldu, jobject VT, jint ldvt, jobject work, jint lwork, jobject rwork, jobject info)
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
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnSgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (rwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'rwork' is null for cusolverDnSgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnSgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSgesvd(handle=%p, jobu=%c, jobvt=%c, m=%d, n=%d, A=%p, lda=%d, S=%p, U=%p, ldu=%d, VT=%p, ldvt=%d, work=%p, lwork=%d, rwork=%p, info=%p)\n",
        handle, jobu, jobvt, m, n, A, lda, S, U, ldu, VT, ldvt, work, lwork, rwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    char jobu_native = 0;
    char jobvt_native = 0;
    int m_native = 0;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * S_native = NULL;
    float * U_native = NULL;
    int ldu_native = 0;
    float * VT_native = NULL;
    int ldvt_native = 0;
    float * work_native = NULL;
    int lwork_native = 0;
    float * rwork_native = NULL;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobu_native = (char)jobu;
    jobvt_native = (char)jobvt;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    S_native = (float *)getPointer(env, S);
    U_native = (float *)getPointer(env, U);
    ldu_native = (int)ldu;
    VT_native = (float *)getPointer(env, VT);
    ldvt_native = (int)ldvt;
    work_native = (float *)getPointer(env, work);
    lwork_native = (int)lwork;
    PointerData *rwork_pointerData = initPointerData(env, rwork);
    if (rwork_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    rwork_native = (float *)rwork_pointerData->getPointer(env);
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSgesvd(handle_native, jobu_native, jobvt_native, m_native, n_native, A_native, lda_native, S_native, U_native, ldu_native, VT_native, ldvt_native, work_native, lwork_native, rwork_native, info_native);

    // Write back native variable values
    // handle is read-only
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
    // work is a native pointer
    // lwork is primitive
    if (!releasePointerData(env, rwork_pointerData, JNI_ABORT)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDgesvdNative(JNIEnv *env, jclass cls, jobject handle, jchar jobu, jchar jobvt, jint m, jint n, jobject A, jint lda, jobject S, jobject U, jint ldu, jobject VT, jint ldvt, jobject work, jint lwork, jobject rwork, jobject info)
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
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnDgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (rwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'rwork' is null for cusolverDnDgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnDgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDgesvd(handle=%p, jobu=%c, jobvt=%c, m=%d, n=%d, A=%p, lda=%d, S=%p, U=%p, ldu=%d, VT=%p, ldvt=%d, work=%p, lwork=%d, rwork=%p, info=%p)\n",
        handle, jobu, jobvt, m, n, A, lda, S, U, ldu, VT, ldvt, work, lwork, rwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    char jobu_native = 0;
    char jobvt_native = 0;
    int m_native = 0;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * S_native = NULL;
    double * U_native = NULL;
    int ldu_native = 0;
    double * VT_native = NULL;
    int ldvt_native = 0;
    double * work_native = NULL;
    int lwork_native = 0;
    double * rwork_native = NULL;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobu_native = (char)jobu;
    jobvt_native = (char)jobvt;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    S_native = (double *)getPointer(env, S);
    U_native = (double *)getPointer(env, U);
    ldu_native = (int)ldu;
    VT_native = (double *)getPointer(env, VT);
    ldvt_native = (int)ldvt;
    work_native = (double *)getPointer(env, work);
    lwork_native = (int)lwork;
    PointerData *rwork_pointerData = initPointerData(env, rwork);
    if (rwork_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    rwork_native = (double *)rwork_pointerData->getPointer(env);
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDgesvd(handle_native, jobu_native, jobvt_native, m_native, n_native, A_native, lda_native, S_native, U_native, ldu_native, VT_native, ldvt_native, work_native, lwork_native, rwork_native, info_native);

    // Write back native variable values
    // handle is read-only
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
    // work is a native pointer
    // lwork is primitive
    if (!releasePointerData(env, rwork_pointerData, JNI_ABORT)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCgesvdNative(JNIEnv *env, jclass cls, jobject handle, jchar jobu, jchar jobvt, jint m, jint n, jobject A, jint lda, jobject S, jobject U, jint ldu, jobject VT, jint ldvt, jobject work, jint lwork, jobject rwork, jobject info)
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
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnCgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (rwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'rwork' is null for cusolverDnCgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnCgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCgesvd(handle=%p, jobu=%c, jobvt=%c, m=%d, n=%d, A=%p, lda=%d, S=%p, U=%p, ldu=%d, VT=%p, ldvt=%d, work=%p, lwork=%d, rwork=%p, info=%p)\n",
        handle, jobu, jobvt, m, n, A, lda, S, U, ldu, VT, ldvt, work, lwork, rwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    char jobu_native = 0;
    char jobvt_native = 0;
    int m_native = 0;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    float * S_native = NULL;
    cuComplex * U_native = NULL;
    int ldu_native = 0;
    cuComplex * VT_native = NULL;
    int ldvt_native = 0;
    cuComplex * work_native = NULL;
    int lwork_native = 0;
    float * rwork_native = NULL;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobu_native = (char)jobu;
    jobvt_native = (char)jobvt;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    S_native = (float *)getPointer(env, S);
    U_native = (cuComplex *)getPointer(env, U);
    ldu_native = (int)ldu;
    VT_native = (cuComplex *)getPointer(env, VT);
    ldvt_native = (int)ldvt;
    work_native = (cuComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    PointerData *rwork_pointerData = initPointerData(env, rwork);
    if (rwork_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    rwork_native = (float *)rwork_pointerData->getPointer(env);
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCgesvd(handle_native, jobu_native, jobvt_native, m_native, n_native, A_native, lda_native, S_native, U_native, ldu_native, VT_native, ldvt_native, work_native, lwork_native, rwork_native, info_native);

    // Write back native variable values
    // handle is read-only
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
    // work is a native pointer
    // lwork is primitive
    if (!releasePointerData(env, rwork_pointerData, JNI_ABORT)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZgesvdNative(JNIEnv *env, jclass cls, jobject handle, jchar jobu, jchar jobvt, jint m, jint n, jobject A, jint lda, jobject S, jobject U, jint ldu, jobject VT, jint ldvt, jobject work, jint lwork, jobject rwork, jobject info)
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
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnZgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (rwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'rwork' is null for cusolverDnZgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnZgesvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZgesvd(handle=%p, jobu=%c, jobvt=%c, m=%d, n=%d, A=%p, lda=%d, S=%p, U=%p, ldu=%d, VT=%p, ldvt=%d, work=%p, lwork=%d, rwork=%p, info=%p)\n",
        handle, jobu, jobvt, m, n, A, lda, S, U, ldu, VT, ldvt, work, lwork, rwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    char jobu_native = 0;
    char jobvt_native = 0;
    int m_native = 0;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    double * S_native = NULL;
    cuDoubleComplex * U_native = NULL;
    int ldu_native = 0;
    cuDoubleComplex * VT_native = NULL;
    int ldvt_native = 0;
    cuDoubleComplex * work_native = NULL;
    int lwork_native = 0;
    double * rwork_native = NULL;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobu_native = (char)jobu;
    jobvt_native = (char)jobvt;
    m_native = (int)m;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    S_native = (double *)getPointer(env, S);
    U_native = (cuDoubleComplex *)getPointer(env, U);
    ldu_native = (int)ldu;
    VT_native = (cuDoubleComplex *)getPointer(env, VT);
    ldvt_native = (int)ldvt;
    work_native = (cuDoubleComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    PointerData *rwork_pointerData = initPointerData(env, rwork);
    if (rwork_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    rwork_native = (double *)rwork_pointerData->getPointer(env);
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZgesvd(handle_native, jobu_native, jobvt_native, m_native, n_native, A_native, lda_native, S_native, U_native, ldu_native, VT_native, ldvt_native, work_native, lwork_native, rwork_native, info_native);

    // Write back native variable values
    // handle is read-only
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
    // work is a native pointer
    // lwork is primitive
    if (!releasePointerData(env, rwork_pointerData, JNI_ABORT)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/** standard symmetric eigenvalue solver, A*x = lambda*x, by divide-and-conquer  */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsyevd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject W, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSsyevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSsyevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnSsyevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnSsyevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSsyevd_bufferSize(handle=%p, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, W=%p, lwork=%p)\n",
        handle, jobz, uplo, n, A, lda, W, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * W_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    W_native = (float *)getPointer(env, W);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSsyevd_bufferSize(handle_native, jobz_native, uplo_native, n_native, A_native, lda_native, W_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // W is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsyevd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject W, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDsyevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDsyevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnDsyevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnDsyevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDsyevd_bufferSize(handle=%p, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, W=%p, lwork=%p)\n",
        handle, jobz, uplo, n, A, lda, W, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * W_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    W_native = (double *)getPointer(env, W);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDsyevd_bufferSize(handle_native, jobz_native, uplo_native, n_native, A_native, lda_native, W_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // W is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCheevd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject W, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCheevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCheevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnCheevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnCheevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCheevd_bufferSize(handle=%p, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, W=%p, lwork=%p)\n",
        handle, jobz, uplo, n, A, lda, W, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    float * W_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    W_native = (float *)getPointer(env, W);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCheevd_bufferSize(handle_native, jobz_native, uplo_native, n_native, A_native, lda_native, W_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // W is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZheevd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject W, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZheevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZheevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnZheevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnZheevd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZheevd_bufferSize(handle=%p, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, W=%p, lwork=%p)\n",
        handle, jobz, uplo, n, A, lda, W, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    double * W_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    W_native = (double *)getPointer(env, W);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZheevd_bufferSize(handle_native, jobz_native, uplo_native, n_native, A_native, lda_native, W_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // W is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsyevdNative(JNIEnv *env, jclass cls, jobject handle, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject W, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSsyevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSsyevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnSsyevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnSsyevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnSsyevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSsyevd(handle=%p, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, W=%p, work=%p, lwork=%d, info=%p)\n",
        handle, jobz, uplo, n, A, lda, W, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * W_native = NULL;
    float * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    W_native = (float *)getPointer(env, W);
    work_native = (float *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSsyevd(handle_native, jobz_native, uplo_native, n_native, A_native, lda_native, W_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // W is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsyevdNative(JNIEnv *env, jclass cls, jobject handle, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject W, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDsyevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDsyevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnDsyevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnDsyevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnDsyevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDsyevd(handle=%p, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, W=%p, work=%p, lwork=%d, info=%p)\n",
        handle, jobz, uplo, n, A, lda, W, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * W_native = NULL;
    double * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    W_native = (double *)getPointer(env, W);
    work_native = (double *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDsyevd(handle_native, jobz_native, uplo_native, n_native, A_native, lda_native, W_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // W is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnCheevdNative(JNIEnv *env, jclass cls, jobject handle, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject W, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnCheevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnCheevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnCheevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnCheevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnCheevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnCheevd(handle=%p, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, W=%p, work=%p, lwork=%d, info=%p)\n",
        handle, jobz, uplo, n, A, lda, W, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    float * W_native = NULL;
    cuComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    W_native = (float *)getPointer(env, W);
    work_native = (cuComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnCheevd(handle_native, jobz_native, uplo_native, n_native, A_native, lda_native, W_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // W is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZheevdNative(JNIEnv *env, jclass cls, jobject handle, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject W, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZheevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZheevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnZheevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnZheevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnZheevd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZheevd(handle=%p, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, W=%p, work=%p, lwork=%d, info=%p)\n",
        handle, jobz, uplo, n, A, lda, W, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    double * W_native = NULL;
    cuDoubleComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    W_native = (double *)getPointer(env, W);
    work_native = (cuDoubleComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZheevd(handle_native, jobz_native, uplo_native, n_native, A_native, lda_native, W_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // W is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/** generalized symmetric eigenvalue solver, A*x = lambda*B*x, by divide-and-conquer  */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsygvd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint itype, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject B, jint ldb, jobject W, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSsygvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSsygvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnSsygvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnSsygvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnSsygvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSsygvd_bufferSize(handle=%p, itype=%d, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, B=%p, ldb=%d, W=%p, lwork=%p)\n",
        handle, itype, jobz, uplo, n, A, lda, B, ldb, W, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigType_t itype_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * B_native = NULL;
    int ldb_native = 0;
    float * W_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    itype_native = (cusolverEigType_t)itype;
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (float *)getPointer(env, B);
    ldb_native = (int)ldb;
    W_native = (float *)getPointer(env, W);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSsygvd_bufferSize(handle_native, itype_native, jobz_native, uplo_native, n_native, A_native, lda_native, B_native, ldb_native, W_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // W is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsygvd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint itype, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject B, jint ldb, jobject W, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDsygvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDsygvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnDsygvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnDsygvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnDsygvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDsygvd_bufferSize(handle=%p, itype=%d, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, B=%p, ldb=%d, W=%p, lwork=%p)\n",
        handle, itype, jobz, uplo, n, A, lda, B, ldb, W, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigType_t itype_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * B_native = NULL;
    int ldb_native = 0;
    double * W_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    itype_native = (cusolverEigType_t)itype;
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (double *)getPointer(env, B);
    ldb_native = (int)ldb;
    W_native = (double *)getPointer(env, W);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDsygvd_bufferSize(handle_native, itype_native, jobz_native, uplo_native, n_native, A_native, lda_native, B_native, ldb_native, W_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // W is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnChegvd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint itype, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject B, jint ldb, jobject W, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnChegvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnChegvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnChegvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnChegvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnChegvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnChegvd_bufferSize(handle=%p, itype=%d, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, B=%p, ldb=%d, W=%p, lwork=%p)\n",
        handle, itype, jobz, uplo, n, A, lda, B, ldb, W, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigType_t itype_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * B_native = NULL;
    int ldb_native = 0;
    float * W_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    itype_native = (cusolverEigType_t)itype;
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (cuComplex *)getPointer(env, B);
    ldb_native = (int)ldb;
    W_native = (float *)getPointer(env, W);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnChegvd_bufferSize(handle_native, itype_native, jobz_native, uplo_native, n_native, A_native, lda_native, B_native, ldb_native, W_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // W is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZhegvd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint itype, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject B, jint ldb, jobject W, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZhegvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZhegvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnZhegvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnZhegvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (lwork == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'lwork' is null for cusolverDnZhegvd_bufferSize");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZhegvd_bufferSize(handle=%p, itype=%d, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, B=%p, ldb=%d, W=%p, lwork=%p)\n",
        handle, itype, jobz, uplo, n, A, lda, B, ldb, W, lwork);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigType_t itype_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * B_native = NULL;
    int ldb_native = 0;
    double * W_native = NULL;
    int lwork_native;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    itype_native = (cusolverEigType_t)itype;
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (cuDoubleComplex *)getPointer(env, B);
    ldb_native = (int)ldb;
    W_native = (double *)getPointer(env, W);
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZhegvd_bufferSize(handle_native, itype_native, jobz_native, uplo_native, n_native, A_native, lda_native, B_native, ldb_native, W_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // W is a native pointer
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnSsygvdNative(JNIEnv *env, jclass cls, jobject handle, jint itype, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject B, jint ldb, jobject W, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnSsygvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnSsygvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnSsygvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnSsygvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnSsygvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnSsygvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnSsygvd(handle=%p, itype=%d, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, B=%p, ldb=%d, W=%p, work=%p, lwork=%d, info=%p)\n",
        handle, itype, jobz, uplo, n, A, lda, B, ldb, W, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigType_t itype_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    float * A_native = NULL;
    int lda_native = 0;
    float * B_native = NULL;
    int ldb_native = 0;
    float * W_native = NULL;
    float * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    itype_native = (cusolverEigType_t)itype;
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (float *)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (float *)getPointer(env, B);
    ldb_native = (int)ldb;
    W_native = (float *)getPointer(env, W);
    work_native = (float *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnSsygvd(handle_native, itype_native, jobz_native, uplo_native, n_native, A_native, lda_native, B_native, ldb_native, W_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // W is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnDsygvdNative(JNIEnv *env, jclass cls, jobject handle, jint itype, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject B, jint ldb, jobject W, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnDsygvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnDsygvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnDsygvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnDsygvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnDsygvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnDsygvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnDsygvd(handle=%p, itype=%d, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, B=%p, ldb=%d, W=%p, work=%p, lwork=%d, info=%p)\n",
        handle, itype, jobz, uplo, n, A, lda, B, ldb, W, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigType_t itype_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    double * A_native = NULL;
    int lda_native = 0;
    double * B_native = NULL;
    int ldb_native = 0;
    double * W_native = NULL;
    double * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    itype_native = (cusolverEigType_t)itype;
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (double *)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (double *)getPointer(env, B);
    ldb_native = (int)ldb;
    W_native = (double *)getPointer(env, W);
    work_native = (double *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnDsygvd(handle_native, itype_native, jobz_native, uplo_native, n_native, A_native, lda_native, B_native, ldb_native, W_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // W is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnChegvdNative(JNIEnv *env, jclass cls, jobject handle, jint itype, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject B, jint ldb, jobject W, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnChegvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnChegvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnChegvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnChegvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnChegvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnChegvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnChegvd(handle=%p, itype=%d, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, B=%p, ldb=%d, W=%p, work=%p, lwork=%d, info=%p)\n",
        handle, itype, jobz, uplo, n, A, lda, B, ldb, W, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigType_t itype_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuComplex * A_native = NULL;
    int lda_native = 0;
    cuComplex * B_native = NULL;
    int ldb_native = 0;
    float * W_native = NULL;
    cuComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    itype_native = (cusolverEigType_t)itype;
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuComplex *)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (cuComplex *)getPointer(env, B);
    ldb_native = (int)ldb;
    W_native = (float *)getPointer(env, W);
    work_native = (cuComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnChegvd(handle_native, itype_native, jobz_native, uplo_native, n_native, A_native, lda_native, B_native, ldb_native, W_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // W is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverDn_cusolverDnZhegvdNative(JNIEnv *env, jclass cls, jobject handle, jint itype, jint jobz, jint uplo, jint n, jobject A, jint lda, jobject B, jint ldb, jobject W, jobject work, jint lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverDnZhegvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    if (A == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'A' is null for cusolverDnZhegvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lda is primitive
    if (B == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'B' is null for cusolverDnZhegvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldb is primitive
    if (W == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'W' is null for cusolverDnZhegvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (work == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'work' is null for cusolverDnZhegvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // lwork is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverDnZhegvd");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverDnZhegvd(handle=%p, itype=%d, jobz=%d, uplo=%d, n=%d, A=%p, lda=%d, B=%p, ldb=%d, W=%p, work=%p, lwork=%d, info=%p)\n",
        handle, itype, jobz, uplo, n, A, lda, B, ldb, W, work, lwork, info);

    // Native variable declarations
    cusolverDnHandle_t handle_native;
    cusolverEigType_t itype_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int n_native = 0;
    cuDoubleComplex * A_native = NULL;
    int lda_native = 0;
    cuDoubleComplex * B_native = NULL;
    int ldb_native = 0;
    double * W_native = NULL;
    cuDoubleComplex * work_native = NULL;
    int lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverDnHandle_t)getNativePointerValue(env, handle);
    itype_native = (cusolverEigType_t)itype;
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    n_native = (int)n;
    A_native = (cuDoubleComplex *)getPointer(env, A);
    lda_native = (int)lda;
    B_native = (cuDoubleComplex *)getPointer(env, B);
    ldb_native = (int)ldb;
    W_native = (double *)getPointer(env, W);
    work_native = (cuDoubleComplex *)getPointer(env, work);
    lwork_native = (int)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverDnZhegvd(handle_native, itype_native, jobz_native, uplo_native, n_native, A_native, lda_native, B_native, ldb_native, W_native, work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // itype is primitive
    // jobz is primitive
    // uplo is primitive
    // n is primitive
    // A is a native pointer
    // lda is primitive
    // B is a native pointer
    // ldb is primitive
    // W is a native pointer
    // work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}



