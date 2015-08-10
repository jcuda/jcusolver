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

#include "JCusolverRf.hpp"
#include "JCusolver_common.hpp"
#include <iostream>
#include <string>
#include <cuda_runtime_api.h>



//=== Auto-generated part: ===================================================

/** CUSOLVERRF create (allocate memory) and destroy (free memory) in the handle */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfCreateNative(JNIEnv *env, jclass cls, jobject handle)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfCreate");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfCreate(handle=%p)\n",
        handle);

    // Native variable declarations
    cusolverRfHandle_t handle_native;

    // Obtain native variable values
    // handle is initialized here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfCreate(&handle_native);

    // Write back native variable values
    setNativePointerValue(env, handle, (jlong)handle_native);

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfDestroyNative(JNIEnv *env, jclass cls, jobject handle)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfDestroy");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfDestroy(handle=%p)\n",
        handle);

    // Native variable declarations
    cusolverRfHandle_t handle_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfDestroy(handle_native);

    // Write back native variable values
    // handle is destroyed here

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF set and get input format */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfGetMatrixFormatNative(JNIEnv *env, jclass cls, jobject handle, jintArray format, jintArray diag)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfGetMatrixFormat");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (format == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'format' is null for cusolverRfGetMatrixFormat");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (diag == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'diag' is null for cusolverRfGetMatrixFormat");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfGetMatrixFormat(handle=%p, format=%p, diag=%p)\n",
        handle, format, diag);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    cusolverRfMatrixFormat_t format_native;
    cusolverRfUnitDiagonal_t diag_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    // format is set here
    // diag is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfGetMatrixFormat(handle_native, &format_native, &diag_native);

    // Write back native variable values
    // handle is a native pointer object
    if (!set(env, format, 0, (jint)format_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, diag, 0, (jint)diag_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfSetMatrixFormatNative(JNIEnv *env, jclass cls, jobject handle, jint format, jint diag)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfSetMatrixFormat");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // format is primitive
    // diag is primitive

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfSetMatrixFormat(handle=%p, format=%d, diag=%d)\n",
        handle, format, diag);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    cusolverRfMatrixFormat_t format_native;
    cusolverRfUnitDiagonal_t diag_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    format_native = (cusolverRfMatrixFormat_t)format;
    diag_native = (cusolverRfUnitDiagonal_t)diag;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfSetMatrixFormat(handle_native, format_native, diag_native);

    // Write back native variable values
    // handle is a native pointer object
    // format is primitive
    // diag is primitive

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF set and get numeric properties */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfSetNumericPropertiesNative(JNIEnv *env, jclass cls, jobject handle, jdouble zero, jdouble boost)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfSetNumericProperties");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // zero is primitive
    // boost is primitive

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfSetNumericProperties(handle=%p, zero=%lf, boost=%lf)\n",
        handle, zero, boost);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    double zero_native = 0.0;
    double boost_native = 0.0;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    zero_native = (double)zero;
    boost_native = (double)boost;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfSetNumericProperties(handle_native, zero_native, boost_native);

    // Write back native variable values
    // handle is a native pointer object
    // zero is primitive
    // boost is primitive

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfGetNumericPropertiesNative(JNIEnv *env, jclass cls, jobject handle, jdoubleArray zero, jdoubleArray boost)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfGetNumericProperties");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (zero == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'zero' is null for cusolverRfGetNumericProperties");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (boost == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'boost' is null for cusolverRfGetNumericProperties");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfGetNumericProperties(handle=%p, zero=%p, boost=%p)\n",
        handle, zero, boost);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    double zero_native = 0.0;
    double boost_native = 0.0;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    // zero is set here
    // boost is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfGetNumericProperties(handle_native, &zero_native, &boost_native);

    // Write back native variable values
    // handle is a native pointer object
    if (!set(env, zero, 0, (jdouble)zero_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, boost, 0, (jdouble)boost_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfGetNumericBoostReportNative(JNIEnv *env, jclass cls, jobject handle, jintArray report)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfGetNumericBoostReport");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (report == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'report' is null for cusolverRfGetNumericBoostReport");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfGetNumericBoostReport(handle=%p, report=%p)\n",
        handle, report);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    cusolverRfNumericBoostReport_t report_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    // report is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfGetNumericBoostReport(handle_native, &report_native);

    // Write back native variable values
    // handle is a native pointer object
    if (!set(env, report, 0, (jint)report_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF choose the triangular solve algorithm */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfSetAlgsNative(JNIEnv *env, jclass cls, jobject handle, jint factAlg, jint solveAlg)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfSetAlgs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // factAlg is primitive
    // solveAlg is primitive

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfSetAlgs(handle=%p, factAlg=%d, solveAlg=%d)\n",
        handle, factAlg, solveAlg);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    cusolverRfFactorization_t factAlg_native;
    cusolverRfTriangularSolve_t solveAlg_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    factAlg_native = (cusolverRfFactorization_t)factAlg;
    solveAlg_native = (cusolverRfTriangularSolve_t)solveAlg;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfSetAlgs(handle_native, factAlg_native, solveAlg_native);

    // Write back native variable values
    // handle is a native pointer object
    // factAlg is primitive
    // solveAlg is primitive

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfGetAlgsNative(JNIEnv *env, jclass cls, jobject handle, jintArray factAlg, jintArray solveAlg)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfGetAlgs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (factAlg == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'factAlg' is null for cusolverRfGetAlgs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (solveAlg == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'solveAlg' is null for cusolverRfGetAlgs");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfGetAlgs(handle=%p, factAlg=%p, solveAlg=%p)\n",
        handle, factAlg, solveAlg);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    cusolverRfFactorization_t factAlg_native;
    cusolverRfTriangularSolve_t solveAlg_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    // factAlg is set here
    // solveAlg is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfGetAlgs(handle_native, &factAlg_native, &solveAlg_native);

    // Write back native variable values
    // handle is a native pointer object
    if (!set(env, factAlg, 0, (jint)factAlg_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    if (!set(env, solveAlg, 0, (jint)solveAlg_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF set and get fast mode */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfGetResetValuesFastModeNative(JNIEnv *env, jclass cls, jobject handle, jintArray fastMode)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfGetResetValuesFastMode");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (fastMode == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'fastMode' is null for cusolverRfGetResetValuesFastMode");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfGetResetValuesFastMode(handle=%p, fastMode=%p)\n",
        handle, fastMode);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    cusolverRfResetValuesFastMode_t fastMode_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    // fastMode is set here

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfGetResetValuesFastMode(handle_native, &fastMode_native);

    // Write back native variable values
    // handle is a native pointer object
    if (!set(env, fastMode, 0, (jint)fastMode_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfSetResetValuesFastModeNative(JNIEnv *env, jclass cls, jobject handle, jint fastMode)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfSetResetValuesFastMode");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // fastMode is primitive

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfSetResetValuesFastMode(handle=%p, fastMode=%d)\n",
        handle, fastMode);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    cusolverRfResetValuesFastMode_t fastMode_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    fastMode_native = (cusolverRfResetValuesFastMode_t)fastMode;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfSetResetValuesFastMode(handle_native, fastMode_native);

    // Write back native variable values
    // handle is a native pointer object
    // fastMode is primitive

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/*** Non-Batched Routines ***/
/** CUSOLVERRF setup of internal structures from host or device memory */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfSetupHostNative(JNIEnv *env, jclass cls, jint n, jint nnzA, jobject h_csrRowPtrA, jobject h_csrColIndA, jobject h_csrValA, jint nnzL, jobject h_csrRowPtrL, jobject h_csrColIndL, jobject h_csrValL, jint nnzU, jobject h_csrRowPtrU, jobject h_csrColIndU, jobject h_csrValU, jobject h_P, jobject h_Q, jobject handle)
{
    // Null-checks for non-primitive arguments
    // n is primitive
    // nnzA is primitive
    if (h_csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrRowPtrA' is null for cusolverRfSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrColIndA' is null for cusolverRfSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrValA' is null for cusolverRfSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // nnzL is primitive
    if (h_csrRowPtrL == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrRowPtrL' is null for cusolverRfSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrColIndL == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrColIndL' is null for cusolverRfSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrValL == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrValL' is null for cusolverRfSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // nnzU is primitive
    if (h_csrRowPtrU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrRowPtrU' is null for cusolverRfSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrColIndU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrColIndU' is null for cusolverRfSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrValU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrValU' is null for cusolverRfSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_P == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_P' is null for cusolverRfSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_Q == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_Q' is null for cusolverRfSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfSetupHost(n=%d, nnzA=%d, h_csrRowPtrA=%p, h_csrColIndA=%p, h_csrValA=%p, nnzL=%d, h_csrRowPtrL=%p, h_csrColIndL=%p, h_csrValL=%p, nnzU=%d, h_csrRowPtrU=%p, h_csrColIndU=%p, h_csrValU=%p, h_P=%p, h_Q=%p, handle=%p)\n",
        n, nnzA, h_csrRowPtrA, h_csrColIndA, h_csrValA, nnzL, h_csrRowPtrL, h_csrColIndL, h_csrValL, nnzU, h_csrRowPtrU, h_csrColIndU, h_csrValU, h_P, h_Q, handle);

    // Native variable declarations
    int n_native = 0;
    int nnzA_native = 0;
    int* h_csrRowPtrA_native;
    int* h_csrColIndA_native;
    double* h_csrValA_native;
    int nnzL_native = 0;
    int* h_csrRowPtrL_native;
    int* h_csrColIndL_native;
    double* h_csrValL_native;
    int nnzU_native = 0;
    int* h_csrRowPtrU_native;
    int* h_csrColIndU_native;
    double* h_csrValU_native;
    int* h_P_native;
    int* h_Q_native;
    cusolverRfHandle_t handle_native;

    // Obtain native variable values
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    PointerData *h_csrRowPtrA_pointerData = initPointerData(env, h_csrRowPtrA);
    if (h_csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrRowPtrA_native = (int*)h_csrRowPtrA_pointerData->getPointer(env);
    PointerData *h_csrColIndA_pointerData = initPointerData(env, h_csrColIndA);
    if (h_csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrColIndA_native = (int*)h_csrColIndA_pointerData->getPointer(env);
    PointerData *h_csrValA_pointerData = initPointerData(env, h_csrValA);
    if (h_csrValA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrValA_native = (double*)h_csrValA_pointerData->getPointer(env);
    nnzL_native = (int)nnzL;
    PointerData *h_csrRowPtrL_pointerData = initPointerData(env, h_csrRowPtrL);
    if (h_csrRowPtrL_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrRowPtrL_native = (int*)h_csrRowPtrL_pointerData->getPointer(env);
    PointerData *h_csrColIndL_pointerData = initPointerData(env, h_csrColIndL);
    if (h_csrColIndL_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrColIndL_native = (int*)h_csrColIndL_pointerData->getPointer(env);
    PointerData *h_csrValL_pointerData = initPointerData(env, h_csrValL);
    if (h_csrValL_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrValL_native = (double*)h_csrValL_pointerData->getPointer(env);
    nnzU_native = (int)nnzU;
    PointerData *h_csrRowPtrU_pointerData = initPointerData(env, h_csrRowPtrU);
    if (h_csrRowPtrU_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrRowPtrU_native = (int*)h_csrRowPtrU_pointerData->getPointer(env);
    PointerData *h_csrColIndU_pointerData = initPointerData(env, h_csrColIndU);
    if (h_csrColIndU_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrColIndU_native = (int*)h_csrColIndU_pointerData->getPointer(env);
    PointerData *h_csrValU_pointerData = initPointerData(env, h_csrValU);
    if (h_csrValU_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrValU_native = (double*)h_csrValU_pointerData->getPointer(env);
    PointerData *h_P_pointerData = initPointerData(env, h_P);
    if (h_P_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_P_native = (int*)h_P_pointerData->getPointer(env);
    PointerData *h_Q_pointerData = initPointerData(env, h_Q);
    if (h_Q_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_Q_native = (int*)h_Q_pointerData->getPointer(env);
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfSetupHost(n_native, nnzA_native, h_csrRowPtrA_native, h_csrColIndA_native, h_csrValA_native, nnzL_native, h_csrRowPtrL_native, h_csrColIndL_native, h_csrValL_native, nnzU_native, h_csrRowPtrU_native, h_csrColIndU_native, h_csrValU_native, h_P_native, h_Q_native, handle_native);

    // Write back native variable values
    // n is primitive
    // nnzA is primitive
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrValA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrValA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // nnzL is primitive
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrRowPtrL))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrRowPtrL_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrColIndL))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrColIndL_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrValL))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrValL_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // nnzU is primitive
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrRowPtrU))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrRowPtrU_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrColIndU))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrColIndU_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrValU))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrValU_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_P))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_P_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_Q))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_Q_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // handle is a native pointer object

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfSetupDeviceNative(JNIEnv *env, jclass cls, jint n, jint nnzA, jobject csrRowPtrA, jobject csrColIndA, jobject csrValA, jint nnzL, jobject csrRowPtrL, jobject csrColIndL, jobject csrValL, jint nnzU, jobject csrRowPtrU, jobject csrColIndU, jobject csrValU, jobject P, jobject Q, jobject handle)
{
    // Null-checks for non-primitive arguments
    // n is primitive
    // nnzA is primitive
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverRfSetupDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverRfSetupDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverRfSetupDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // nnzL is primitive
    if (csrRowPtrL == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrL' is null for cusolverRfSetupDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndL == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndL' is null for cusolverRfSetupDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValL == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValL' is null for cusolverRfSetupDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // nnzU is primitive
    if (csrRowPtrU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrU' is null for cusolverRfSetupDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndU' is null for cusolverRfSetupDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValU' is null for cusolverRfSetupDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (P == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'P' is null for cusolverRfSetupDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Q == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Q' is null for cusolverRfSetupDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfSetupDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfSetupDevice(n=%d, nnzA=%d, csrRowPtrA=%p, csrColIndA=%p, csrValA=%p, nnzL=%d, csrRowPtrL=%p, csrColIndL=%p, csrValL=%p, nnzU=%d, csrRowPtrU=%p, csrColIndU=%p, csrValU=%p, P=%p, Q=%p, handle=%p)\n",
        n, nnzA, csrRowPtrA, csrColIndA, csrValA, nnzL, csrRowPtrL, csrColIndL, csrValL, nnzU, csrRowPtrU, csrColIndU, csrValU, P, Q, handle);

    // Native variable declarations
    int n_native = 0;
    int nnzA_native = 0;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    double* csrValA_native;
    int nnzL_native = 0;
    int* csrRowPtrL_native;
    int* csrColIndL_native;
    double* csrValL_native;
    int nnzU_native = 0;
    int* csrRowPtrU_native;
    int* csrColIndU_native;
    double* csrValU_native;
    int* P_native;
    int* Q_native;
    cusolverRfHandle_t handle_native;

    // Obtain native variable values
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    csrRowPtrA_native = (int*)getPointer(env, csrRowPtrA);
    csrColIndA_native = (int*)getPointer(env, csrColIndA);
    csrValA_native = (double*)getPointer(env, csrValA);
    nnzL_native = (int)nnzL;
    csrRowPtrL_native = (int*)getPointer(env, csrRowPtrL);
    csrColIndL_native = (int*)getPointer(env, csrColIndL);
    csrValL_native = (double*)getPointer(env, csrValL);
    nnzU_native = (int)nnzU;
    csrRowPtrU_native = (int*)getPointer(env, csrRowPtrU);
    csrColIndU_native = (int*)getPointer(env, csrColIndU);
    csrValU_native = (double*)getPointer(env, csrValU);
    P_native = (int*)getPointer(env, P);
    Q_native = (int*)getPointer(env, Q);
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfSetupDevice(n_native, nnzA_native, csrRowPtrA_native, csrColIndA_native, csrValA_native, nnzL_native, csrRowPtrL_native, csrColIndL_native, csrValL_native, nnzU_native, csrRowPtrU_native, csrColIndU_native, csrValU_native, P_native, Q_native, handle_native);

    // Write back native variable values
    // n is primitive
    // nnzA is primitive
    // csrRowPtrA is a native pointer
    // csrColIndA is a native pointer
    // csrValA is a native pointer
    // nnzL is primitive
    // csrRowPtrL is a native pointer
    // csrColIndL is a native pointer
    // csrValL is a native pointer
    // nnzU is primitive
    // csrRowPtrU is a native pointer
    // csrColIndU is a native pointer
    // csrValU is a native pointer
    // P is a native pointer
    // Q is a native pointer
    // handle is a native pointer object

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF update the matrix values (assuming the reordering, pivoting
and consequently the sparsity pattern of L and U did not change),
and zero out the remaining values. */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfResetValuesNative(JNIEnv *env, jclass cls, jint n, jint nnzA, jobject csrRowPtrA, jobject csrColIndA, jobject csrValA, jobject P, jobject Q, jobject handle)
{
    // Null-checks for non-primitive arguments
    // n is primitive
    // nnzA is primitive
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverRfResetValues");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverRfResetValues");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA' is null for cusolverRfResetValues");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (P == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'P' is null for cusolverRfResetValues");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Q == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Q' is null for cusolverRfResetValues");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfResetValues");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfResetValues(n=%d, nnzA=%d, csrRowPtrA=%p, csrColIndA=%p, csrValA=%p, P=%p, Q=%p, handle=%p)\n",
        n, nnzA, csrRowPtrA, csrColIndA, csrValA, P, Q, handle);

    // Native variable declarations
    int n_native = 0;
    int nnzA_native = 0;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    double* csrValA_native;
    int* P_native;
    int* Q_native;
    cusolverRfHandle_t handle_native;

    // Obtain native variable values
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    csrRowPtrA_native = (int*)getPointer(env, csrRowPtrA);
    csrColIndA_native = (int*)getPointer(env, csrColIndA);
    csrValA_native = (double*)getPointer(env, csrValA);
    P_native = (int*)getPointer(env, P);
    Q_native = (int*)getPointer(env, Q);
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfResetValues(n_native, nnzA_native, csrRowPtrA_native, csrColIndA_native, csrValA_native, P_native, Q_native, handle_native);

    // Write back native variable values
    // n is primitive
    // nnzA is primitive
    // csrRowPtrA is a native pointer
    // csrColIndA is a native pointer
    // csrValA is a native pointer
    // P is a native pointer
    // Q is a native pointer
    // handle is a native pointer object

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF analysis (for parallelism) */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfAnalyzeNative(JNIEnv *env, jclass cls, jobject handle)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfAnalyze");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfAnalyze(handle=%p)\n",
        handle);

    // Native variable declarations
    cusolverRfHandle_t handle_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfAnalyze(handle_native);

    // Write back native variable values
    // handle is a native pointer object

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF re-factorization (for parallelism) */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfRefactorNative(JNIEnv *env, jclass cls, jobject handle)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfRefactor");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfRefactor(handle=%p)\n",
        handle);

    // Native variable declarations
    cusolverRfHandle_t handle_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfRefactor(handle_native);

    // Write back native variable values
    // handle is a native pointer object

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF extraction: Get L & U packed into a single matrix M */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfAccessBundledFactorsDeviceNative(JNIEnv *env, jclass cls, jobject handle, jobject nnzM, jobject Mp, jobject Mi, jobject Mx)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfAccessBundledFactorsDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (nnzM == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'nnzM' is null for cusolverRfAccessBundledFactorsDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Mp == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Mp' is null for cusolverRfAccessBundledFactorsDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Mi == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Mi' is null for cusolverRfAccessBundledFactorsDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Mx == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Mx' is null for cusolverRfAccessBundledFactorsDevice");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfAccessBundledFactorsDevice(handle=%p, nnzM=%p, Mp=%p, Mi=%p, Mx=%p)\n",
        handle, nnzM, Mp, Mi, Mx);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    int* nnzM_native;
    int** Mp_native;
    int** Mi_native;
    double** Mx_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    nnzM_native = (int*)getPointer(env, nnzM);
    Mp_native = (int**)getPointer(env, Mp);
    Mi_native = (int**)getPointer(env, Mi);
    Mx_native = (double**)getPointer(env, Mx);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfAccessBundledFactorsDevice(handle_native, nnzM_native, Mp_native, Mi_native, Mx_native);

    // Write back native variable values
    // handle is a native pointer object
    // nnzM is a native pointer
    // Mp is a native pointer
    // Mi is a native pointer
    // Mx is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfExtractBundledFactorsHostNative(JNIEnv *env, jclass cls, jobject handle, jobject h_nnzM, jobject h_Mp, jobject h_Mi, jobject h_Mx)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfExtractBundledFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_nnzM == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_nnzM' is null for cusolverRfExtractBundledFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_Mp == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_Mp' is null for cusolverRfExtractBundledFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_Mi == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_Mi' is null for cusolverRfExtractBundledFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_Mx == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_Mx' is null for cusolverRfExtractBundledFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfExtractBundledFactorsHost(handle=%p, h_nnzM=%p, h_Mp=%p, h_Mi=%p, h_Mx=%p)\n",
        handle, h_nnzM, h_Mp, h_Mi, h_Mx);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    int* h_nnzM_native;
    int** h_Mp_native;
    int** h_Mi_native;
    double** h_Mx_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    PointerData *h_nnzM_pointerData = initPointerData(env, h_nnzM);
    if (h_nnzM_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_nnzM_native = (int*)h_nnzM_pointerData->getPointer(env);
    PointerData *h_Mp_pointerData = initPointerData(env, h_Mp);
    if (h_Mp_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_Mp_native = (int**)h_Mp_pointerData->getPointer(env);
    PointerData *h_Mi_pointerData = initPointerData(env, h_Mi);
    if (h_Mi_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_Mi_native = (int**)h_Mi_pointerData->getPointer(env);
    PointerData *h_Mx_pointerData = initPointerData(env, h_Mx);
    if (h_Mx_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_Mx_native = (double**)h_Mx_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfExtractBundledFactorsHost(handle_native, h_nnzM_native, h_Mp_native, h_Mi_native, h_Mx_native);

    // Write back native variable values
    // handle is a native pointer object
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_nnzM))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_nnzM_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_Mp))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_Mp_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_Mi))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_Mi_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_Mx))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_Mx_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF extraction: Get L & U individually */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfExtractSplitFactorsHostNative(JNIEnv *env, jclass cls, jobject handle, jobject h_nnzL, jobject h_csrRowPtrL, jobject h_csrColIndL, jobject h_csrValL, jobject h_nnzU, jobject h_csrRowPtrU, jobject h_csrColIndU, jobject h_csrValU)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfExtractSplitFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_nnzL == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_nnzL' is null for cusolverRfExtractSplitFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrRowPtrL == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrRowPtrL' is null for cusolverRfExtractSplitFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrColIndL == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrColIndL' is null for cusolverRfExtractSplitFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrValL == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrValL' is null for cusolverRfExtractSplitFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_nnzU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_nnzU' is null for cusolverRfExtractSplitFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrRowPtrU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrRowPtrU' is null for cusolverRfExtractSplitFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrColIndU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrColIndU' is null for cusolverRfExtractSplitFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrValU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrValU' is null for cusolverRfExtractSplitFactorsHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfExtractSplitFactorsHost(handle=%p, h_nnzL=%p, h_csrRowPtrL=%p, h_csrColIndL=%p, h_csrValL=%p, h_nnzU=%p, h_csrRowPtrU=%p, h_csrColIndU=%p, h_csrValU=%p)\n",
        handle, h_nnzL, h_csrRowPtrL, h_csrColIndL, h_csrValL, h_nnzU, h_csrRowPtrU, h_csrColIndU, h_csrValU);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    int* h_nnzL_native;
    int** h_csrRowPtrL_native;
    int** h_csrColIndL_native;
    double** h_csrValL_native;
    int* h_nnzU_native;
    int** h_csrRowPtrU_native;
    int** h_csrColIndU_native;
    double** h_csrValU_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    PointerData *h_nnzL_pointerData = initPointerData(env, h_nnzL);
    if (h_nnzL_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_nnzL_native = (int*)h_nnzL_pointerData->getPointer(env);
    PointerData *h_csrRowPtrL_pointerData = initPointerData(env, h_csrRowPtrL);
    if (h_csrRowPtrL_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrRowPtrL_native = (int**)h_csrRowPtrL_pointerData->getPointer(env);
    PointerData *h_csrColIndL_pointerData = initPointerData(env, h_csrColIndL);
    if (h_csrColIndL_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrColIndL_native = (int**)h_csrColIndL_pointerData->getPointer(env);
    PointerData *h_csrValL_pointerData = initPointerData(env, h_csrValL);
    if (h_csrValL_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrValL_native = (double**)h_csrValL_pointerData->getPointer(env);
    PointerData *h_nnzU_pointerData = initPointerData(env, h_nnzU);
    if (h_nnzU_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_nnzU_native = (int*)h_nnzU_pointerData->getPointer(env);
    PointerData *h_csrRowPtrU_pointerData = initPointerData(env, h_csrRowPtrU);
    if (h_csrRowPtrU_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrRowPtrU_native = (int**)h_csrRowPtrU_pointerData->getPointer(env);
    PointerData *h_csrColIndU_pointerData = initPointerData(env, h_csrColIndU);
    if (h_csrColIndU_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrColIndU_native = (int**)h_csrColIndU_pointerData->getPointer(env);
    PointerData *h_csrValU_pointerData = initPointerData(env, h_csrValU);
    if (h_csrValU_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrValU_native = (double**)h_csrValU_pointerData->getPointer(env);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfExtractSplitFactorsHost(handle_native, h_nnzL_native, h_csrRowPtrL_native, h_csrColIndL_native, h_csrValL_native, h_nnzU_native, h_csrRowPtrU_native, h_csrColIndU_native, h_csrValU_native);

    // Write back native variable values
    // handle is a native pointer object
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_nnzL))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_nnzL_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrRowPtrL))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrRowPtrL_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrColIndL))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrColIndL_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrValL))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrValL_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_nnzU))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_nnzU_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrRowPtrU))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrRowPtrU_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrColIndU))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrColIndU_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrValU))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrValU_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF (forward and backward triangular) solves */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfSolveNative(JNIEnv *env, jclass cls, jobject handle, jobject P, jobject Q, jint nrhs, jobject Temp, jint ldt, jobject XF, jint ldxf)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfSolve");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (P == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'P' is null for cusolverRfSolve");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Q == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Q' is null for cusolverRfSolve");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // nrhs is primitive
    if (Temp == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Temp' is null for cusolverRfSolve");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldt is primitive
    if (XF == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'XF' is null for cusolverRfSolve");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldxf is primitive

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfSolve(handle=%p, P=%p, Q=%p, nrhs=%d, Temp=%p, ldt=%d, XF=%p, ldxf=%d)\n",
        handle, P, Q, nrhs, Temp, ldt, XF, ldxf);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    int* P_native;
    int* Q_native;
    int nrhs_native = 0;
    double* Temp_native;
    int ldt_native = 0;
    double* XF_native;
    int ldxf_native = 0;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    P_native = (int*)getPointer(env, P);
    Q_native = (int*)getPointer(env, Q);
    nrhs_native = (int)nrhs;
    Temp_native = (double*)getPointer(env, Temp);
    ldt_native = (int)ldt;
    XF_native = (double*)getPointer(env, XF);
    ldxf_native = (int)ldxf;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfSolve(handle_native, P_native, Q_native, nrhs_native, Temp_native, ldt_native, XF_native, ldxf_native);

    // Write back native variable values
    // handle is a native pointer object
    // P is a native pointer
    // Q is a native pointer
    // nrhs is primitive
    // Temp is a native pointer
    // ldt is primitive
    // XF is a native pointer
    // ldxf is primitive

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/*** Batched Routines ***/
/** CUSOLVERRF-batch setup of internal structures from host */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfBatchSetupHostNative(JNIEnv *env, jclass cls, jint batchSize, jint n, jint nnzA, jobject h_csrRowPtrA, jobject h_csrColIndA, jobject h_csrValA_array, jint nnzL, jobject h_csrRowPtrL, jobject h_csrColIndL, jobject h_csrValL, jint nnzU, jobject h_csrRowPtrU, jobject h_csrColIndU, jobject h_csrValU, jobject h_P, jobject h_Q, jobject handle)
{
    // Null-checks for non-primitive arguments
    // batchSize is primitive
    // n is primitive
    // nnzA is primitive
    if (h_csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrRowPtrA' is null for cusolverRfBatchSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrColIndA' is null for cusolverRfBatchSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrValA_array == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrValA_array' is null for cusolverRfBatchSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // nnzL is primitive
    if (h_csrRowPtrL == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrRowPtrL' is null for cusolverRfBatchSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrColIndL == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrColIndL' is null for cusolverRfBatchSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrValL == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrValL' is null for cusolverRfBatchSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // nnzU is primitive
    if (h_csrRowPtrU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrRowPtrU' is null for cusolverRfBatchSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrColIndU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrColIndU' is null for cusolverRfBatchSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_csrValU == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_csrValU' is null for cusolverRfBatchSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_P == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_P' is null for cusolverRfBatchSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (h_Q == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'h_Q' is null for cusolverRfBatchSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfBatchSetupHost");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfBatchSetupHost(batchSize=%d, n=%d, nnzA=%d, h_csrRowPtrA=%p, h_csrColIndA=%p, h_csrValA_array=%p, nnzL=%d, h_csrRowPtrL=%p, h_csrColIndL=%p, h_csrValL=%p, nnzU=%d, h_csrRowPtrU=%p, h_csrColIndU=%p, h_csrValU=%p, h_P=%p, h_Q=%p, handle=%p)\n",
        batchSize, n, nnzA, h_csrRowPtrA, h_csrColIndA, h_csrValA_array, nnzL, h_csrRowPtrL, h_csrColIndL, h_csrValL, nnzU, h_csrRowPtrU, h_csrColIndU, h_csrValU, h_P, h_Q, handle);

    // Native variable declarations
    int batchSize_native = 0;
    int n_native = 0;
    int nnzA_native = 0;
    int* h_csrRowPtrA_native;
    int* h_csrColIndA_native;
    double** h_csrValA_array_native = NULL;
    int nnzL_native = 0;
    int* h_csrRowPtrL_native;
    int* h_csrColIndL_native;
    double* h_csrValL_native;
    int nnzU_native = 0;
    int* h_csrRowPtrU_native;
    int* h_csrColIndU_native;
    double* h_csrValU_native;
    int* h_P_native;
    int* h_Q_native;
    cusolverRfHandle_t handle_native;

    // Obtain native variable values
    batchSize_native = (int)batchSize;
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    PointerData *h_csrRowPtrA_pointerData = initPointerData(env, h_csrRowPtrA);
    if (h_csrRowPtrA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrRowPtrA_native = (int*)h_csrRowPtrA_pointerData->getPointer(env);
    PointerData *h_csrColIndA_pointerData = initPointerData(env, h_csrColIndA);
    if (h_csrColIndA_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrColIndA_native = (int*)h_csrColIndA_pointerData->getPointer(env);
    h_csrValA_array_native = (double**)getPointer(env, h_csrValA_array);
    nnzL_native = (int)nnzL;
    PointerData *h_csrRowPtrL_pointerData = initPointerData(env, h_csrRowPtrL);
    if (h_csrRowPtrL_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrRowPtrL_native = (int*)h_csrRowPtrL_pointerData->getPointer(env);
    PointerData *h_csrColIndL_pointerData = initPointerData(env, h_csrColIndL);
    if (h_csrColIndL_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrColIndL_native = (int*)h_csrColIndL_pointerData->getPointer(env);
    PointerData *h_csrValL_pointerData = initPointerData(env, h_csrValL);
    if (h_csrValL_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrValL_native = (double*)h_csrValL_pointerData->getPointer(env);
    nnzU_native = (int)nnzU;
    PointerData *h_csrRowPtrU_pointerData = initPointerData(env, h_csrRowPtrU);
    if (h_csrRowPtrU_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrRowPtrU_native = (int*)h_csrRowPtrU_pointerData->getPointer(env);
    PointerData *h_csrColIndU_pointerData = initPointerData(env, h_csrColIndU);
    if (h_csrColIndU_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrColIndU_native = (int*)h_csrColIndU_pointerData->getPointer(env);
    PointerData *h_csrValU_pointerData = initPointerData(env, h_csrValU);
    if (h_csrValU_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_csrValU_native = (double*)h_csrValU_pointerData->getPointer(env);
    PointerData *h_P_pointerData = initPointerData(env, h_P);
    if (h_P_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_P_native = (int*)h_P_pointerData->getPointer(env);
    PointerData *h_Q_pointerData = initPointerData(env, h_Q);
    if (h_Q_pointerData == NULL)
    {
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    h_Q_native = (int*)h_Q_pointerData->getPointer(env);
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfBatchSetupHost(batchSize_native, n_native, nnzA_native, h_csrRowPtrA_native, h_csrColIndA_native, h_csrValA_array_native, nnzL_native, h_csrRowPtrL_native, h_csrColIndL_native, h_csrValL_native, nnzU_native, h_csrRowPtrU_native, h_csrColIndU_native, h_csrValU_native, h_P_native, h_Q_native, handle_native);

    // Write back native variable values
    // batchSize is primitive
    // n is primitive
    // nnzA is primitive
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrRowPtrA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrRowPtrA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrColIndA))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrColIndA_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // h_csrValA_array is a native pointer
    // nnzL is primitive
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrRowPtrL))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrRowPtrL_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrColIndL))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrColIndL_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrValL))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrValL_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // nnzU is primitive
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrRowPtrU))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrRowPtrU_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrColIndU))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrColIndU_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_csrValU))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_csrValU_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_P))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_P_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // If the PointerData is not a backed by native memory, then this call has to block
    if (!isPointerBackedByNativeMemory(env, h_Q))
    {
        cudaDeviceSynchronize();
    }
    if (!releasePointerData(env, h_Q_pointerData, 0)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // handle is a native pointer object

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF-batch update the matrix values (assuming the reordering, pivoting
and consequently the sparsity pattern of L and U did not change),
and zero out the remaining values. */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfBatchResetValuesNative(JNIEnv *env, jclass cls, jint batchSize, jint n, jint nnzA, jobject csrRowPtrA, jobject csrColIndA, jobject csrValA_array, jobject P, jobject Q, jobject handle)
{
    // Null-checks for non-primitive arguments
    // batchSize is primitive
    // n is primitive
    // nnzA is primitive
    if (csrRowPtrA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrRowPtrA' is null for cusolverRfBatchResetValues");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrColIndA == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrColIndA' is null for cusolverRfBatchResetValues");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (csrValA_array == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'csrValA_array' is null for cusolverRfBatchResetValues");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (P == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'P' is null for cusolverRfBatchResetValues");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Q == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Q' is null for cusolverRfBatchResetValues");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfBatchResetValues");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfBatchResetValues(batchSize=%d, n=%d, nnzA=%d, csrRowPtrA=%p, csrColIndA=%p, csrValA_array=%p, P=%p, Q=%p, handle=%p)\n",
        batchSize, n, nnzA, csrRowPtrA, csrColIndA, csrValA_array, P, Q, handle);

    // Native variable declarations
    int batchSize_native = 0;
    int n_native = 0;
    int nnzA_native = 0;
    int* csrRowPtrA_native;
    int* csrColIndA_native;
    double** csrValA_array_native = NULL;
    int* P_native;
    int* Q_native;
    cusolverRfHandle_t handle_native;

    // Obtain native variable values
    batchSize_native = (int)batchSize;
    n_native = (int)n;
    nnzA_native = (int)nnzA;
    csrRowPtrA_native = (int*)getPointer(env, csrRowPtrA);
    csrColIndA_native = (int*)getPointer(env, csrColIndA);
    csrValA_array_native = (double**)getPointer(env, csrValA_array);
    P_native = (int*)getPointer(env, P);
    Q_native = (int*)getPointer(env, Q);
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfBatchResetValues(batchSize_native, n_native, nnzA_native, csrRowPtrA_native, csrColIndA_native, csrValA_array_native, P_native, Q_native, handle_native);

    // Write back native variable values
    // batchSize is primitive
    // n is primitive
    // nnzA is primitive
    // csrRowPtrA is a native pointer
    // csrColIndA is a native pointer
    // csrValA_array is a native pointer
    // P is a native pointer
    // Q is a native pointer
    // handle is a native pointer object

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF-batch analysis (for parallelism) */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfBatchAnalyzeNative(JNIEnv *env, jclass cls, jobject handle)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfBatchAnalyze");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfBatchAnalyze(handle=%p)\n",
        handle);

    // Native variable declarations
    cusolverRfHandle_t handle_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfBatchAnalyze(handle_native);

    // Write back native variable values
    // handle is a native pointer object

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF-batch re-factorization (for parallelism) */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfBatchRefactorNative(JNIEnv *env, jclass cls, jobject handle)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfBatchRefactor");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfBatchRefactor(handle=%p)\n",
        handle);

    // Native variable declarations
    cusolverRfHandle_t handle_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfBatchRefactor(handle_native);

    // Write back native variable values
    // handle is a native pointer object

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF-batch (forward and backward triangular) solves */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfBatchSolveNative(JNIEnv *env, jclass cls, jobject handle, jobject P, jobject Q, jint nrhs, jobject Temp, jint ldt, jobject XF_array, jint ldxf)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfBatchSolve");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (P == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'P' is null for cusolverRfBatchSolve");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (Q == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Q' is null for cusolverRfBatchSolve");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // nrhs is primitive
    if (Temp == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'Temp' is null for cusolverRfBatchSolve");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldt is primitive
    if (XF_array == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'XF_array' is null for cusolverRfBatchSolve");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // ldxf is primitive

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfBatchSolve(handle=%p, P=%p, Q=%p, nrhs=%d, Temp=%p, ldt=%d, XF_array=%p, ldxf=%d)\n",
        handle, P, Q, nrhs, Temp, ldt, XF_array, ldxf);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    int* P_native;
    int* Q_native;
    int nrhs_native = 0;
    double* Temp_native;
    int ldt_native = 0;
    double** XF_array_native = NULL;
    int ldxf_native = 0;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    P_native = (int*)getPointer(env, P);
    Q_native = (int*)getPointer(env, Q);
    nrhs_native = (int)nrhs;
    Temp_native = (double*)getPointer(env, Temp);
    ldt_native = (int)ldt;
    XF_array_native = (double**)getPointer(env, XF_array);
    ldxf_native = (int)ldxf;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfBatchSolve(handle_native, P_native, Q_native, nrhs_native, Temp_native, ldt_native, XF_array_native, ldxf_native);

    // Write back native variable values
    // handle is a native pointer object
    // P is a native pointer
    // Q is a native pointer
    // nrhs is primitive
    // Temp is a native pointer
    // ldt is primitive
    // XF_array is a native pointer
    // ldxf is primitive

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}

/** CUSOLVERRF-batch obtain the position of zero pivot */
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverRf_cusolverRfBatchZeroPivotNative(JNIEnv *env, jclass cls, jobject handle, jobject position)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverRfBatchZeroPivot");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    if (position == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'position' is null for cusolverRfBatchZeroPivot");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverRfBatchZeroPivot(handle=%p, position=%p)\n",
        handle, position);

    // Native variable declarations
    cusolverRfHandle_t handle_native;
    int* position_native;

    // Obtain native variable values
    handle_native = (cusolverRfHandle_t)getNativePointerValue(env, handle);
    position_native = (int*)getPointer(env, position);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverRfBatchZeroPivot(handle_native, position_native);

    // Write back native variable values
    // handle is a native pointer object
    // position is a native pointer

    // Return the result
    jint jniResult;
    jniResult = (jint)jniResult_native;
    return jniResult;
}



