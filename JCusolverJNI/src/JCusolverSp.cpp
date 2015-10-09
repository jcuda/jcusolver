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

#include "JCusolverSp.hpp"
#include "JCusolver_common.hpp"
#include <iostream>
#include <string>
#include <cuda_runtime_api.h>

/**
* Converts the given jobject
* into a cuComplex
* and returns whether this conversion succeeded.
*/
bool initNative(JNIEnv *env, jobject &input, cuComplex &output)
{
    output.x = env->GetFloatField(input, cuComplex_x);
    output.y = env->GetFloatField(input, cuComplex_y);
    if (env->ExceptionCheck())
    {
        return false;
    }
    return true;
}

/**
* Converts the given jobject
* into a cuDoubleComplex
* and returns whether this conversion succeeded.
*/
bool initNative(JNIEnv *env, jobject &input, cuDoubleComplex &output)
{
    output.x = env->GetDoubleField(input, cuDoubleComplex_x);
    output.y = env->GetDoubleField(input, cuDoubleComplex_y);
    if (env->ExceptionCheck())
    {
        return false;
    }
    return true;
}

/**
* Converts the given cuComplex
* into a jobject
* and returns whether this conversion succeeded.
*/
bool releaseNative(JNIEnv *env, cuComplex &input, jobject &output)
{
    env->SetFloatField(output, cuComplex_x, input.x);
    env->SetFloatField(output, cuComplex_y, input.y);
    if (env->ExceptionCheck())
    {
        return false;
    }
    return true;
}

/**
* Converts the given cuDoubleComplex
* into a jobject
* and returns whether this conversion succeeded.
*/
bool releaseNative(JNIEnv *env, cuDoubleComplex &input, jobject &output)
{
    env->SetDoubleField(output, cuDoubleComplex_x, input.x);
    env->SetDoubleField(output, cuDoubleComplex_y, input.y);
    if (env->ExceptionCheck())
    {
        return false;
    }
    return true;
}


//=== Auto-generated part: ===================================================

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCreateNative(JNIEnv *env, jclass cls, jobject handle)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpCreate");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpCreate(handle=%p)\n",
        handle);

    // Native variable declarations
    cusolverSpHandle_t handle_native;

    // Obtain native variable values
    // handle is initialized here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpCreate(&handle_native);

    // Write back native variable values
    setNativePointerValue(env, handle, (jlong)handle_native);

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDestroyNative(JNIEnv *env, jclass cls, jobject handle)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpDestroy");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpDestroy(handle=%p)\n",
        handle);

    // Native variable declarations
    cusolverSpHandle_t handle_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpDestroy(handle_native);

    // Write back native variable values
    // handle is destroyed here

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpSetStreamNative(JNIEnv *env, jclass cls, jobject handle, jobject streamId)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpSetStream");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // streamId may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpSetStream(handle=%p, streamId=%p)\n",
        handle, streamId);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    cudaStream_t streamId_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    if (streamId != NULL)
    {
        streamId_native = (cudaStream_t)getNativePointerValue(env, streamId);
    }

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpSetStream(handle_native, streamId_native);

    // Write back native variable values
    // handle is a native pointer object
    // streamId is a read-only native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpGetStreamNative(JNIEnv *env, jclass cls, jobject handle, jobject streamId)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpGetStream");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (streamId == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'streamId' is null for cusolverSpGetStream");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpGetStream(handle=%p, streamId=%p)\n",
        handle, streamId);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    cudaStream_t streamId_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    // streamId is initialized here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpGetStream(handle_native, &streamId_native);

    // Write back native variable values
    // handle is a native pointer object
    setNativePointerValue(env, streamId, (jlong)streamId_native);

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrissymHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnzA, jobject descrA, jobject csrRowPtrA, jobject csrEndPtrA, jobject csrColIndA, jobject issym)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpXcsrissymHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnzA is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpXcsrissymHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpXcsrissymHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrEndPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrEndPtrA' is null for cusolverSpXcsrissymHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpXcsrissymHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (issym == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'issym' is null for cusolverSpXcsrissymHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpXcsrissymHost(handle=%p, m=%d, nnzA=%d, descrA=%p, csrRowPtrA=%p, csrEndPtrA=%p, csrColIndA=%p, issym=%p)\n",
        handle, m, nnzA, descrA, csrRowPtrA, csrEndPtrA, csrColIndA, issym);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnzA_native = 0;
    cusparseMatDescr_t descrA_native;
    int* csrRowPtrA_native;
    int* csrEndPtrA_native;
    int* csrColIndA_native;
    int* issym_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnzA_native = (int)nnzA;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrEndPtrA_pointerData = initPointerData(env, csrEndPtrA);
    if (csrEndPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrEndPtrA_native = (int*)csrEndPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *issym_pointerData = initPointerData(env, issym);
    if (issym_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    issym_native = (int*)issym_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpXcsrissymHost(handle_native, m_native, nnzA_native, descrA_native, csrRowPtrA_native, csrEndPtrA_native, csrColIndA_native, issym_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnzA is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrEndPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrEndPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, issym))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, issym_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* -------- GPU linear solver based on LU factorization
*       solve A*x = b, A can be singular
* [ls] stands for linear solve
* [v] stands for vector
* [lu] stands for LU factorization
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrlsvluHostNative(JNIEnv *env, jclass cls, jobject handle, jint n, jint nnzA, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jfloat tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpScsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    // nnzA is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpScsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpScsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpScsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpScsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpScsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpScsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpScsrlsvluHost(handle=%p, n=%d, nnzA=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, tol=%f, reorder=%d, x=%p, singularity=%p)\n",
        handle, n, nnzA, descrA, csrValA, csrRowPtrA, csrColIndA, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int n_native = 0;
    int nnzA_native = 0;
    cusparseMatDescr_t descrA_native;
    float* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    float* b_native;
    float tol_native = 0.0f;
    int reorder_native = 0;
    float* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (float*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (float*)b_pointerData->getPointer(env);
    tol_native = (float)tol;
    reorder_native = (int)reorder;
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (float*)x_pointerData->getPointer(env);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpScsrlsvluHost(handle_native, n_native, nnzA_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // nnzA is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // reorder is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrlsvluHostNative(JNIEnv *env, jclass cls, jobject handle, jint n, jint nnzA, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jdouble tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpDcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    // nnzA is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpDcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpDcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpDcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpDcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpDcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpDcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpDcsrlsvluHost(handle=%p, n=%d, nnzA=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, tol=%lf, reorder=%d, x=%p, singularity=%p)\n",
        handle, n, nnzA, descrA, csrValA, csrRowPtrA, csrColIndA, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int n_native = 0;
    int nnzA_native = 0;
    cusparseMatDescr_t descrA_native;
    double* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    double* b_native;
    double tol_native = 0.0;
    int reorder_native = 0;
    double* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (double*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (double*)b_pointerData->getPointer(env);
    tol_native = (double)tol;
    reorder_native = (int)reorder;
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (double*)x_pointerData->getPointer(env);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpDcsrlsvluHost(handle_native, n_native, nnzA_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // nnzA is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // reorder is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrlsvluHostNative(JNIEnv *env, jclass cls, jobject handle, jint n, jint nnzA, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jfloat tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpCcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    // nnzA is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpCcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpCcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpCcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpCcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpCcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpCcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpCcsrlsvluHost(handle=%p, n=%d, nnzA=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, tol=%f, reorder=%d, x=%p, singularity=%p)\n",
        handle, n, nnzA, descrA, csrValA, csrRowPtrA, csrColIndA, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int n_native = 0;
    int nnzA_native = 0;
    cusparseMatDescr_t descrA_native;
    cuComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuComplex* b_native;
    float tol_native = 0.0f;
    int reorder_native = 0;
    cuComplex* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (cuComplex*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (cuComplex*)b_pointerData->getPointer(env);
    tol_native = (float)tol;
    reorder_native = (int)reorder;
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (cuComplex*)x_pointerData->getPointer(env);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpCcsrlsvluHost(handle_native, n_native, nnzA_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // nnzA is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // reorder is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrlsvluHostNative(JNIEnv *env, jclass cls, jobject handle, jint n, jint nnzA, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jdouble tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpZcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    // nnzA is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpZcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpZcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpZcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpZcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpZcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpZcsrlsvluHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpZcsrlsvluHost(handle=%p, n=%d, nnzA=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, tol=%lf, reorder=%d, x=%p, singularity=%p)\n",
        handle, n, nnzA, descrA, csrValA, csrRowPtrA, csrColIndA, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int n_native = 0;
    int nnzA_native = 0;
    cusparseMatDescr_t descrA_native;
    cuDoubleComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuDoubleComplex* b_native;
    double tol_native = 0.0;
    int reorder_native = 0;
    cuDoubleComplex* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (cuDoubleComplex*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (cuDoubleComplex*)b_pointerData->getPointer(env);
    tol_native = (double)tol;
    reorder_native = (int)reorder;
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (cuDoubleComplex*)x_pointerData->getPointer(env);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpZcsrlsvluHost(handle_native, n_native, nnzA_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // nnzA is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // reorder is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* -------- GPU linear solver based on QR factorization
*       solve A*x = b, A can be singular
* [ls] stands for linear solve
* [v] stands for vector
* [qr] stands for QR factorization
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrlsvqrNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jobject b, jfloat tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpScsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpScsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpScsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpScsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpScsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpScsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpScsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpScsrlsvqr(handle=%p, m=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, b=%p, tol=%f, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrVal, csrRowPtr, csrColInd, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    float* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    float* b_native;
    float tol_native = 0.0f;
    int reorder_native = 0;
    float* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrVal_native = (float*)getPointer(env, csrVal);
    csrRowPtr_native = (int*)getPointer(env, csrRowPtr);
    csrColInd_native = (int*)getPointer(env, csrColInd);
    b_native = (float*)getPointer(env, b);
    tol_native = (float)tol;
    reorder_native = (int)reorder;
    x_native = (float*)getPointer(env, x);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpScsrlsvqr(handle_native, m_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrVal is a native pointer
    // csrRowPtr is a native pointer
    // csrColInd is a native pointer
    // b is a native pointer
    // tol is primitive
    // reorder is primitive
    // x is a native pointer
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrlsvqrNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jobject b, jdouble tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpDcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpDcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpDcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpDcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpDcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpDcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpDcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpDcsrlsvqr(handle=%p, m=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, b=%p, tol=%lf, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrVal, csrRowPtr, csrColInd, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    double* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    double* b_native;
    double tol_native = 0.0;
    int reorder_native = 0;
    double* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrVal_native = (double*)getPointer(env, csrVal);
    csrRowPtr_native = (int*)getPointer(env, csrRowPtr);
    csrColInd_native = (int*)getPointer(env, csrColInd);
    b_native = (double*)getPointer(env, b);
    tol_native = (double)tol;
    reorder_native = (int)reorder;
    x_native = (double*)getPointer(env, x);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpDcsrlsvqr(handle_native, m_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrVal is a native pointer
    // csrRowPtr is a native pointer
    // csrColInd is a native pointer
    // b is a native pointer
    // tol is primitive
    // reorder is primitive
    // x is a native pointer
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrlsvqrNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jobject b, jfloat tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpCcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpCcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpCcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpCcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpCcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpCcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpCcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpCcsrlsvqr(handle=%p, m=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, b=%p, tol=%f, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrVal, csrRowPtr, csrColInd, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuComplex* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    cuComplex* b_native;
    float tol_native = 0.0f;
    int reorder_native = 0;
    cuComplex* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrVal_native = (cuComplex*)getPointer(env, csrVal);
    csrRowPtr_native = (int*)getPointer(env, csrRowPtr);
    csrColInd_native = (int*)getPointer(env, csrColInd);
    b_native = (cuComplex*)getPointer(env, b);
    tol_native = (float)tol;
    reorder_native = (int)reorder;
    x_native = (cuComplex*)getPointer(env, x);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpCcsrlsvqr(handle_native, m_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrVal is a native pointer
    // csrRowPtr is a native pointer
    // csrColInd is a native pointer
    // b is a native pointer
    // tol is primitive
    // reorder is primitive
    // x is a native pointer
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrlsvqrNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jobject b, jdouble tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpZcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpZcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpZcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpZcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpZcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpZcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpZcsrlsvqr");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpZcsrlsvqr(handle=%p, m=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, b=%p, tol=%lf, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrVal, csrRowPtr, csrColInd, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuDoubleComplex* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    cuDoubleComplex* b_native;
    double tol_native = 0.0;
    int reorder_native = 0;
    cuDoubleComplex* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrVal_native = (cuDoubleComplex*)getPointer(env, csrVal);
    csrRowPtr_native = (int*)getPointer(env, csrRowPtr);
    csrColInd_native = (int*)getPointer(env, csrColInd);
    b_native = (cuDoubleComplex*)getPointer(env, b);
    tol_native = (double)tol;
    reorder_native = (int)reorder;
    x_native = (cuDoubleComplex*)getPointer(env, x);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpZcsrlsvqr(handle_native, m_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrVal is a native pointer
    // csrRowPtr is a native pointer
    // csrColInd is a native pointer
    // b is a native pointer
    // tol is primitive
    // reorder is primitive
    // x is a native pointer
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* -------- CPU linear solver based on QR factorization
*       solve A*x = b, A can be singular
* [ls] stands for linear solve
* [v] stands for vector
* [qr] stands for QR factorization
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrlsvqrHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jfloat tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpScsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpScsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpScsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpScsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpScsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpScsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpScsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpScsrlsvqrHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, tol=%f, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    float* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    float* b_native;
    float tol_native = 0.0f;
    int reorder_native = 0;
    float* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (float*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (float*)b_pointerData->getPointer(env);
    tol_native = (float)tol;
    reorder_native = (int)reorder;
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (float*)x_pointerData->getPointer(env);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpScsrlsvqrHost(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // reorder is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrlsvqrHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jdouble tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpDcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpDcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpDcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpDcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpDcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpDcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpDcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpDcsrlsvqrHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, tol=%lf, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    double* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    double* b_native;
    double tol_native = 0.0;
    int reorder_native = 0;
    double* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (double*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (double*)b_pointerData->getPointer(env);
    tol_native = (double)tol;
    reorder_native = (int)reorder;
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (double*)x_pointerData->getPointer(env);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpDcsrlsvqrHost(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // reorder is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrlsvqrHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jfloat tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpCcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpCcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpCcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpCcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpCcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpCcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpCcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpCcsrlsvqrHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, tol=%f, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuComplex* b_native;
    float tol_native = 0.0f;
    int reorder_native = 0;
    cuComplex* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (cuComplex*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (cuComplex*)b_pointerData->getPointer(env);
    tol_native = (float)tol;
    reorder_native = (int)reorder;
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (cuComplex*)x_pointerData->getPointer(env);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpCcsrlsvqrHost(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // reorder is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrlsvqrHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jdouble tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpZcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpZcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpZcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpZcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpZcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpZcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpZcsrlsvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpZcsrlsvqrHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, tol=%lf, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuDoubleComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuDoubleComplex* b_native;
    double tol_native = 0.0;
    int reorder_native = 0;
    cuDoubleComplex* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (cuDoubleComplex*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (cuDoubleComplex*)b_pointerData->getPointer(env);
    tol_native = (double)tol;
    reorder_native = (int)reorder;
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (cuDoubleComplex*)x_pointerData->getPointer(env);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpZcsrlsvqrHost(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // reorder is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* -------- CPU linear solver based on Cholesky factorization
*       solve A*x = b, A can be singular
* [ls] stands for linear solve
* [v] stands for vector
* [chol] stands for Cholesky factorization
*
* Only works for symmetric positive definite matrix.
* The upper part of A is ignored.
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrlsvcholHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jobject b, jfloat tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpScsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpScsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpScsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpScsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpScsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpScsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpScsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpScsrlsvcholHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, b=%p, tol=%f, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrVal, csrRowPtr, csrColInd, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    float* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    float* b_native;
    float tol_native = 0.0f;
    int reorder_native = 0;
    float* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrVal_pointerData = initPointerData(env, csrVal);
    if (csrVal_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrVal_native = (float*)csrVal_pointerData->getPointer(env);
    PointerData *csrRowPtr_pointerData = initPointerData(env, csrRowPtr);
    if (csrRowPtr_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtr_native = (int*)csrRowPtr_pointerData->getPointer(env);
    PointerData *csrColInd_pointerData = initPointerData(env, csrColInd);
    if (csrColInd_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColInd_native = (int*)csrColInd_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (float*)b_pointerData->getPointer(env);
    tol_native = (float)tol;
    reorder_native = (int)reorder;
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (float*)x_pointerData->getPointer(env);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpScsrlsvcholHost(handle_native, m_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrVal))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrVal_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtr))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtr_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColInd))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColInd_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // reorder is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrlsvcholHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jobject b, jdouble tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpDcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpDcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpDcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpDcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpDcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpDcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpDcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpDcsrlsvcholHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, b=%p, tol=%lf, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrVal, csrRowPtr, csrColInd, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    double* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    double* b_native;
    double tol_native = 0.0;
    int reorder_native = 0;
    double* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrVal_pointerData = initPointerData(env, csrVal);
    if (csrVal_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrVal_native = (double*)csrVal_pointerData->getPointer(env);
    PointerData *csrRowPtr_pointerData = initPointerData(env, csrRowPtr);
    if (csrRowPtr_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtr_native = (int*)csrRowPtr_pointerData->getPointer(env);
    PointerData *csrColInd_pointerData = initPointerData(env, csrColInd);
    if (csrColInd_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColInd_native = (int*)csrColInd_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (double*)b_pointerData->getPointer(env);
    tol_native = (double)tol;
    reorder_native = (int)reorder;
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (double*)x_pointerData->getPointer(env);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpDcsrlsvcholHost(handle_native, m_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrVal))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrVal_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtr))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtr_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColInd))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColInd_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // reorder is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrlsvcholHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jobject b, jfloat tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpCcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpCcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpCcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpCcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpCcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpCcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpCcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpCcsrlsvcholHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, b=%p, tol=%f, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrVal, csrRowPtr, csrColInd, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuComplex* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    cuComplex* b_native;
    float tol_native = 0.0f;
    int reorder_native = 0;
    cuComplex* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrVal_pointerData = initPointerData(env, csrVal);
    if (csrVal_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrVal_native = (cuComplex*)csrVal_pointerData->getPointer(env);
    PointerData *csrRowPtr_pointerData = initPointerData(env, csrRowPtr);
    if (csrRowPtr_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtr_native = (int*)csrRowPtr_pointerData->getPointer(env);
    PointerData *csrColInd_pointerData = initPointerData(env, csrColInd);
    if (csrColInd_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColInd_native = (int*)csrColInd_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (cuComplex*)b_pointerData->getPointer(env);
    tol_native = (float)tol;
    reorder_native = (int)reorder;
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (cuComplex*)x_pointerData->getPointer(env);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpCcsrlsvcholHost(handle_native, m_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrVal))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrVal_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtr))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtr_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColInd))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColInd_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // reorder is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrlsvcholHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jobject b, jdouble tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpZcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpZcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpZcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpZcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpZcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpZcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpZcsrlsvcholHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpZcsrlsvcholHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, b=%p, tol=%lf, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrVal, csrRowPtr, csrColInd, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuDoubleComplex* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    cuDoubleComplex* b_native;
    double tol_native = 0.0;
    int reorder_native = 0;
    cuDoubleComplex* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrVal_pointerData = initPointerData(env, csrVal);
    if (csrVal_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrVal_native = (cuDoubleComplex*)csrVal_pointerData->getPointer(env);
    PointerData *csrRowPtr_pointerData = initPointerData(env, csrRowPtr);
    if (csrRowPtr_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtr_native = (int*)csrRowPtr_pointerData->getPointer(env);
    PointerData *csrColInd_pointerData = initPointerData(env, csrColInd);
    if (csrColInd_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColInd_native = (int*)csrColInd_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (cuDoubleComplex*)b_pointerData->getPointer(env);
    tol_native = (double)tol;
    reorder_native = (int)reorder;
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (cuDoubleComplex*)x_pointerData->getPointer(env);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpZcsrlsvcholHost(handle_native, m_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrVal))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrVal_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtr))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtr_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColInd))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColInd_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // reorder is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* -------- GPU linear solver based on Cholesky factorization
*       solve A*x = b, A can be singular
* [ls] stands for linear solve
* [v] stands for vector
* [chol] stands for Cholesky factorization
*
* Only works for symmetric positive definite matrix.
* The upper part of A is ignored.
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrlsvcholNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jobject b, jfloat tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpScsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpScsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpScsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpScsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpScsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpScsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpScsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpScsrlsvchol(handle=%p, m=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, b=%p, tol=%f, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrVal, csrRowPtr, csrColInd, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    float* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    float* b_native;
    float tol_native = 0.0f;
    int reorder_native = 0;
    float* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrVal_native = (float*)getPointer(env, csrVal);
    csrRowPtr_native = (int*)getPointer(env, csrRowPtr);
    csrColInd_native = (int*)getPointer(env, csrColInd);
    b_native = (float*)getPointer(env, b);
    tol_native = (float)tol;
    reorder_native = (int)reorder;
    x_native = (float*)getPointer(env, x);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpScsrlsvchol(handle_native, m_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrVal is a native pointer
    // csrRowPtr is a native pointer
    // csrColInd is a native pointer
    // b is a native pointer
    // tol is primitive
    // reorder is primitive
    // x is a native pointer
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrlsvcholNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jobject b, jdouble tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpDcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpDcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpDcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpDcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpDcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpDcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpDcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpDcsrlsvchol(handle=%p, m=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, b=%p, tol=%lf, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrVal, csrRowPtr, csrColInd, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    double* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    double* b_native;
    double tol_native = 0.0;
    int reorder_native = 0;
    double* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrVal_native = (double*)getPointer(env, csrVal);
    csrRowPtr_native = (int*)getPointer(env, csrRowPtr);
    csrColInd_native = (int*)getPointer(env, csrColInd);
    b_native = (double*)getPointer(env, b);
    tol_native = (double)tol;
    reorder_native = (int)reorder;
    x_native = (double*)getPointer(env, x);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpDcsrlsvchol(handle_native, m_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrVal is a native pointer
    // csrRowPtr is a native pointer
    // csrColInd is a native pointer
    // b is a native pointer
    // tol is primitive
    // reorder is primitive
    // x is a native pointer
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrlsvcholNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jobject b, jfloat tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpCcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpCcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpCcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpCcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpCcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpCcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpCcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpCcsrlsvchol(handle=%p, m=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, b=%p, tol=%f, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrVal, csrRowPtr, csrColInd, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuComplex* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    cuComplex* b_native;
    float tol_native = 0.0f;
    int reorder_native = 0;
    cuComplex* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrVal_native = (cuComplex*)getPointer(env, csrVal);
    csrRowPtr_native = (int*)getPointer(env, csrRowPtr);
    csrColInd_native = (int*)getPointer(env, csrColInd);
    b_native = (cuComplex*)getPointer(env, b);
    tol_native = (float)tol;
    reorder_native = (int)reorder;
    x_native = (cuComplex*)getPointer(env, x);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpCcsrlsvchol(handle_native, m_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrVal is a native pointer
    // csrRowPtr is a native pointer
    // csrColInd is a native pointer
    // b is a native pointer
    // tol is primitive
    // reorder is primitive
    // x is a native pointer
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrlsvcholNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jobject b, jdouble tol, jint reorder, jobject x, jintArray singularity)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpZcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpZcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpZcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpZcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpZcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpZcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    // reorder is primitive
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpZcsrlsvchol");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // singularity may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpZcsrlsvchol(handle=%p, m=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, b=%p, tol=%lf, reorder=%d, x=%p, singularity=%p)\n",
        handle, m, nnz, descrA, csrVal, csrRowPtr, csrColInd, b, tol, reorder, x, singularity);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuDoubleComplex* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    cuDoubleComplex* b_native;
    double tol_native = 0.0;
    int reorder_native = 0;
    cuDoubleComplex* x_native;
    int singularity_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrVal_native = (cuDoubleComplex*)getPointer(env, csrVal);
    csrRowPtr_native = (int*)getPointer(env, csrRowPtr);
    csrColInd_native = (int*)getPointer(env, csrColInd);
    b_native = (cuDoubleComplex*)getPointer(env, b);
    tol_native = (double)tol;
    reorder_native = (int)reorder;
    x_native = (cuDoubleComplex*)getPointer(env, x);
    // singularity is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpZcsrlsvchol(handle_native, m_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, b_native, tol_native, reorder_native, x_native, &singularity_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrVal is a native pointer
    // csrRowPtr is a native pointer
    // csrColInd is a native pointer
    // b is a native pointer
    // tol is primitive
    // reorder is primitive
    // x is a native pointer
    if (!set(env, singularity, 0, (jint)singularity_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* ----------- CPU least square solver based on QR factorization
*       solve min|b - A*x|
* [lsq] stands for least square
* [v] stands for vector
* [qr] stands for QR factorization
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrlsqvqrHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jfloat tol, jobject rankA, jobject x, jobject p, jobject min_norm)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpScsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpScsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpScsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpScsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpScsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpScsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    if (rankA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'rankA' is null for cusolverSpScsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpScsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (p == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'p' is null for cusolverSpScsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (min_norm == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'min_norm' is null for cusolverSpScsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpScsrlsqvqrHost(handle=%p, m=%d, n=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, tol=%f, rankA=%p, x=%p, p=%p, min_norm=%p)\n",
        handle, m, n, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, b, tol, rankA, x, p, min_norm);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    float* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    float* b_native;
    float tol_native = 0.0f;
    int* rankA_native;
    float* x_native;
    int* p_native;
    float* min_norm_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (float*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (float*)b_pointerData->getPointer(env);
    tol_native = (float)tol;
    PointerData *rankA_pointerData = initPointerData(env, rankA);
    if (rankA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    rankA_native = (int*)rankA_pointerData->getPointer(env);
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (float*)x_pointerData->getPointer(env);
    PointerData *p_pointerData = initPointerData(env, p);
    if (p_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    p_native = (int*)p_pointerData->getPointer(env);
    PointerData *min_norm_pointerData = initPointerData(env, min_norm);
    if (min_norm_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    min_norm_native = (float*)min_norm_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpScsrlsqvqrHost(handle_native, m_native, n_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, tol_native, rankA_native, x_native, p_native, min_norm_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, rankA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, rankA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, p))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, p_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, min_norm))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, min_norm_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrlsqvqrHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jdouble tol, jobject rankA, jobject x, jobject p, jobject min_norm)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpDcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpDcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpDcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpDcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpDcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpDcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    if (rankA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'rankA' is null for cusolverSpDcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpDcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (p == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'p' is null for cusolverSpDcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (min_norm == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'min_norm' is null for cusolverSpDcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpDcsrlsqvqrHost(handle=%p, m=%d, n=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, tol=%lf, rankA=%p, x=%p, p=%p, min_norm=%p)\n",
        handle, m, n, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, b, tol, rankA, x, p, min_norm);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    double* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    double* b_native;
    double tol_native = 0.0;
    int* rankA_native;
    double* x_native;
    int* p_native;
    double* min_norm_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (double*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (double*)b_pointerData->getPointer(env);
    tol_native = (double)tol;
    PointerData *rankA_pointerData = initPointerData(env, rankA);
    if (rankA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    rankA_native = (int*)rankA_pointerData->getPointer(env);
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (double*)x_pointerData->getPointer(env);
    PointerData *p_pointerData = initPointerData(env, p);
    if (p_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    p_native = (int*)p_pointerData->getPointer(env);
    PointerData *min_norm_pointerData = initPointerData(env, min_norm);
    if (min_norm_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    min_norm_native = (double*)min_norm_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpDcsrlsqvqrHost(handle_native, m_native, n_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, tol_native, rankA_native, x_native, p_native, min_norm_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, rankA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, rankA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, p))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, p_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, min_norm))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, min_norm_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrlsqvqrHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jfloat tol, jobject rankA, jobject x, jobject p, jobject min_norm)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpCcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpCcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpCcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpCcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpCcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpCcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    if (rankA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'rankA' is null for cusolverSpCcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpCcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (p == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'p' is null for cusolverSpCcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (min_norm == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'min_norm' is null for cusolverSpCcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpCcsrlsqvqrHost(handle=%p, m=%d, n=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, tol=%f, rankA=%p, x=%p, p=%p, min_norm=%p)\n",
        handle, m, n, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, b, tol, rankA, x, p, min_norm);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuComplex* b_native;
    float tol_native = 0.0f;
    int* rankA_native;
    cuComplex* x_native;
    int* p_native;
    float* min_norm_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (cuComplex*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (cuComplex*)b_pointerData->getPointer(env);
    tol_native = (float)tol;
    PointerData *rankA_pointerData = initPointerData(env, rankA);
    if (rankA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    rankA_native = (int*)rankA_pointerData->getPointer(env);
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (cuComplex*)x_pointerData->getPointer(env);
    PointerData *p_pointerData = initPointerData(env, p);
    if (p_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    p_native = (int*)p_pointerData->getPointer(env);
    PointerData *min_norm_pointerData = initPointerData(env, min_norm);
    if (min_norm_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    min_norm_native = (float*)min_norm_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpCcsrlsqvqrHost(handle_native, m_native, n_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, tol_native, rankA_native, x_native, p_native, min_norm_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, rankA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, rankA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, p))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, p_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, min_norm))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, min_norm_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrlsqvqrHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jdouble tol, jobject rankA, jobject x, jobject p, jobject min_norm)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpZcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpZcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpZcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpZcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpZcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpZcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // tol is primitive
    if (rankA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'rankA' is null for cusolverSpZcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpZcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (p == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'p' is null for cusolverSpZcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (min_norm == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'min_norm' is null for cusolverSpZcsrlsqvqrHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpZcsrlsqvqrHost(handle=%p, m=%d, n=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, tol=%lf, rankA=%p, x=%p, p=%p, min_norm=%p)\n",
        handle, m, n, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, b, tol, rankA, x, p, min_norm);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuDoubleComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuDoubleComplex* b_native;
    double tol_native = 0.0;
    int* rankA_native;
    cuDoubleComplex* x_native;
    int* p_native;
    double* min_norm_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (cuDoubleComplex*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *b_pointerData = initPointerData(env, b);
    if (b_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    b_native = (cuDoubleComplex*)b_pointerData->getPointer(env);
    tol_native = (double)tol;
    PointerData *rankA_pointerData = initPointerData(env, rankA);
    if (rankA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    rankA_native = (int*)rankA_pointerData->getPointer(env);
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (cuDoubleComplex*)x_pointerData->getPointer(env);
    PointerData *p_pointerData = initPointerData(env, p);
    if (p_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    p_native = (int*)p_pointerData->getPointer(env);
    PointerData *min_norm_pointerData = initPointerData(env, min_norm);
    if (min_norm_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    min_norm_native = (double*)min_norm_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpZcsrlsqvqrHost(handle_native, m_native, n_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, tol_native, rankA_native, x_native, p_native, min_norm_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, b))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, b_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // tol is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, rankA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, rankA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, p))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, p_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, min_norm))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, min_norm_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* --------- CPU eigenvalue solver based on shift inverse
*      solve A*x = lambda * x
*   where lambda is the eigenvalue nearest mu0.
* [eig] stands for eigenvalue solver
* [si] stands for shift-inverse
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsreigvsiHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jfloat mu0, jobject x0, jint maxite, jfloat tol, jobject mu, jobject x)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpScsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpScsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpScsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpScsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpScsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // mu0 is primitive
    if (x0 == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x0' is null for cusolverSpScsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // maxite is primitive
    // tol is primitive
    if (mu == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'mu' is null for cusolverSpScsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpScsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpScsreigvsiHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, mu0=%f, x0=%p, maxite=%d, tol=%f, mu=%p, x=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, mu0, x0, maxite, tol, mu, x);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    float* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    float mu0_native = 0.0f;
    float* x0_native;
    int maxite_native = 0;
    float tol_native = 0.0f;
    float* mu_native;
    float* x_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (float*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    mu0_native = (float)mu0;
    PointerData *x0_pointerData = initPointerData(env, x0);
    if (x0_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x0_native = (float*)x0_pointerData->getPointer(env);
    maxite_native = (int)maxite;
    tol_native = (float)tol;
    PointerData *mu_pointerData = initPointerData(env, mu);
    if (mu_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    mu_native = (float*)mu_pointerData->getPointer(env);
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (float*)x_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpScsreigvsiHost(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, mu0_native, x0_native, maxite_native, tol_native, mu_native, x_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // mu0 is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x0))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x0_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // maxite is primitive
    // tol is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, mu))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, mu_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsreigvsiHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jdouble mu0, jobject x0, jint maxite, jdouble tol, jobject mu, jobject x)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpDcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpDcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpDcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpDcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpDcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // mu0 is primitive
    if (x0 == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x0' is null for cusolverSpDcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // maxite is primitive
    // tol is primitive
    if (mu == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'mu' is null for cusolverSpDcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpDcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpDcsreigvsiHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, mu0=%lf, x0=%p, maxite=%d, tol=%lf, mu=%p, x=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, mu0, x0, maxite, tol, mu, x);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    double* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    double mu0_native = 0.0;
    double* x0_native;
    int maxite_native = 0;
    double tol_native = 0.0;
    double* mu_native;
    double* x_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (double*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    mu0_native = (double)mu0;
    PointerData *x0_pointerData = initPointerData(env, x0);
    if (x0_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x0_native = (double*)x0_pointerData->getPointer(env);
    maxite_native = (int)maxite;
    tol_native = (double)tol;
    PointerData *mu_pointerData = initPointerData(env, mu);
    if (mu_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    mu_native = (double*)mu_pointerData->getPointer(env);
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (double*)x_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpDcsreigvsiHost(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, mu0_native, x0_native, maxite_native, tol_native, mu_native, x_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // mu0 is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x0))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x0_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // maxite is primitive
    // tol is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, mu))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, mu_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsreigvsiHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject mu0, jobject x0, jint maxite, jfloat tol, jobject mu, jobject x)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpCcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpCcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpCcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpCcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpCcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (mu0 == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'mu0' is null for cusolverSpCcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x0 == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x0' is null for cusolverSpCcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // maxite is primitive
    // tol is primitive
    if (mu == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'mu' is null for cusolverSpCcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpCcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpCcsreigvsiHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, mu0=%p, x0=%p, maxite=%d, tol=%f, mu=%p, x=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, mu0, x0, maxite, tol, mu, x);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuComplex mu0_native;
    cuComplex* x0_native;
    int maxite_native = 0;
    float tol_native = 0.0f;
    cuComplex* mu_native;
    cuComplex* x_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (cuComplex*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    if (!initNative(env, mu0, mu0_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    PointerData *x0_pointerData = initPointerData(env, x0);
    if (x0_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x0_native = (cuComplex*)x0_pointerData->getPointer(env);
    maxite_native = (int)maxite;
    tol_native = (float)tol;
    PointerData *mu_pointerData = initPointerData(env, mu);
    if (mu_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    mu_native = (cuComplex*)mu_pointerData->getPointer(env);
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (cuComplex*)x_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpCcsreigvsiHost(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, mu0_native, x0_native, maxite_native, tol_native, mu_native, x_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!releaseNative(env, mu0_native, mu0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x0))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x0_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // maxite is primitive
    // tol is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, mu))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, mu_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsreigvsiHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject mu0, jobject x0, jint maxite, jdouble tol, jobject mu, jobject x)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpZcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpZcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpZcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpZcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpZcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (mu0 == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'mu0' is null for cusolverSpZcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x0 == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x0' is null for cusolverSpZcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // maxite is primitive
    // tol is primitive
    if (mu == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'mu' is null for cusolverSpZcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpZcsreigvsiHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpZcsreigvsiHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, mu0=%p, x0=%p, maxite=%d, tol=%lf, mu=%p, x=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, mu0, x0, maxite, tol, mu, x);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuDoubleComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuDoubleComplex mu0_native;
    cuDoubleComplex* x0_native;
    int maxite_native = 0;
    double tol_native = 0.0;
    cuDoubleComplex* mu_native;
    cuDoubleComplex* x_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (cuDoubleComplex*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    if (!initNative(env, mu0, mu0_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    PointerData *x0_pointerData = initPointerData(env, x0);
    if (x0_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x0_native = (cuDoubleComplex*)x0_pointerData->getPointer(env);
    maxite_native = (int)maxite;
    tol_native = (double)tol;
    PointerData *mu_pointerData = initPointerData(env, mu);
    if (mu_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    mu_native = (cuDoubleComplex*)mu_pointerData->getPointer(env);
    PointerData *x_pointerData = initPointerData(env, x);
    if (x_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    x_native = (cuDoubleComplex*)x_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpZcsreigvsiHost(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, mu0_native, x0_native, maxite_native, tol_native, mu_native, x_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!releaseNative(env, mu0_native, mu0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x0))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x0_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // maxite is primitive
    // tol is primitive
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, mu))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, mu_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, x))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, x_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* --------- GPU eigenvalue solver based on shift inverse
*      solve A*x = lambda * x
*   where lambda is the eigenvalue nearest mu0.
* [eig] stands for eigenvalue solver
* [si] stands for shift-inverse
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsreigvsiNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jfloat mu0, jobject x0, jint maxite, jfloat eps, jobject mu, jobject x)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpScsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpScsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpScsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpScsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpScsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // mu0 is primitive
    if (x0 == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x0' is null for cusolverSpScsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // maxite is primitive
    // eps is primitive
    if (mu == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'mu' is null for cusolverSpScsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpScsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpScsreigvsi(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, mu0=%f, x0=%p, maxite=%d, eps=%f, mu=%p, x=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, mu0, x0, maxite, eps, mu, x);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    float* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    float mu0_native = 0.0f;
    float* x0_native;
    int maxite_native = 0;
    float eps_native = 0.0f;
    float* mu_native;
    float* x_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrValA_native = (float*)getPointer(env, csrValA);
    csrRowPtrA_native = (int*)getPointer(env, csrRowPtrA);
    csrColIndA_native = (int*)getPointer(env, csrColIndA);
    mu0_native = (float)mu0;
    x0_native = (float*)getPointer(env, x0);
    maxite_native = (int)maxite;
    eps_native = (float)eps;
    mu_native = (float*)getPointer(env, mu);
    x_native = (float*)getPointer(env, x);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpScsreigvsi(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, mu0_native, x0_native, maxite_native, eps_native, mu_native, x_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrValA is a native pointer
    // csrRowPtrA is a native pointer
    // csrColIndA is a native pointer
    // mu0 is primitive
    // x0 is a native pointer
    // maxite is primitive
    // eps is primitive
    // mu is a native pointer
    // x is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsreigvsiNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jdouble mu0, jobject x0, jint maxite, jdouble eps, jobject mu, jobject x)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpDcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpDcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpDcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpDcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpDcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // mu0 is primitive
    if (x0 == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x0' is null for cusolverSpDcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // maxite is primitive
    // eps is primitive
    if (mu == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'mu' is null for cusolverSpDcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpDcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpDcsreigvsi(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, mu0=%lf, x0=%p, maxite=%d, eps=%lf, mu=%p, x=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, mu0, x0, maxite, eps, mu, x);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    double* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    double mu0_native = 0.0;
    double* x0_native;
    int maxite_native = 0;
    double eps_native = 0.0;
    double* mu_native;
    double* x_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrValA_native = (double*)getPointer(env, csrValA);
    csrRowPtrA_native = (int*)getPointer(env, csrRowPtrA);
    csrColIndA_native = (int*)getPointer(env, csrColIndA);
    mu0_native = (double)mu0;
    x0_native = (double*)getPointer(env, x0);
    maxite_native = (int)maxite;
    eps_native = (double)eps;
    mu_native = (double*)getPointer(env, mu);
    x_native = (double*)getPointer(env, x);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpDcsreigvsi(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, mu0_native, x0_native, maxite_native, eps_native, mu_native, x_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrValA is a native pointer
    // csrRowPtrA is a native pointer
    // csrColIndA is a native pointer
    // mu0 is primitive
    // x0 is a native pointer
    // maxite is primitive
    // eps is primitive
    // mu is a native pointer
    // x is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsreigvsiNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject mu0, jobject x0, jint maxite, jfloat eps, jobject mu, jobject x)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpCcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpCcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpCcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpCcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpCcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (mu0 == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'mu0' is null for cusolverSpCcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x0 == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x0' is null for cusolverSpCcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // maxite is primitive
    // eps is primitive
    if (mu == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'mu' is null for cusolverSpCcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpCcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpCcsreigvsi(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, mu0=%p, x0=%p, maxite=%d, eps=%f, mu=%p, x=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, mu0, x0, maxite, eps, mu, x);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuComplex mu0_native;
    cuComplex* x0_native;
    int maxite_native = 0;
    float eps_native = 0.0f;
    cuComplex* mu_native;
    cuComplex* x_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrValA_native = (cuComplex*)getPointer(env, csrValA);
    csrRowPtrA_native = (int*)getPointer(env, csrRowPtrA);
    csrColIndA_native = (int*)getPointer(env, csrColIndA);
    if (!initNative(env, mu0, mu0_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    x0_native = (cuComplex*)getPointer(env, x0);
    maxite_native = (int)maxite;
    eps_native = (float)eps;
    mu_native = (cuComplex*)getPointer(env, mu);
    x_native = (cuComplex*)getPointer(env, x);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpCcsreigvsi(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, mu0_native, x0_native, maxite_native, eps_native, mu_native, x_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrValA is a native pointer
    // csrRowPtrA is a native pointer
    // csrColIndA is a native pointer
    if (!releaseNative(env, mu0_native, mu0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // x0 is a native pointer
    // maxite is primitive
    // eps is primitive
    // mu is a native pointer
    // x is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsreigvsiNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject mu0, jobject x0, jint maxite, jdouble eps, jobject mu, jobject x)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpZcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpZcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpZcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpZcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpZcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (mu0 == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'mu0' is null for cusolverSpZcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x0 == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x0' is null for cusolverSpZcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // maxite is primitive
    // eps is primitive
    if (mu == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'mu' is null for cusolverSpZcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpZcsreigvsi");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpZcsreigvsi(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, mu0=%p, x0=%p, maxite=%d, eps=%lf, mu=%p, x=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, mu0, x0, maxite, eps, mu, x);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuDoubleComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuDoubleComplex mu0_native;
    cuDoubleComplex* x0_native;
    int maxite_native = 0;
    double eps_native = 0.0;
    cuDoubleComplex* mu_native;
    cuDoubleComplex* x_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrValA_native = (cuDoubleComplex*)getPointer(env, csrValA);
    csrRowPtrA_native = (int*)getPointer(env, csrRowPtrA);
    csrColIndA_native = (int*)getPointer(env, csrColIndA);
    if (!initNative(env, mu0, mu0_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    x0_native = (cuDoubleComplex*)getPointer(env, x0);
    maxite_native = (int)maxite;
    eps_native = (double)eps;
    mu_native = (cuDoubleComplex*)getPointer(env, mu);
    x_native = (cuDoubleComplex*)getPointer(env, x);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpZcsreigvsi(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, mu0_native, x0_native, maxite_native, eps_native, mu_native, x_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrValA is a native pointer
    // csrRowPtrA is a native pointer
    // csrColIndA is a native pointer
    if (!releaseNative(env, mu0_native, mu0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // x0 is a native pointer
    // maxite is primitive
    // eps is primitive
    // mu is a native pointer
    // x is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

// ----------- enclosed eigenvalues
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsreigsHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject left_bottom_corner, jobject right_upper_corner, jobject num_eigs)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpScsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpScsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpScsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpScsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpScsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (left_bottom_corner == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'left_bottom_corner' is null for cusolverSpScsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (right_upper_corner == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'right_upper_corner' is null for cusolverSpScsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (num_eigs == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'num_eigs' is null for cusolverSpScsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpScsreigsHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, left_bottom_corner=%p, right_upper_corner=%p, num_eigs=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, left_bottom_corner, right_upper_corner, num_eigs);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    float* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuComplex left_bottom_corner_native;
    cuComplex right_upper_corner_native;
    int* num_eigs_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (float*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    if (!initNative(env, left_bottom_corner, left_bottom_corner_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!initNative(env, right_upper_corner, right_upper_corner_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    PointerData *num_eigs_pointerData = initPointerData(env, num_eigs);
    if (num_eigs_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    num_eigs_native = (int*)num_eigs_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpScsreigsHost(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, left_bottom_corner_native, right_upper_corner_native, num_eigs_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!releaseNative(env, left_bottom_corner_native, left_bottom_corner)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!releaseNative(env, right_upper_corner_native, right_upper_corner)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, num_eigs))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, num_eigs_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsreigsHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject left_bottom_corner, jobject right_upper_corner, jobject num_eigs)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpDcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpDcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpDcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpDcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpDcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (left_bottom_corner == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'left_bottom_corner' is null for cusolverSpDcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (right_upper_corner == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'right_upper_corner' is null for cusolverSpDcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (num_eigs == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'num_eigs' is null for cusolverSpDcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpDcsreigsHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, left_bottom_corner=%p, right_upper_corner=%p, num_eigs=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, left_bottom_corner, right_upper_corner, num_eigs);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    double* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuDoubleComplex left_bottom_corner_native;
    cuDoubleComplex right_upper_corner_native;
    int* num_eigs_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (double*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    if (!initNative(env, left_bottom_corner, left_bottom_corner_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!initNative(env, right_upper_corner, right_upper_corner_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    PointerData *num_eigs_pointerData = initPointerData(env, num_eigs);
    if (num_eigs_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    num_eigs_native = (int*)num_eigs_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpDcsreigsHost(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, left_bottom_corner_native, right_upper_corner_native, num_eigs_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!releaseNative(env, left_bottom_corner_native, left_bottom_corner)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!releaseNative(env, right_upper_corner_native, right_upper_corner)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, num_eigs))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, num_eigs_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsreigsHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject left_bottom_corner, jobject right_upper_corner, jobject num_eigs)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpCcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpCcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpCcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpCcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpCcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (left_bottom_corner == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'left_bottom_corner' is null for cusolverSpCcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (right_upper_corner == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'right_upper_corner' is null for cusolverSpCcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (num_eigs == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'num_eigs' is null for cusolverSpCcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpCcsreigsHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, left_bottom_corner=%p, right_upper_corner=%p, num_eigs=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, left_bottom_corner, right_upper_corner, num_eigs);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuComplex left_bottom_corner_native;
    cuComplex right_upper_corner_native;
    int* num_eigs_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (cuComplex*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    if (!initNative(env, left_bottom_corner, left_bottom_corner_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!initNative(env, right_upper_corner, right_upper_corner_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    PointerData *num_eigs_pointerData = initPointerData(env, num_eigs);
    if (num_eigs_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    num_eigs_native = (int*)num_eigs_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpCcsreigsHost(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, left_bottom_corner_native, right_upper_corner_native, num_eigs_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!releaseNative(env, left_bottom_corner_native, left_bottom_corner)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!releaseNative(env, right_upper_corner_native, right_upper_corner)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, num_eigs))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, num_eigs_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsreigsHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject left_bottom_corner, jobject right_upper_corner, jobject num_eigs)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpZcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpZcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpZcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpZcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpZcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (left_bottom_corner == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'left_bottom_corner' is null for cusolverSpZcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (right_upper_corner == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'right_upper_corner' is null for cusolverSpZcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (num_eigs == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'num_eigs' is null for cusolverSpZcsreigsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpZcsreigsHost(handle=%p, m=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, left_bottom_corner=%p, right_upper_corner=%p, num_eigs=%p)\n",
        handle, m, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, left_bottom_corner, right_upper_corner, num_eigs);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuDoubleComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuDoubleComplex left_bottom_corner_native;
    cuDoubleComplex right_upper_corner_native;
    int* num_eigs_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrValA_pointerData = initPointerData(env, csrValA);
    if (csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrValA_native = (cuDoubleComplex*)csrValA_pointerData->getPointer(env);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    if (!initNative(env, left_bottom_corner, left_bottom_corner_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!initNative(env, right_upper_corner, right_upper_corner_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    PointerData *num_eigs_pointerData = initPointerData(env, num_eigs);
    if (num_eigs_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    num_eigs_native = (int*)num_eigs_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpZcsreigsHost(handle_native, m_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, left_bottom_corner_native, right_upper_corner_native, num_eigs_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!releaseNative(env, left_bottom_corner_native, left_bottom_corner)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!releaseNative(env, right_upper_corner_native, right_upper_corner)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, num_eigs))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, num_eigs_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* --------- CPU symrcm
*   Symmetric reverse Cuthill McKee permutation
*
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrsymrcmHostNative(JNIEnv *env, jclass cls, jobject handle, jint n, jint nnzA, jobject descrA, jobject csrRowPtrA, jobject csrColIndA, jobject p)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpXcsrsymrcmHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    // nnzA is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpXcsrsymrcmHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpXcsrsymrcmHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpXcsrsymrcmHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (p == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'p' is null for cusolverSpXcsrsymrcmHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpXcsrsymrcmHost(handle=%p, n=%d, nnzA=%d, descrA=%p, csrRowPtrA=%p, csrColIndA=%p, p=%p)\n",
        handle, n, nnzA, descrA, csrRowPtrA, csrColIndA, p);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int n_native = 0;
    int nnzA_native = 0;
    cusparseMatDescr_t descrA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    int* p_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *p_pointerData = initPointerData(env, p);
    if (p_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    p_native = (int*)p_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpXcsrsymrcmHost(handle_native, n_native, nnzA_native, descrA_native, csrRowPtrA_native, csrColIndA_native, p_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // nnzA is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, p))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, p_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* --------- CPU symmdq
*   Symmetric minimum degree algorithm based on quotient graph
*
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrsymmdqHostNative(JNIEnv *env, jclass cls, jobject handle, jint n, jint nnzA, jobject descrA, jobject csrRowPtrA, jobject csrColIndA, jobject p)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpXcsrsymmdqHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    // nnzA is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpXcsrsymmdqHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpXcsrsymmdqHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpXcsrsymmdqHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (p == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'p' is null for cusolverSpXcsrsymmdqHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpXcsrsymmdqHost(handle=%p, n=%d, nnzA=%d, descrA=%p, csrRowPtrA=%p, csrColIndA=%p, p=%p)\n",
        handle, n, nnzA, descrA, csrRowPtrA, csrColIndA, p);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int n_native = 0;
    int nnzA_native = 0;
    cusparseMatDescr_t descrA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    int* p_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *p_pointerData = initPointerData(env, p);
    if (p_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    p_native = (int*)p_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpXcsrsymmdqHost(handle_native, n_native, nnzA_native, descrA_native, csrRowPtrA_native, csrColIndA_native, p_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // nnzA is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, p))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, p_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* --------- CPU symmdq
*   Symmetric Approximate minimum degree algorithm based on quotient graph
*
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrsymamdHostNative(JNIEnv *env, jclass cls, jobject handle, jint n, jint nnzA, jobject descrA, jobject csrRowPtrA, jobject csrColIndA, jobject p)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpXcsrsymamdHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // n is primitive
    // nnzA is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpXcsrsymamdHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpXcsrsymamdHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpXcsrsymamdHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (p == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'p' is null for cusolverSpXcsrsymamdHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpXcsrsymamdHost(handle=%p, n=%d, nnzA=%d, descrA=%p, csrRowPtrA=%p, csrColIndA=%p, p=%p)\n",
        handle, n, nnzA, descrA, csrRowPtrA, csrColIndA, p);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int n_native = 0;
    int nnzA_native = 0;
    cusparseMatDescr_t descrA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    int* p_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *p_pointerData = initPointerData(env, p);
    if (p_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    p_native = (int*)p_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpXcsrsymamdHost(handle_native, n_native, nnzA_native, descrA_native, csrRowPtrA_native, csrColIndA_native, p_native);

    // Write back native variable values
    // handle is a native pointer object
    // n is primitive
    // nnzA is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, p))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, p_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* --------- CPU permuation
*   P*A*Q^T
*
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrperm_1bufferSizeHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnzA, jobject descrA, jobject csrRowPtrA, jobject csrColIndA, jobject p, jobject q, jlongArray bufferSizeInBytes)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpXcsrperm_bufferSizeHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnzA is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpXcsrperm_bufferSizeHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpXcsrperm_bufferSizeHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpXcsrperm_bufferSizeHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (p == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'p' is null for cusolverSpXcsrperm_bufferSizeHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (q == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'q' is null for cusolverSpXcsrperm_bufferSizeHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // bufferSizeInBytes may be NULL

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpXcsrperm_bufferSizeHost(handle=%p, m=%d, n=%d, nnzA=%d, descrA=%p, csrRowPtrA=%p, csrColIndA=%p, p=%p, q=%p, bufferSizeInBytes=%p)\n",
        handle, m, n, nnzA, descrA, csrRowPtrA, csrColIndA, p, q, bufferSizeInBytes);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnzA_native = 0;
    cusparseMatDescr_t descrA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    int* p_native;
    int* q_native;
    size_t bufferSizeInBytes_native = 0;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *p_pointerData = initPointerData(env, p);
    if (p_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    p_native = (int*)p_pointerData->getPointer(env);
    PointerData *q_pointerData = initPointerData(env, q);
    if (q_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    q_native = (int*)q_pointerData->getPointer(env);
    // bufferSizeInBytes is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpXcsrperm_bufferSizeHost(handle_native, m_native, n_native, nnzA_native, descrA_native, csrRowPtrA_native, csrColIndA_native, p_native, q_native, &bufferSizeInBytes_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnzA is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, p))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, p_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, q))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, q_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, bufferSizeInBytes, 0, (jlong)bufferSizeInBytes_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrpermHostNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnzA, jobject descrA, jobject csrRowPtrA, jobject csrColIndA, jobject p, jobject q, jobject map, jobject pBuffer)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpXcsrpermHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnzA is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpXcsrpermHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpXcsrpermHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpXcsrpermHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (p == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'p' is null for cusolverSpXcsrpermHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (q == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'q' is null for cusolverSpXcsrpermHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (map == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'map' is null for cusolverSpXcsrpermHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (pBuffer == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'pBuffer' is null for cusolverSpXcsrpermHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpXcsrpermHost(handle=%p, m=%d, n=%d, nnzA=%d, descrA=%p, csrRowPtrA=%p, csrColIndA=%p, p=%p, q=%p, map=%p, pBuffer=%p)\n",
        handle, m, n, nnzA, descrA, csrRowPtrA, csrColIndA, p, q, map, pBuffer);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnzA_native = 0;
    cusparseMatDescr_t descrA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    int* p_native;
    int* q_native;
    int* map_native;
    void* pBuffer_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    PointerData *csrRowPtrA_pointerData = initPointerData(env, csrRowPtrA);
    if (csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrRowPtrA_native = (int*)csrRowPtrA_pointerData->getPointer(env);
    PointerData *csrColIndA_pointerData = initPointerData(env, csrColIndA);
    if (csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    csrColIndA_native = (int*)csrColIndA_pointerData->getPointer(env);
    PointerData *p_pointerData = initPointerData(env, p);
    if (p_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    p_native = (int*)p_pointerData->getPointer(env);
    PointerData *q_pointerData = initPointerData(env, q);
    if (q_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    q_native = (int*)q_pointerData->getPointer(env);
    PointerData *map_pointerData = initPointerData(env, map);
    if (map_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    map_native = (int*)map_pointerData->getPointer(env);
    PointerData *pBuffer_pointerData = initPointerData(env, pBuffer);
    if (pBuffer_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    pBuffer_native = (void*)pBuffer_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpXcsrpermHost(handle_native, m_native, n_native, nnzA_native, descrA_native, csrRowPtrA_native, csrColIndA_native, p_native, q_native, map_native, pBuffer_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnzA is primitive
    // descrA is a native pointer object
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, p))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, p_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, q))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, q_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, map))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, map_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, pBuffer))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, pBuffer_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
*  Low-level API: Batched QR
*
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCreateCsrqrInfoNative(JNIEnv *env, jclass cls, jobject info)
{
    // Null-checks for non-primitive arguments
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverSpCreateCsrqrInfo");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpCreateCsrqrInfo(info=%p)\n",
        info);

    // Native variable declarations
    csrqrInfo_t info_native;

    // Obtain native variable values
    // info is initialized here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpCreateCsrqrInfo(&info_native);

    // Write back native variable values
    setNativePointerValue(env, info, (jlong)info_native);

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDestroyCsrqrInfoNative(JNIEnv *env, jclass cls, jobject info)
{
    // Null-checks for non-primitive arguments
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverSpDestroyCsrqrInfo");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpDestroyCsrqrInfo(info=%p)\n",
        info);

    // Native variable declarations
    csrqrInfo_t info_native;

    // Obtain native variable values
    info_native = (csrqrInfo_t)getNativePointerValue(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpDestroyCsrqrInfo(info_native);

    // Write back native variable values
    // info is destroyed here

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpXcsrqrAnalysisBatchedNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnzA, jobject descrA, jobject csrRowPtrA, jobject csrColIndA, jobject info)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpXcsrqrAnalysisBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnzA is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpXcsrqrAnalysisBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpXcsrqrAnalysisBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpXcsrqrAnalysisBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverSpXcsrqrAnalysisBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpXcsrqrAnalysisBatched(handle=%p, m=%d, n=%d, nnzA=%d, descrA=%p, csrRowPtrA=%p, csrColIndA=%p, info=%p)\n",
        handle, m, n, nnzA, descrA, csrRowPtrA, csrColIndA, info);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnzA_native = 0;
    cusparseMatDescr_t descrA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    csrqrInfo_t info_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrRowPtrA_native = (int*)getPointer(env, csrRowPtrA);
    csrColIndA_native = (int*)getPointer(env, csrColIndA);
    info_native = (csrqrInfo_t)getNativePointerValue(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpXcsrqrAnalysisBatched(handle_native, m_native, n_native, nnzA_native, descrA_native, csrRowPtrA_native, csrColIndA_native, info_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnzA is primitive
    // descrA is a native pointer object
    // csrRowPtrA is a native pointer
    // csrColIndA is a native pointer
    // info is a native pointer object

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrqrBufferInfoBatchedNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jint batchSize, jobject info, jlongArray internalDataInBytes, jlongArray workspaceInBytes)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpScsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpScsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpScsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpScsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpScsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // batchSize is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverSpScsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (internalDataInBytes == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'internalDataInBytes' is null for cusolverSpScsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (workspaceInBytes == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'workspaceInBytes' is null for cusolverSpScsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpScsrqrBufferInfoBatched(handle=%p, m=%d, n=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, batchSize=%d, info=%p, internalDataInBytes=%p, workspaceInBytes=%p)\n",
        handle, m, n, nnz, descrA, csrVal, csrRowPtr, csrColInd, batchSize, info, internalDataInBytes, workspaceInBytes);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    float* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    int batchSize_native = 0;
    csrqrInfo_t info_native;
    size_t* internalDataInBytes_native;
    size_t* workspaceInBytes_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrVal_native = (float*)getPointer(env, csrVal);
    csrRowPtr_native = (int*)getPointer(env, csrRowPtr);
    csrColInd_native = (int*)getPointer(env, csrColInd);
    batchSize_native = (int)batchSize;
    info_native = (csrqrInfo_t)getNativePointerValue(env, info);
    internalDataInBytes_native = (size_t*)getPointer(env, internalDataInBytes);
    workspaceInBytes_native = (size_t*)getPointer(env, workspaceInBytes);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpScsrqrBufferInfoBatched(handle_native, m_native, n_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, batchSize_native, info_native, internalDataInBytes_native, workspaceInBytes_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrVal is a native pointer
    // csrRowPtr is a native pointer
    // csrColInd is a native pointer
    // batchSize is primitive
    // info is a native pointer object
    // internalDataInBytes is a native pointer
    // workspaceInBytes is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrqrBufferInfoBatchedNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jint batchSize, jobject info, jlongArray internalDataInBytes, jlongArray workspaceInBytes)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpDcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpDcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpDcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpDcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpDcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // batchSize is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverSpDcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (internalDataInBytes == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'internalDataInBytes' is null for cusolverSpDcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (workspaceInBytes == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'workspaceInBytes' is null for cusolverSpDcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpDcsrqrBufferInfoBatched(handle=%p, m=%d, n=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, batchSize=%d, info=%p, internalDataInBytes=%p, workspaceInBytes=%p)\n",
        handle, m, n, nnz, descrA, csrVal, csrRowPtr, csrColInd, batchSize, info, internalDataInBytes, workspaceInBytes);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    double* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    int batchSize_native = 0;
    csrqrInfo_t info_native;
    size_t* internalDataInBytes_native;
    size_t* workspaceInBytes_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrVal_native = (double*)getPointer(env, csrVal);
    csrRowPtr_native = (int*)getPointer(env, csrRowPtr);
    csrColInd_native = (int*)getPointer(env, csrColInd);
    batchSize_native = (int)batchSize;
    info_native = (csrqrInfo_t)getNativePointerValue(env, info);
    internalDataInBytes_native = (size_t*)getPointer(env, internalDataInBytes);
    workspaceInBytes_native = (size_t*)getPointer(env, workspaceInBytes);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpDcsrqrBufferInfoBatched(handle_native, m_native, n_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, batchSize_native, info_native, internalDataInBytes_native, workspaceInBytes_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrVal is a native pointer
    // csrRowPtr is a native pointer
    // csrColInd is a native pointer
    // batchSize is primitive
    // info is a native pointer object
    // internalDataInBytes is a native pointer
    // workspaceInBytes is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrqrBufferInfoBatchedNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jint batchSize, jobject info, jlongArray internalDataInBytes, jlongArray workspaceInBytes)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpCcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpCcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpCcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpCcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpCcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // batchSize is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverSpCcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (internalDataInBytes == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'internalDataInBytes' is null for cusolverSpCcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (workspaceInBytes == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'workspaceInBytes' is null for cusolverSpCcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpCcsrqrBufferInfoBatched(handle=%p, m=%d, n=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, batchSize=%d, info=%p, internalDataInBytes=%p, workspaceInBytes=%p)\n",
        handle, m, n, nnz, descrA, csrVal, csrRowPtr, csrColInd, batchSize, info, internalDataInBytes, workspaceInBytes);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuComplex* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    int batchSize_native = 0;
    csrqrInfo_t info_native;
    size_t* internalDataInBytes_native;
    size_t* workspaceInBytes_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrVal_native = (cuComplex*)getPointer(env, csrVal);
    csrRowPtr_native = (int*)getPointer(env, csrRowPtr);
    csrColInd_native = (int*)getPointer(env, csrColInd);
    batchSize_native = (int)batchSize;
    info_native = (csrqrInfo_t)getNativePointerValue(env, info);
    internalDataInBytes_native = (size_t*)getPointer(env, internalDataInBytes);
    workspaceInBytes_native = (size_t*)getPointer(env, workspaceInBytes);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpCcsrqrBufferInfoBatched(handle_native, m_native, n_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, batchSize_native, info_native, internalDataInBytes_native, workspaceInBytes_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrVal is a native pointer
    // csrRowPtr is a native pointer
    // csrColInd is a native pointer
    // batchSize is primitive
    // info is a native pointer object
    // internalDataInBytes is a native pointer
    // workspaceInBytes is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrqrBufferInfoBatchedNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnz, jobject descrA, jobject csrVal, jobject csrRowPtr, jobject csrColInd, jint batchSize, jobject info, jlongArray internalDataInBytes, jlongArray workspaceInBytes)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpZcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpZcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrVal == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrVal' is null for cusolverSpZcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtr == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtr' is null for cusolverSpZcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColInd == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColInd' is null for cusolverSpZcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // batchSize is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverSpZcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (internalDataInBytes == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'internalDataInBytes' is null for cusolverSpZcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (workspaceInBytes == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'workspaceInBytes' is null for cusolverSpZcsrqrBufferInfoBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpZcsrqrBufferInfoBatched(handle=%p, m=%d, n=%d, nnz=%d, descrA=%p, csrVal=%p, csrRowPtr=%p, csrColInd=%p, batchSize=%d, info=%p, internalDataInBytes=%p, workspaceInBytes=%p)\n",
        handle, m, n, nnz, descrA, csrVal, csrRowPtr, csrColInd, batchSize, info, internalDataInBytes, workspaceInBytes);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuDoubleComplex* csrVal_native;
    int* csrRowPtr_native;
    int* csrColInd_native;
    int batchSize_native = 0;
    csrqrInfo_t info_native;
    size_t* internalDataInBytes_native;
    size_t* workspaceInBytes_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrVal_native = (cuDoubleComplex*)getPointer(env, csrVal);
    csrRowPtr_native = (int*)getPointer(env, csrRowPtr);
    csrColInd_native = (int*)getPointer(env, csrColInd);
    batchSize_native = (int)batchSize;
    info_native = (csrqrInfo_t)getNativePointerValue(env, info);
    internalDataInBytes_native = (size_t*)getPointer(env, internalDataInBytes);
    workspaceInBytes_native = (size_t*)getPointer(env, workspaceInBytes);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpZcsrqrBufferInfoBatched(handle_native, m_native, n_native, nnz_native, descrA_native, csrVal_native, csrRowPtr_native, csrColInd_native, batchSize_native, info_native, internalDataInBytes_native, workspaceInBytes_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrVal is a native pointer
    // csrRowPtr is a native pointer
    // csrColInd is a native pointer
    // batchSize is primitive
    // info is a native pointer object
    // internalDataInBytes is a native pointer
    // workspaceInBytes is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpScsrqrsvBatchedNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jobject x, jint batchSize, jobject info, jobject pBuffer)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpScsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpScsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpScsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpScsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpScsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpScsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpScsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // batchSize is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverSpScsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (pBuffer == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'pBuffer' is null for cusolverSpScsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpScsrqrsvBatched(handle=%p, m=%d, n=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, x=%p, batchSize=%d, info=%p, pBuffer=%p)\n",
        handle, m, n, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, b, x, batchSize, info, pBuffer);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    float* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    float* b_native;
    float* x_native;
    int batchSize_native = 0;
    csrqrInfo_t info_native;
    void* pBuffer_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrValA_native = (float*)getPointer(env, csrValA);
    csrRowPtrA_native = (int*)getPointer(env, csrRowPtrA);
    csrColIndA_native = (int*)getPointer(env, csrColIndA);
    b_native = (float*)getPointer(env, b);
    x_native = (float*)getPointer(env, x);
    batchSize_native = (int)batchSize;
    info_native = (csrqrInfo_t)getNativePointerValue(env, info);
    pBuffer_native = (void*)getPointer(env, pBuffer);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpScsrqrsvBatched(handle_native, m_native, n_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, x_native, batchSize_native, info_native, pBuffer_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrValA is a native pointer
    // csrRowPtrA is a native pointer
    // csrColIndA is a native pointer
    // b is a native pointer
    // x is a native pointer
    // batchSize is primitive
    // info is a native pointer object
    // pBuffer is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpDcsrqrsvBatchedNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jobject x, jint batchSize, jobject info, jobject pBuffer)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpDcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpDcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpDcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpDcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpDcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpDcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpDcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // batchSize is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverSpDcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (pBuffer == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'pBuffer' is null for cusolverSpDcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpDcsrqrsvBatched(handle=%p, m=%d, n=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, x=%p, batchSize=%d, info=%p, pBuffer=%p)\n",
        handle, m, n, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, b, x, batchSize, info, pBuffer);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    double* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    double* b_native;
    double* x_native;
    int batchSize_native = 0;
    csrqrInfo_t info_native;
    void* pBuffer_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrValA_native = (double*)getPointer(env, csrValA);
    csrRowPtrA_native = (int*)getPointer(env, csrRowPtrA);
    csrColIndA_native = (int*)getPointer(env, csrColIndA);
    b_native = (double*)getPointer(env, b);
    x_native = (double*)getPointer(env, x);
    batchSize_native = (int)batchSize;
    info_native = (csrqrInfo_t)getNativePointerValue(env, info);
    pBuffer_native = (void*)getPointer(env, pBuffer);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpDcsrqrsvBatched(handle_native, m_native, n_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, x_native, batchSize_native, info_native, pBuffer_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrValA is a native pointer
    // csrRowPtrA is a native pointer
    // csrColIndA is a native pointer
    // b is a native pointer
    // x is a native pointer
    // batchSize is primitive
    // info is a native pointer object
    // pBuffer is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpCcsrqrsvBatchedNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jobject x, jint batchSize, jobject info, jobject pBuffer)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpCcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpCcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpCcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpCcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpCcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpCcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpCcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // batchSize is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverSpCcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (pBuffer == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'pBuffer' is null for cusolverSpCcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpCcsrqrsvBatched(handle=%p, m=%d, n=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, x=%p, batchSize=%d, info=%p, pBuffer=%p)\n",
        handle, m, n, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, b, x, batchSize, info, pBuffer);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuComplex* b_native;
    cuComplex* x_native;
    int batchSize_native = 0;
    csrqrInfo_t info_native;
    void* pBuffer_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrValA_native = (cuComplex*)getPointer(env, csrValA);
    csrRowPtrA_native = (int*)getPointer(env, csrRowPtrA);
    csrColIndA_native = (int*)getPointer(env, csrColIndA);
    b_native = (cuComplex*)getPointer(env, b);
    x_native = (cuComplex*)getPointer(env, x);
    batchSize_native = (int)batchSize;
    info_native = (csrqrInfo_t)getNativePointerValue(env, info);
    pBuffer_native = (void*)getPointer(env, pBuffer);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpCcsrqrsvBatched(handle_native, m_native, n_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, x_native, batchSize_native, info_native, pBuffer_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrValA is a native pointer
    // csrRowPtrA is a native pointer
    // csrColIndA is a native pointer
    // b is a native pointer
    // x is a native pointer
    // batchSize is primitive
    // info is a native pointer object
    // pBuffer is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverSp_cusolverSpZcsrqrsvBatchedNative(JNIEnv *env, jclass cls, jobject handle, jint m, jint n, jint nnz, jobject descrA, jobject csrValA, jobject csrRowPtrA, jobject csrColIndA, jobject b, jobject x, jint batchSize, jobject info, jobject pBuffer)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverSpZcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // m is primitive
    // n is primitive
    // nnz is primitive
    if (descrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'descrA' is null for cusolverSpZcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverSpZcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverSpZcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverSpZcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (b == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'b' is null for cusolverSpZcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (x == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'x' is null for cusolverSpZcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // batchSize is primitive
    if (info == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'info' is null for cusolverSpZcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (pBuffer == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'pBuffer' is null for cusolverSpZcsrqrsvBatched");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverSpZcsrqrsvBatched(handle=%p, m=%d, n=%d, nnz=%d, descrA=%p, csrValA=%p, csrRowPtrA=%p, csrColIndA=%p, b=%p, x=%p, batchSize=%d, info=%p, pBuffer=%p)\n",
        handle, m, n, nnz, descrA, csrValA, csrRowPtrA, csrColIndA, b, x, batchSize, info, pBuffer);

    // Native variable declarations
    cusolverSpHandle_t handle_native;
    int m_native = 0;
    int n_native = 0;
    int nnz_native = 0;
    cusparseMatDescr_t descrA_native;
    cuDoubleComplex* csrValA_native;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    cuDoubleComplex* b_native;
    cuDoubleComplex* x_native;
    int batchSize_native = 0;
    csrqrInfo_t info_native;
    void* pBuffer_native;

    // Obtain native variable values
    handle_native = (cusolverSpHandle_t)getNativePointerValue(env, handle);
    m_native = (int)m;
    n_native = (int)n;
    nnz_native = (int)nnz;
    descrA_native = (cusparseMatDescr_t)getNativePointerValue(env, descrA);
    csrValA_native = (cuDoubleComplex*)getPointer(env, csrValA);
    csrRowPtrA_native = (int*)getPointer(env, csrRowPtrA);
    csrColIndA_native = (int*)getPointer(env, csrColIndA);
    b_native = (cuDoubleComplex*)getPointer(env, b);
    x_native = (cuDoubleComplex*)getPointer(env, x);
    batchSize_native = (int)batchSize;
    info_native = (csrqrInfo_t)getNativePointerValue(env, info);
    pBuffer_native = (void*)getPointer(env, pBuffer);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverSpZcsrqrsvBatched(handle_native, m_native, n_native, nnz_native, descrA_native, csrValA_native, csrRowPtrA_native, csrColIndA_native, b_native, x_native, batchSize_native, info_native, pBuffer_native);

    // Write back native variable values
    // handle is a native pointer object
    // m is primitive
    // n is primitive
    // nnz is primitive
    // descrA is a native pointer object
    // csrValA is a native pointer
    // csrRowPtrA is a native pointer
    // csrColIndA is a native pointer
    // b is a native pointer
    // x is a native pointer
    // batchSize is primitive
    // info is a native pointer object
    // pBuffer is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}


