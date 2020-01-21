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

#include "JCusolverMg.hpp"
#include "JCusolver_common.hpp"
#include <iostream>
#include <string>
#include <cuda_runtime_api.h>



//=== Auto-generated part: ===================================================

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgCreateNative(JNIEnv *env, jclass cls, jobject handle)
{
    // Null-checks for non-primitive arguments
    if (handle == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'handle' is null for cusolverMgCreate");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverMgCreate(handle=%p)\n",
        handle);

    // Native variable declarations
    cusolverMgHandle_t handle_native;

    // Obtain native variable values
    // handle is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverMgCreate(&handle_native);

    // Write back native variable values
    setNativePointerValue(env, handle, (jlong)handle_native);

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgDestroyNative(JNIEnv *env, jclass cls, jobject handle)
{
    // Null-checks for non-primitive arguments
    // handle is checked by the library

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverMgDestroy(handle=%p)\n",
        handle);

    // Native variable declarations
    cusolverMgHandle_t handle_native;

    // Obtain native variable values
    handle_native = (cusolverMgHandle_t)getNativePointerValue(env, handle);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverMgDestroy(handle_native);

    // Write back native variable values
    // handle is read-only

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgDeviceSelectNative(JNIEnv *env, jclass cls, jobject handle, jint nbDevices, jintArray deviceId)
{
    // Null-checks for non-primitive arguments
    // handle is checked by the library
    // nbDevices is primitive
    // deviceId is checked by the library

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverMgDeviceSelect(handle=%p, nbDevices=%d, deviceId=%p)\n",
        handle, nbDevices, deviceId);

    // Native variable declarations
    cusolverMgHandle_t handle_native;
    int nbDevices_native = 0;
    int * deviceId_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverMgHandle_t)getNativePointerValue(env, handle);
    nbDevices_native = (int)nbDevices;
    if (!initNative(env, deviceId, deviceId_native, true)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverMgDeviceSelect(handle_native, nbDevices_native, deviceId_native);

    // Write back native variable values
    // handle is read-only
    // nbDevices is primitive
    if (!releaseNative(env, deviceId_native, deviceId, true)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* Allocates resources related to the shared memory device grid..
* @param grid (out) the opaque data strcuture that holds the grid
* @param numRowDevices (in) number of devices in the row
* @param numColDevices (in) number of devices in the column
* @param deviceId (in) This array of size height * width stores the
*            device-ids of the 2D grid; each entry must correspond to a valid gpu or to -1 (denoting CPU).
* @param mapping (in) whether the 2D grid is in row/column major
* @return the status code
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgCreateDeviceGridNative(JNIEnv *env, jclass cls, jobject grid, jint numRowDevices, jint numColDevices, jintArray deviceId, jint mapping)
{
    // Null-checks for non-primitive arguments
    if (grid == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'grid' is null for cusolverMgCreateDeviceGrid");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // numRowDevices is primitive
    // numColDevices is primitive
    // deviceId is checked by the library
    // mapping is primitive

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverMgCreateDeviceGrid(grid=%p, numRowDevices=%d, numColDevices=%d, deviceId=%p, mapping=%d)\n",
        grid, numRowDevices, numColDevices, deviceId, mapping);

    // Native variable declarations
    cudaLibMgGrid_t grid_native;
    int32_t numRowDevices_native = 0;
    int32_t numColDevices_native = 0;
    int32_t * deviceId_native = NULL;
    cusolverMgGridMapping_t mapping_native;

    // Obtain native variable values
    // grid is write-only
    numRowDevices_native = (int32_t)numRowDevices;
    numColDevices_native = (int32_t)numColDevices;
    if (!initNative(env, deviceId, deviceId_native, true)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    mapping_native = (cusolverMgGridMapping_t)mapping;

    // Native function call
    cusolverStatus_t jniResult_native = cusolverMgCreateDeviceGrid(&grid_native, numRowDevices_native, numColDevices_native, deviceId_native, mapping_native);

    // Write back native variable values
    setNativePointerValue(env, grid, (jlong)grid_native);
    // numRowDevices is primitive
    // numColDevices is primitive
    if (!releaseNative(env, deviceId_native, deviceId, true)) return JCUSOLVER_STATUS_INTERNAL_ERROR;
    // mapping is primitive

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* Releases the allocated resources related to the distributed grid..
* @param grid (in) the opaque data strcuture that holds the distributed grid
* @return the status code
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgDestroyGridNative(JNIEnv *env, jclass cls, jobject grid)
{
    // Null-checks for non-primitive arguments
    // grid is checked by the library

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverMgDestroyGrid(grid=%p)\n",
        grid);

    // Native variable declarations
    cudaLibMgGrid_t grid_native;

    // Obtain native variable values
    grid_native = (cudaLibMgGrid_t)getNativePointerValue(env, grid);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverMgDestroyGrid(grid_native);

    // Write back native variable values
    // grid is read-only

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* Allocates resources related to the distributed matrix descriptor..
* @param desc (out) the opaque data strcuture that holds the descriptor
* @param numRows (in) number of total rows
* @param numCols (in) number of total columns
* @param rowBlockSize (in) row block size
* @param colBlockSize (in) column block size
* @param dataType (in) the data type of each element in cudaDataType_t
* @param grid (in) the opaque data structure of the distributed grid
* @return the status code
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgCreateMatrixDescNative(JNIEnv *env, jclass cls, jobject desc, jlong numRows, jlong numCols, jlong rowBlockSize, jlong colBlockSize, jint dataType, jobject grid)
{
    // Null-checks for non-primitive arguments
    if (desc == NULL)
    {
        ThrowByName(env, "java/lang/NullPointerException", "Parameter 'desc' is null for cusolverMgCreateMatrixDesc");
        return JCUSOLVER_STATUS_INTERNAL_ERROR;
    }
    // numRows is primitive
    // numCols is primitive
    // rowBlockSize is primitive
    // colBlockSize is primitive
    // dataType is primitive
    // grid is checked by the library

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverMgCreateMatrixDesc(desc=%p, numRows=%ld, numCols=%ld, rowBlockSize=%ld, colBlockSize=%ld, dataType=%d, grid=%p)\n",
        desc, numRows, numCols, rowBlockSize, colBlockSize, dataType, grid);

    // Native variable declarations
    cudaLibMgMatrixDesc_t desc_native;
    int64_t numRows_native = 0;
    int64_t numCols_native = 0;
    int64_t rowBlockSize_native = 0;
    int64_t colBlockSize_native = 0;
    cudaDataType_t dataType_native;
    cudaLibMgGrid_t grid_native;

    // Obtain native variable values
    // desc is write-only
    numRows_native = (int64_t)numRows;
    numCols_native = (int64_t)numCols;
    rowBlockSize_native = (int64_t)rowBlockSize;
    colBlockSize_native = (int64_t)colBlockSize;
    dataType_native = (cudaDataType_t)dataType;
    grid_native = (cudaLibMgGrid_t)getNativePointerValue(env, grid);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverMgCreateMatrixDesc(&desc_native, numRows_native, numCols_native, rowBlockSize_native, colBlockSize_native, dataType_native, grid_native);

    // Write back native variable values
    setNativePointerValue(env, desc, (jlong)desc_native);
    // numRows is primitive
    // numCols is primitive
    // rowBlockSize is primitive
    // colBlockSize is primitive
    // dataType is primitive
    // grid is read-only

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

/**
* <pre>
* Releases the allocated resources related to the distributed matrix descriptor..
* @param desc (in) the opaque data strcuture that holds the descriptor
* @return the status code
* </pre>
*/
JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgDestroyMatrixDescNative(JNIEnv *env, jclass cls, jobject desc)
{
    // Null-checks for non-primitive arguments
    // desc is checked by the library

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverMgDestroyMatrixDesc(desc=%p)\n",
        desc);

    // Native variable declarations
    cudaLibMgMatrixDesc_t desc_native;

    // Obtain native variable values
    desc_native = (cudaLibMgMatrixDesc_t)getNativePointerValue(env, desc);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverMgDestroyMatrixDesc(desc_native);

    // Write back native variable values
    // desc is read-only

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgSyevd_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint jobz, jint uplo, jint N, jobjectArray array_d_A, jint IA, jint JA, jobject descrA, jobject W, jint dataTypeW, jint computeType, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    // handle is checked by the library
    // jobz is primitive
    // uplo is primitive
    // N is primitive
    // array_d_A is checked by the library
    // IA is primitive
    // JA is primitive
    // descrA is checked by the library
    // W is checked by the library
    // dataTypeW is primitive
    // computeType is primitive
    // lwork is checked by the library

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverMgSyevd_bufferSize(handle=%p, jobz=%d, uplo=%d, N=%d, array_d_A=%p, IA=%d, JA=%d, descrA=%p, W=%p, dataTypeW=%d, computeType=%d, lwork=%p)\n",
        handle, jobz, uplo, N, array_d_A, IA, JA, descrA, W, dataTypeW, computeType, lwork);

    // Native variable declarations
    cusolverMgHandle_t handle_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int N_native = 0;
    void** array_d_A_native = NULL;
    int IA_native = 0;
    int JA_native = 0;
    cudaLibMgMatrixDesc_t descrA_native;
    void * W_native = NULL;
    cudaDataType_t dataTypeW_native;
    cudaDataType_t computeType_native;
    int64_t lwork_native;

    // Obtain native variable values
    handle_native = (cusolverMgHandle_t)getNativePointerValue(env, handle);
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    N_native = (int)N;
    array_d_A_native = (void **)getPointer(env, array_d_A);
    IA_native = (int)IA;
    JA_native = (int)JA;
    descrA_native = (cudaLibMgMatrixDesc_t)getNativePointerValue(env, descrA);
    W_native = (void *)getPointer(env, W);
    dataTypeW_native = (cudaDataType_t)dataTypeW;
    computeType_native = (cudaDataType_t)computeType;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverMgSyevd_bufferSize(handle_native, jobz_native, uplo_native, N_native, array_d_A_native, IA_native, JA_native, descrA_native, W_native, dataTypeW_native, computeType_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // jobz is primitive
    // uplo is primitive
    // N is primitive
    // array_d_A is a native pointer
    // IA is primitive
    // JA is primitive
    // descrA is read-only
    // W is a native pointer
    // dataTypeW is primitive
    // computeType is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgSyevdNative(JNIEnv *env, jclass cls, jobject handle, jint jobz, jint uplo, jint N, jobjectArray array_d_A, jint IA, jint JA, jobject descrA, jobject W, jint dataTypeW, jint computeType, jobjectArray array_d_work, jlong lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    // handle is checked by the library
    // jobz is primitive
    // uplo is primitive
    // N is primitive
    // array_d_A is checked by the library
    // IA is primitive
    // JA is primitive
    // descrA is checked by the library
    // W is checked by the library
    // dataTypeW is primitive
    // computeType is primitive
    // array_d_work is checked by the library
    // lwork is primitive
    // info is checked by the library

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverMgSyevd(handle=%p, jobz=%d, uplo=%d, N=%d, array_d_A=%p, IA=%d, JA=%d, descrA=%p, W=%p, dataTypeW=%d, computeType=%d, array_d_work=%p, lwork=%ld, info=%p)\n",
        handle, jobz, uplo, N, array_d_A, IA, JA, descrA, W, dataTypeW, computeType, array_d_work, lwork, info);

    // Native variable declarations
    cusolverMgHandle_t handle_native;
    cusolverEigMode_t jobz_native;
    cublasFillMode_t uplo_native;
    int N_native = 0;
    void** array_d_A_native = NULL;
    int IA_native = 0;
    int JA_native = 0;
    cudaLibMgMatrixDesc_t descrA_native;
    void * W_native = NULL;
    cudaDataType_t dataTypeW_native;
    cudaDataType_t computeType_native;
    void** array_d_work_native = NULL;
    int64_t lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverMgHandle_t)getNativePointerValue(env, handle);
    jobz_native = (cusolverEigMode_t)jobz;
    uplo_native = (cublasFillMode_t)uplo;
    N_native = (int)N;
    array_d_A_native = (void **)getPointer(env, array_d_A);
    IA_native = (int)IA;
    JA_native = (int)JA;
    descrA_native = (cudaLibMgMatrixDesc_t)getNativePointerValue(env, descrA);
    W_native = (void *)getPointer(env, W);
    dataTypeW_native = (cudaDataType_t)dataTypeW;
    computeType_native = (cudaDataType_t)computeType;
    array_d_work_native = (void **)getPointer(env, array_d_work);
    lwork_native = (int64_t)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverMgSyevd(handle_native, jobz_native, uplo_native, N_native, array_d_A_native, IA_native, JA_native, descrA_native, W_native, dataTypeW_native, computeType_native, array_d_work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // jobz is primitive
    // uplo is primitive
    // N is primitive
    // array_d_A is a native pointer
    // IA is primitive
    // JA is primitive
    // descrA is read-only
    // W is a native pointer
    // dataTypeW is primitive
    // computeType is primitive
    // array_d_work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgGetrf_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint M, jint N, jobjectArray array_d_A, jint IA, jint JA, jobject descrA, jobjectArray array_d_IPIV, jint computeType, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    // handle is checked by the library
    // M is primitive
    // N is primitive
    // array_d_A is checked by the library
    // IA is primitive
    // JA is primitive
    // descrA is checked by the library
    // array_d_IPIV is checked by the library
    // computeType is primitive
    // lwork is checked by the library

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverMgGetrf_bufferSize(handle=%p, M=%d, N=%d, array_d_A=%p, IA=%d, JA=%d, descrA=%p, array_d_IPIV=%p, computeType=%d, lwork=%p)\n",
        handle, M, N, array_d_A, IA, JA, descrA, array_d_IPIV, computeType, lwork);

    // Native variable declarations
    cusolverMgHandle_t handle_native;
    int M_native = 0;
    int N_native = 0;
    void** array_d_A_native = NULL;
    int IA_native = 0;
    int JA_native = 0;
    cudaLibMgMatrixDesc_t descrA_native;
    int** array_d_IPIV_native = NULL;
    cudaDataType_t computeType_native;
    int64_t lwork_native;

    // Obtain native variable values
    handle_native = (cusolverMgHandle_t)getNativePointerValue(env, handle);
    M_native = (int)M;
    N_native = (int)N;
    array_d_A_native = (void **)getPointer(env, array_d_A);
    IA_native = (int)IA;
    JA_native = (int)JA;
    descrA_native = (cudaLibMgMatrixDesc_t)getNativePointerValue(env, descrA);
    array_d_IPIV_native = (int **)getPointer(env, array_d_IPIV);
    computeType_native = (cudaDataType_t)computeType;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverMgGetrf_bufferSize(handle_native, M_native, N_native, array_d_A_native, IA_native, JA_native, descrA_native, array_d_IPIV_native, computeType_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // M is primitive
    // N is primitive
    // array_d_A is a native pointer
    // IA is primitive
    // JA is primitive
    // descrA is read-only
    // array_d_IPIV is a native pointer
    // computeType is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgGetrfNative(JNIEnv *env, jclass cls, jobject handle, jint M, jint N, jobjectArray array_d_A, jint IA, jint JA, jobject descrA, jobjectArray array_d_IPIV, jint computeType, jobjectArray array_d_work, jlong lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    // handle is checked by the library
    // M is primitive
    // N is primitive
    // array_d_A is checked by the library
    // IA is primitive
    // JA is primitive
    // descrA is checked by the library
    // array_d_IPIV is checked by the library
    // computeType is primitive
    // array_d_work is checked by the library
    // lwork is primitive
    // info is checked by the library

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverMgGetrf(handle=%p, M=%d, N=%d, array_d_A=%p, IA=%d, JA=%d, descrA=%p, array_d_IPIV=%p, computeType=%d, array_d_work=%p, lwork=%ld, info=%p)\n",
        handle, M, N, array_d_A, IA, JA, descrA, array_d_IPIV, computeType, array_d_work, lwork, info);

    // Native variable declarations
    cusolverMgHandle_t handle_native;
    int M_native = 0;
    int N_native = 0;
    void** array_d_A_native = NULL;
    int IA_native = 0;
    int JA_native = 0;
    cudaLibMgMatrixDesc_t descrA_native;
    int** array_d_IPIV_native = NULL;
    cudaDataType_t computeType_native;
    void** array_d_work_native = NULL;
    int64_t lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverMgHandle_t)getNativePointerValue(env, handle);
    M_native = (int)M;
    N_native = (int)N;
    array_d_A_native = (void **)getPointer(env, array_d_A);
    IA_native = (int)IA;
    JA_native = (int)JA;
    descrA_native = (cudaLibMgMatrixDesc_t)getNativePointerValue(env, descrA);
    array_d_IPIV_native = (int **)getPointer(env, array_d_IPIV);
    computeType_native = (cudaDataType_t)computeType;
    array_d_work_native = (void **)getPointer(env, array_d_work);
    lwork_native = (int64_t)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverMgGetrf(handle_native, M_native, N_native, array_d_A_native, IA_native, JA_native, descrA_native, array_d_IPIV_native, computeType_native, array_d_work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // M is primitive
    // N is primitive
    // array_d_A is a native pointer
    // IA is primitive
    // JA is primitive
    // descrA is read-only
    // array_d_IPIV is a native pointer
    // computeType is primitive
    // array_d_work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgGetrs_1bufferSizeNative(JNIEnv *env, jclass cls, jobject handle, jint TRANS, jint N, jint NRHS, jobjectArray array_d_A, jint IA, jint JA, jobject descrA, jobjectArray array_d_IPIV, jobjectArray array_d_B, jint IB, jint JB, jobject descrB, jint computeType, jintArray lwork)
{
    // Null-checks for non-primitive arguments
    // handle is checked by the library
    // TRANS is primitive
    // N is primitive
    // NRHS is primitive
    // array_d_A is checked by the library
    // IA is primitive
    // JA is primitive
    // descrA is checked by the library
    // array_d_IPIV is checked by the library
    // array_d_B is checked by the library
    // IB is primitive
    // JB is primitive
    // descrB is checked by the library
    // computeType is primitive
    // lwork is checked by the library

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverMgGetrs_bufferSize(handle=%p, TRANS=%d, N=%d, NRHS=%d, array_d_A=%p, IA=%d, JA=%d, descrA=%p, array_d_IPIV=%p, array_d_B=%p, IB=%d, JB=%d, descrB=%p, computeType=%d, lwork=%p)\n",
        handle, TRANS, N, NRHS, array_d_A, IA, JA, descrA, array_d_IPIV, array_d_B, IB, JB, descrB, computeType, lwork);

    // Native variable declarations
    cusolverMgHandle_t handle_native;
    cublasOperation_t TRANS_native;
    int N_native = 0;
    int NRHS_native = 0;
    void** array_d_A_native = NULL;
    int IA_native = 0;
    int JA_native = 0;
    cudaLibMgMatrixDesc_t descrA_native;
    int** array_d_IPIV_native = NULL;
    void** array_d_B_native = NULL;
    int IB_native = 0;
    int JB_native = 0;
    cudaLibMgMatrixDesc_t descrB_native;
    cudaDataType_t computeType_native;
    int64_t lwork_native;

    // Obtain native variable values
    handle_native = (cusolverMgHandle_t)getNativePointerValue(env, handle);
    TRANS_native = (cublasOperation_t)TRANS;
    N_native = (int)N;
    NRHS_native = (int)NRHS;
    array_d_A_native = (void **)getPointer(env, array_d_A);
    IA_native = (int)IA;
    JA_native = (int)JA;
    descrA_native = (cudaLibMgMatrixDesc_t)getNativePointerValue(env, descrA);
    array_d_IPIV_native = (int **)getPointer(env, array_d_IPIV);
    array_d_B_native = (void **)getPointer(env, array_d_B);
    IB_native = (int)IB;
    JB_native = (int)JB;
    descrB_native = (cudaLibMgMatrixDesc_t)getNativePointerValue(env, descrB);
    computeType_native = (cudaDataType_t)computeType;
    // lwork is write-only

    // Native function call
    cusolverStatus_t jniResult_native = cusolverMgGetrs_bufferSize(handle_native, TRANS_native, N_native, NRHS_native, array_d_A_native, IA_native, JA_native, descrA_native, array_d_IPIV_native, array_d_B_native, IB_native, JB_native, descrB_native, computeType_native, &lwork_native);

    // Write back native variable values
    // handle is read-only
    // TRANS is primitive
    // N is primitive
    // NRHS is primitive
    // array_d_A is a native pointer
    // IA is primitive
    // JA is primitive
    // descrA is read-only
    // array_d_IPIV is a native pointer
    // array_d_B is a native pointer
    // IB is primitive
    // JB is primitive
    // descrB is read-only
    // computeType is primitive
    if (!set(env, lwork, 0, (jint)lwork_native)) return JCUSOLVER_STATUS_INTERNAL_ERROR;

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

JNIEXPORT jint JNICALL Java_jcuda_jcusolver_JCusolverMg_cusolverMgGetrsNative(JNIEnv *env, jclass cls, jobject handle, jint TRANS, jint N, jint NRHS, jobjectArray array_d_A, jint IA, jint JA, jobject descrA, jobjectArray array_d_IPIV, jobjectArray array_d_B, jint IB, jint JB, jobject descrB, jint computeType, jobjectArray array_d_work, jlong lwork, jobject info)
{
    // Null-checks for non-primitive arguments
    // handle is checked by the library
    // TRANS is primitive
    // N is primitive
    // NRHS is primitive
    // array_d_A is checked by the library
    // IA is primitive
    // JA is primitive
    // descrA is checked by the library
    // array_d_IPIV is checked by the library
    // array_d_B is checked by the library
    // IB is primitive
    // JB is primitive
    // descrB is checked by the library
    // computeType is primitive
    // array_d_work is checked by the library
    // lwork is primitive
    // info is checked by the library

    // Log message
    Logger::log(LOG_TRACE, "Executing cusolverMgGetrs(handle=%p, TRANS=%d, N=%d, NRHS=%d, array_d_A=%p, IA=%d, JA=%d, descrA=%p, array_d_IPIV=%p, array_d_B=%p, IB=%d, JB=%d, descrB=%p, computeType=%d, array_d_work=%p, lwork=%ld, info=%p)\n",
        handle, TRANS, N, NRHS, array_d_A, IA, JA, descrA, array_d_IPIV, array_d_B, IB, JB, descrB, computeType, array_d_work, lwork, info);

    // Native variable declarations
    cusolverMgHandle_t handle_native;
    cublasOperation_t TRANS_native;
    int N_native = 0;
    int NRHS_native = 0;
    void** array_d_A_native = NULL;
    int IA_native = 0;
    int JA_native = 0;
    cudaLibMgMatrixDesc_t descrA_native;
    int** array_d_IPIV_native = NULL;
    void** array_d_B_native = NULL;
    int IB_native = 0;
    int JB_native = 0;
    cudaLibMgMatrixDesc_t descrB_native;
    cudaDataType_t computeType_native;
    void** array_d_work_native = NULL;
    int64_t lwork_native = 0;
    int * info_native = NULL;

    // Obtain native variable values
    handle_native = (cusolverMgHandle_t)getNativePointerValue(env, handle);
    TRANS_native = (cublasOperation_t)TRANS;
    N_native = (int)N;
    NRHS_native = (int)NRHS;
    array_d_A_native = (void **)getPointer(env, array_d_A);
    IA_native = (int)IA;
    JA_native = (int)JA;
    descrA_native = (cudaLibMgMatrixDesc_t)getNativePointerValue(env, descrA);
    array_d_IPIV_native = (int **)getPointer(env, array_d_IPIV);
    array_d_B_native = (void **)getPointer(env, array_d_B);
    IB_native = (int)IB;
    JB_native = (int)JB;
    descrB_native = (cudaLibMgMatrixDesc_t)getNativePointerValue(env, descrB);
    computeType_native = (cudaDataType_t)computeType;
    array_d_work_native = (void **)getPointer(env, array_d_work);
    lwork_native = (int64_t)lwork;
    info_native = (int *)getPointer(env, info);

    // Native function call
    cusolverStatus_t jniResult_native = cusolverMgGetrs(handle_native, TRANS_native, N_native, NRHS_native, array_d_A_native, IA_native, JA_native, descrA_native, array_d_IPIV_native, array_d_B_native, IB_native, JB_native, descrB_native, computeType_native, array_d_work_native, lwork_native, info_native);

    // Write back native variable values
    // handle is read-only
    // TRANS is primitive
    // N is primitive
    // NRHS is primitive
    // array_d_A is a native pointer
    // IA is primitive
    // JA is primitive
    // descrA is read-only
    // array_d_IPIV is a native pointer
    // array_d_B is a native pointer
    // IB is primitive
    // JB is primitive
    // descrB is read-only
    // computeType is primitive
    // array_d_work is a native pointer
    // lwork is primitive
    // info is a native pointer

    // Return the result
    jint jniResult = (jint)jniResult_native;
    return jniResult;
}

