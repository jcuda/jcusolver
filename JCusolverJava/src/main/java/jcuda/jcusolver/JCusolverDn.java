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
package jcuda.jcusolver;

import jcuda.*;
import jcuda.runtime.cudaStream_t;

/**
 * Java bindings for CUSOLVER, the NVIDIA CUDA solver library. <br />
 * <br />
 * The documentation is taken from the CUSOLVER header files.
 */
public class JCusolverDn
{
    /* Private constructor to prevent instantiation */
    private JCusolverDn()
    {
    }
    
    static
    {
        JCusolver.initialize();
    }
    
    /**
     * Delegates to {@link JCusolver#checkResult(int)}
     * 
     * @param result The result to check
     * @return The result that was given as the parameter
     * @throws CudaException As described in {@link JCusolver#checkResult(int)}
     */
    private static int checkResult(int result)
    {
        return JCusolver.checkResult(result);
    }
    
    //=== Auto-generated part: ===============================================
    
    public static int cusolverDnCreate(
        cusolverDnHandle handle)
    {
        return checkResult(cusolverDnCreateNative(handle));
    }
    private static native int cusolverDnCreateNative(
        cusolverDnHandle handle);


    public static int cusolverDnDestroy(
        cusolverDnHandle handle)
    {
        return checkResult(cusolverDnDestroyNative(handle));
    }
    private static native int cusolverDnDestroyNative(
        cusolverDnHandle handle);


    public static int cusolverDnSetStream(
        cusolverDnHandle handle, 
        cudaStream_t streamId)
    {
        return checkResult(cusolverDnSetStreamNative(handle, streamId));
    }
    private static native int cusolverDnSetStreamNative(
        cusolverDnHandle handle, 
        cudaStream_t streamId);


    public static int cusolverDnGetStream(
        cusolverDnHandle handle, 
        cudaStream_t streamId)
    {
        return checkResult(cusolverDnGetStreamNative(handle, streamId));
    }
    private static native int cusolverDnGetStreamNative(
        cusolverDnHandle handle, 
        cudaStream_t streamId);


    /** Cholesky factorization and its solver */
    public static int cusolverDnSpotrf_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork)
    {
        return checkResult(cusolverDnSpotrf_bufferSizeNative(handle, uplo, n, A, lda, Lwork));
    }
    private static native int cusolverDnSpotrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork);


    public static int cusolverDnDpotrf_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork)
    {
        return checkResult(cusolverDnDpotrf_bufferSizeNative(handle, uplo, n, A, lda, Lwork));
    }
    private static native int cusolverDnDpotrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork);


    public static int cusolverDnCpotrf_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork)
    {
        return checkResult(cusolverDnCpotrf_bufferSizeNative(handle, uplo, n, A, lda, Lwork));
    }
    private static native int cusolverDnCpotrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork);


    public static int cusolverDnZpotrf_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork)
    {
        return checkResult(cusolverDnZpotrf_bufferSizeNative(handle, uplo, n, A, lda, Lwork));
    }
    private static native int cusolverDnZpotrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork);


    public static int cusolverDnSpotrf(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnSpotrfNative(handle, uplo, n, A, lda, Workspace, Lwork, devInfo));
    }
    private static native int cusolverDnSpotrfNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo);


    public static int cusolverDnDpotrf(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnDpotrfNative(handle, uplo, n, A, lda, Workspace, Lwork, devInfo));
    }
    private static native int cusolverDnDpotrfNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo);


    public static int cusolverDnCpotrf(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnCpotrfNative(handle, uplo, n, A, lda, Workspace, Lwork, devInfo));
    }
    private static native int cusolverDnCpotrfNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo);


    public static int cusolverDnZpotrf(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnZpotrfNative(handle, uplo, n, A, lda, Workspace, Lwork, devInfo));
    }
    private static native int cusolverDnZpotrfNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo);


    public static int cusolverDnSpotrs(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnSpotrsNative(handle, uplo, n, nrhs, A, lda, B, ldb, devInfo));
    }
    private static native int cusolverDnSpotrsNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer devInfo);


    public static int cusolverDnDpotrs(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnDpotrsNative(handle, uplo, n, nrhs, A, lda, B, ldb, devInfo));
    }
    private static native int cusolverDnDpotrsNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer devInfo);


    public static int cusolverDnCpotrs(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnCpotrsNative(handle, uplo, n, nrhs, A, lda, B, ldb, devInfo));
    }
    private static native int cusolverDnCpotrsNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer devInfo);


    public static int cusolverDnZpotrs(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnZpotrsNative(handle, uplo, n, nrhs, A, lda, B, ldb, devInfo));
    }
    private static native int cusolverDnZpotrsNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer devInfo);


    /** batched Cholesky factorization and its solver */
    public static int cusolverDnSpotrfBatched(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer Aarray, 
        int lda, 
        Pointer infoArray, 
        int batchSize)
    {
        return checkResult(cusolverDnSpotrfBatchedNative(handle, uplo, n, Aarray, lda, infoArray, batchSize));
    }
    private static native int cusolverDnSpotrfBatchedNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer Aarray, 
        int lda, 
        Pointer infoArray, 
        int batchSize);


    public static int cusolverDnDpotrfBatched(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer Aarray, 
        int lda, 
        Pointer infoArray, 
        int batchSize)
    {
        return checkResult(cusolverDnDpotrfBatchedNative(handle, uplo, n, Aarray, lda, infoArray, batchSize));
    }
    private static native int cusolverDnDpotrfBatchedNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer Aarray, 
        int lda, 
        Pointer infoArray, 
        int batchSize);


    public static int cusolverDnCpotrfBatched(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer Aarray, 
        int lda, 
        Pointer infoArray, 
        int batchSize)
    {
        return checkResult(cusolverDnCpotrfBatchedNative(handle, uplo, n, Aarray, lda, infoArray, batchSize));
    }
    private static native int cusolverDnCpotrfBatchedNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer Aarray, 
        int lda, 
        Pointer infoArray, 
        int batchSize);


    public static int cusolverDnZpotrfBatched(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer Aarray, 
        int lda, 
        Pointer infoArray, 
        int batchSize)
    {
        return checkResult(cusolverDnZpotrfBatchedNative(handle, uplo, n, Aarray, lda, infoArray, batchSize));
    }
    private static native int cusolverDnZpotrfBatchedNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer Aarray, 
        int lda, 
        Pointer infoArray, 
        int batchSize);


    public static int cusolverDnSpotrsBatched(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, /** only support rhs = 1*/
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer d_info, 
        int batchSize)
    {
        return checkResult(cusolverDnSpotrsBatchedNative(handle, uplo, n, nrhs, A, lda, B, ldb, d_info, batchSize));
    }
    private static native int cusolverDnSpotrsBatchedNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, /** only support rhs = 1*/
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer d_info, 
        int batchSize);


    public static int cusolverDnDpotrsBatched(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, /** only support rhs = 1*/
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer d_info, 
        int batchSize)
    {
        return checkResult(cusolverDnDpotrsBatchedNative(handle, uplo, n, nrhs, A, lda, B, ldb, d_info, batchSize));
    }
    private static native int cusolverDnDpotrsBatchedNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, /** only support rhs = 1*/
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer d_info, 
        int batchSize);


    public static int cusolverDnCpotrsBatched(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, /** only support rhs = 1*/
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer d_info, 
        int batchSize)
    {
        return checkResult(cusolverDnCpotrsBatchedNative(handle, uplo, n, nrhs, A, lda, B, ldb, d_info, batchSize));
    }
    private static native int cusolverDnCpotrsBatchedNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, /** only support rhs = 1*/
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer d_info, 
        int batchSize);


    public static int cusolverDnZpotrsBatched(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, /** only support rhs = 1*/
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer d_info, 
        int batchSize)
    {
        return checkResult(cusolverDnZpotrsBatchedNative(handle, uplo, n, nrhs, A, lda, B, ldb, d_info, batchSize));
    }
    private static native int cusolverDnZpotrsBatchedNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        int nrhs, /** only support rhs = 1*/
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer d_info, 
        int batchSize);


    /** s.p.d. matrix inversion (POTRI) and auxiliary routines (TRTRI and LAUUM)  */
    public static int cusolverDnSpotri_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnSpotri_bufferSizeNative(handle, uplo, n, A, lda, lwork));
    }
    private static native int cusolverDnSpotri_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnDpotri_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnDpotri_bufferSizeNative(handle, uplo, n, A, lda, lwork));
    }
    private static native int cusolverDnDpotri_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnCpotri_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnCpotri_bufferSizeNative(handle, uplo, n, A, lda, lwork));
    }
    private static native int cusolverDnCpotri_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnZpotri_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnZpotri_bufferSizeNative(handle, uplo, n, A, lda, lwork));
    }
    private static native int cusolverDnZpotri_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnSpotri(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnSpotriNative(handle, uplo, n, A, lda, work, lwork, devInfo));
    }
    private static native int cusolverDnSpotriNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    public static int cusolverDnDpotri(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnDpotriNative(handle, uplo, n, A, lda, work, lwork, devInfo));
    }
    private static native int cusolverDnDpotriNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    public static int cusolverDnCpotri(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnCpotriNative(handle, uplo, n, A, lda, work, lwork, devInfo));
    }
    private static native int cusolverDnCpotriNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    public static int cusolverDnZpotri(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnZpotriNative(handle, uplo, n, A, lda, work, lwork, devInfo));
    }
    private static native int cusolverDnZpotriNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    public static int cusolverDnStrtri_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnStrtri_bufferSizeNative(handle, uplo, diag, n, A, lda, lwork));
    }
    private static native int cusolverDnStrtri_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnDtrtri_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnDtrtri_bufferSizeNative(handle, uplo, diag, n, A, lda, lwork));
    }
    private static native int cusolverDnDtrtri_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnCtrtri_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnCtrtri_bufferSizeNative(handle, uplo, diag, n, A, lda, lwork));
    }
    private static native int cusolverDnCtrtri_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnZtrtri_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnZtrtri_bufferSizeNative(handle, uplo, diag, n, A, lda, lwork));
    }
    private static native int cusolverDnZtrtri_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnStrtri(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnStrtriNative(handle, uplo, diag, n, A, lda, work, lwork, devInfo));
    }
    private static native int cusolverDnStrtriNative(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    public static int cusolverDnDtrtri(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnDtrtriNative(handle, uplo, diag, n, A, lda, work, lwork, devInfo));
    }
    private static native int cusolverDnDtrtriNative(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    public static int cusolverDnCtrtri(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnCtrtriNative(handle, uplo, diag, n, A, lda, work, lwork, devInfo));
    }
    private static native int cusolverDnCtrtriNative(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    public static int cusolverDnZtrtri(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnZtrtriNative(handle, uplo, diag, n, A, lda, work, lwork, devInfo));
    }
    private static native int cusolverDnZtrtriNative(
        cusolverDnHandle handle, 
        int uplo, 
        int diag, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    /** lauum, auxiliar routine for s.p.d matrix inversion */
    public static int cusolverDnSlauum_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnSlauum_bufferSizeNative(handle, uplo, n, A, lda, lwork));
    }
    private static native int cusolverDnSlauum_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnDlauum_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnDlauum_bufferSizeNative(handle, uplo, n, A, lda, lwork));
    }
    private static native int cusolverDnDlauum_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnClauum_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnClauum_bufferSizeNative(handle, uplo, n, A, lda, lwork));
    }
    private static native int cusolverDnClauum_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnZlauum_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnZlauum_bufferSizeNative(handle, uplo, n, A, lda, lwork));
    }
    private static native int cusolverDnZlauum_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnSlauum(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnSlauumNative(handle, uplo, n, A, lda, work, lwork, devInfo));
    }
    private static native int cusolverDnSlauumNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    public static int cusolverDnDlauum(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnDlauumNative(handle, uplo, n, A, lda, work, lwork, devInfo));
    }
    private static native int cusolverDnDlauumNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    public static int cusolverDnClauum(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnClauumNative(handle, uplo, n, A, lda, work, lwork, devInfo));
    }
    private static native int cusolverDnClauumNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    public static int cusolverDnZlauum(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnZlauumNative(handle, uplo, n, A, lda, work, lwork, devInfo));
    }
    private static native int cusolverDnZlauumNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    /** LU Factorization */
    public static int cusolverDnSgetrf_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork)
    {
        return checkResult(cusolverDnSgetrf_bufferSizeNative(handle, m, n, A, lda, Lwork));
    }
    private static native int cusolverDnSgetrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork);


    public static int cusolverDnDgetrf_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork)
    {
        return checkResult(cusolverDnDgetrf_bufferSizeNative(handle, m, n, A, lda, Lwork));
    }
    private static native int cusolverDnDgetrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork);


    public static int cusolverDnCgetrf_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork)
    {
        return checkResult(cusolverDnCgetrf_bufferSizeNative(handle, m, n, A, lda, Lwork));
    }
    private static native int cusolverDnCgetrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork);


    public static int cusolverDnZgetrf_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork)
    {
        return checkResult(cusolverDnZgetrf_bufferSizeNative(handle, m, n, A, lda, Lwork));
    }
    private static native int cusolverDnZgetrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] Lwork);


    public static int cusolverDnSgetrf(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        Pointer devIpiv, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnSgetrfNative(handle, m, n, A, lda, Workspace, devIpiv, devInfo));
    }
    private static native int cusolverDnSgetrfNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        Pointer devIpiv, 
        Pointer devInfo);


    public static int cusolverDnDgetrf(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        Pointer devIpiv, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnDgetrfNative(handle, m, n, A, lda, Workspace, devIpiv, devInfo));
    }
    private static native int cusolverDnDgetrfNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        Pointer devIpiv, 
        Pointer devInfo);


    public static int cusolverDnCgetrf(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        Pointer devIpiv, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnCgetrfNative(handle, m, n, A, lda, Workspace, devIpiv, devInfo));
    }
    private static native int cusolverDnCgetrfNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        Pointer devIpiv, 
        Pointer devInfo);


    public static int cusolverDnZgetrf(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        Pointer devIpiv, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnZgetrfNative(handle, m, n, A, lda, Workspace, devIpiv, devInfo));
    }
    private static native int cusolverDnZgetrfNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer Workspace, 
        Pointer devIpiv, 
        Pointer devInfo);


    /** Row pivoting */
    public static int cusolverDnSlaswp(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int k1, 
        int k2, 
        Pointer devIpiv, 
        int incx)
    {
        return checkResult(cusolverDnSlaswpNative(handle, n, A, lda, k1, k2, devIpiv, incx));
    }
    private static native int cusolverDnSlaswpNative(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int k1, 
        int k2, 
        Pointer devIpiv, 
        int incx);


    public static int cusolverDnDlaswp(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int k1, 
        int k2, 
        Pointer devIpiv, 
        int incx)
    {
        return checkResult(cusolverDnDlaswpNative(handle, n, A, lda, k1, k2, devIpiv, incx));
    }
    private static native int cusolverDnDlaswpNative(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int k1, 
        int k2, 
        Pointer devIpiv, 
        int incx);


    public static int cusolverDnClaswp(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int k1, 
        int k2, 
        Pointer devIpiv, 
        int incx)
    {
        return checkResult(cusolverDnClaswpNative(handle, n, A, lda, k1, k2, devIpiv, incx));
    }
    private static native int cusolverDnClaswpNative(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int k1, 
        int k2, 
        Pointer devIpiv, 
        int incx);


    public static int cusolverDnZlaswp(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int k1, 
        int k2, 
        Pointer devIpiv, 
        int incx)
    {
        return checkResult(cusolverDnZlaswpNative(handle, n, A, lda, k1, k2, devIpiv, incx));
    }
    private static native int cusolverDnZlaswpNative(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int k1, 
        int k2, 
        Pointer devIpiv, 
        int incx);


    /** LU solve */
    public static int cusolverDnSgetrs(
        cusolverDnHandle handle, 
        int trans, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer devIpiv, 
        Pointer B, 
        int ldb, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnSgetrsNative(handle, trans, n, nrhs, A, lda, devIpiv, B, ldb, devInfo));
    }
    private static native int cusolverDnSgetrsNative(
        cusolverDnHandle handle, 
        int trans, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer devIpiv, 
        Pointer B, 
        int ldb, 
        Pointer devInfo);


    public static int cusolverDnDgetrs(
        cusolverDnHandle handle, 
        int trans, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer devIpiv, 
        Pointer B, 
        int ldb, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnDgetrsNative(handle, trans, n, nrhs, A, lda, devIpiv, B, ldb, devInfo));
    }
    private static native int cusolverDnDgetrsNative(
        cusolverDnHandle handle, 
        int trans, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer devIpiv, 
        Pointer B, 
        int ldb, 
        Pointer devInfo);


    public static int cusolverDnCgetrs(
        cusolverDnHandle handle, 
        int trans, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer devIpiv, 
        Pointer B, 
        int ldb, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnCgetrsNative(handle, trans, n, nrhs, A, lda, devIpiv, B, ldb, devInfo));
    }
    private static native int cusolverDnCgetrsNative(
        cusolverDnHandle handle, 
        int trans, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer devIpiv, 
        Pointer B, 
        int ldb, 
        Pointer devInfo);


    public static int cusolverDnZgetrs(
        cusolverDnHandle handle, 
        int trans, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer devIpiv, 
        Pointer B, 
        int ldb, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnZgetrsNative(handle, trans, n, nrhs, A, lda, devIpiv, B, ldb, devInfo));
    }
    private static native int cusolverDnZgetrsNative(
        cusolverDnHandle handle, 
        int trans, 
        int n, 
        int nrhs, 
        Pointer A, 
        int lda, 
        Pointer devIpiv, 
        Pointer B, 
        int ldb, 
        Pointer devInfo);


    /** QR factorization */
    public static int cusolverDnSgeqrf_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnSgeqrf_bufferSizeNative(handle, m, n, A, lda, lwork));
    }
    private static native int cusolverDnSgeqrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnDgeqrf_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnDgeqrf_bufferSizeNative(handle, m, n, A, lda, lwork));
    }
    private static native int cusolverDnDgeqrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnCgeqrf_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnCgeqrf_bufferSizeNative(handle, m, n, A, lda, lwork));
    }
    private static native int cusolverDnCgeqrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnZgeqrf_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnZgeqrf_bufferSizeNative(handle, m, n, A, lda, lwork));
    }
    private static native int cusolverDnZgeqrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnSgeqrf(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer TAU, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnSgeqrfNative(handle, m, n, A, lda, TAU, Workspace, Lwork, devInfo));
    }
    private static native int cusolverDnSgeqrfNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer TAU, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo);


    public static int cusolverDnDgeqrf(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer TAU, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnDgeqrfNative(handle, m, n, A, lda, TAU, Workspace, Lwork, devInfo));
    }
    private static native int cusolverDnDgeqrfNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer TAU, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo);


    public static int cusolverDnCgeqrf(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer TAU, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnCgeqrfNative(handle, m, n, A, lda, TAU, Workspace, Lwork, devInfo));
    }
    private static native int cusolverDnCgeqrfNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer TAU, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo);


    public static int cusolverDnZgeqrf(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer TAU, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnZgeqrfNative(handle, m, n, A, lda, TAU, Workspace, Lwork, devInfo));
    }
    private static native int cusolverDnZgeqrfNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer TAU, 
        Pointer Workspace, 
        int Lwork, 
        Pointer devInfo);


    /** generate unitary matrix Q from QR factorization */
    public static int cusolverDnSorgqr_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnSorgqr_bufferSizeNative(handle, m, n, k, A, lda, tau, lwork));
    }
    private static native int cusolverDnSorgqr_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnDorgqr_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnDorgqr_bufferSizeNative(handle, m, n, k, A, lda, tau, lwork));
    }
    private static native int cusolverDnDorgqr_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnCungqr_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnCungqr_bufferSizeNative(handle, m, n, k, A, lda, tau, lwork));
    }
    private static native int cusolverDnCungqr_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnZungqr_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnZungqr_bufferSizeNative(handle, m, n, k, A, lda, tau, lwork));
    }
    private static native int cusolverDnZungqr_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnSorgqr(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnSorgqrNative(handle, m, n, k, A, lda, tau, work, lwork, info));
    }
    private static native int cusolverDnSorgqrNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnDorgqr(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnDorgqrNative(handle, m, n, k, A, lda, tau, work, lwork, info));
    }
    private static native int cusolverDnDorgqrNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnCungqr(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnCungqrNative(handle, m, n, k, A, lda, tau, work, lwork, info));
    }
    private static native int cusolverDnCungqrNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnZungqr(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnZungqrNative(handle, m, n, k, A, lda, tau, work, lwork, info));
    }
    private static native int cusolverDnZungqrNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    /** compute Q**T*b in solve min||A*x = b|| */
    public static int cusolverDnSormqr_bufferSize(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork)
    {
        return checkResult(cusolverDnSormqr_bufferSizeNative(handle, side, trans, m, n, k, A, lda, tau, C, ldc, lwork));
    }
    private static native int cusolverDnSormqr_bufferSizeNative(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork);


    public static int cusolverDnDormqr_bufferSize(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork)
    {
        return checkResult(cusolverDnDormqr_bufferSizeNative(handle, side, trans, m, n, k, A, lda, tau, C, ldc, lwork));
    }
    private static native int cusolverDnDormqr_bufferSizeNative(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork);


    public static int cusolverDnCunmqr_bufferSize(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork)
    {
        return checkResult(cusolverDnCunmqr_bufferSizeNative(handle, side, trans, m, n, k, A, lda, tau, C, ldc, lwork));
    }
    private static native int cusolverDnCunmqr_bufferSizeNative(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork);


    public static int cusolverDnZunmqr_bufferSize(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork)
    {
        return checkResult(cusolverDnZunmqr_bufferSizeNative(handle, side, trans, m, n, k, A, lda, tau, C, ldc, lwork));
    }
    private static native int cusolverDnZunmqr_bufferSizeNative(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork);


    public static int cusolverDnSormqr(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnSormqrNative(handle, side, trans, m, n, k, A, lda, tau, C, ldc, work, lwork, devInfo));
    }
    private static native int cusolverDnSormqrNative(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    public static int cusolverDnDormqr(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnDormqrNative(handle, side, trans, m, n, k, A, lda, tau, C, ldc, work, lwork, devInfo));
    }
    private static native int cusolverDnDormqrNative(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    public static int cusolverDnCunmqr(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnCunmqrNative(handle, side, trans, m, n, k, A, lda, tau, C, ldc, work, lwork, devInfo));
    }
    private static native int cusolverDnCunmqrNative(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    public static int cusolverDnZunmqr(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnZunmqrNative(handle, side, trans, m, n, k, A, lda, tau, C, ldc, work, lwork, devInfo));
    }
    private static native int cusolverDnZunmqrNative(
        cusolverDnHandle handle, 
        int side, 
        int trans, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer devInfo);


    /** L*D*L**T,U*D*U**T factorization */
    public static int cusolverDnSsytrf_bufferSize(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnSsytrf_bufferSizeNative(handle, n, A, lda, lwork));
    }
    private static native int cusolverDnSsytrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnDsytrf_bufferSize(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnDsytrf_bufferSizeNative(handle, n, A, lda, lwork));
    }
    private static native int cusolverDnDsytrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnCsytrf_bufferSize(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnCsytrf_bufferSizeNative(handle, n, A, lda, lwork));
    }
    private static native int cusolverDnCsytrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnZsytrf_bufferSize(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork)
    {
        return checkResult(cusolverDnZsytrf_bufferSizeNative(handle, n, A, lda, lwork));
    }
    private static native int cusolverDnZsytrf_bufferSizeNative(
        cusolverDnHandle handle, 
        int n, 
        Pointer A, 
        int lda, 
        int[] lwork);


    public static int cusolverDnSsytrf(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer ipiv, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnSsytrfNative(handle, uplo, n, A, lda, ipiv, work, lwork, info));
    }
    private static native int cusolverDnSsytrfNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer ipiv, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnDsytrf(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer ipiv, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnDsytrfNative(handle, uplo, n, A, lda, ipiv, work, lwork, info));
    }
    private static native int cusolverDnDsytrfNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer ipiv, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnCsytrf(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer ipiv, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnCsytrfNative(handle, uplo, n, A, lda, ipiv, work, lwork, info));
    }
    private static native int cusolverDnCsytrfNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer ipiv, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnZsytrf(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer ipiv, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnZsytrfNative(handle, uplo, n, A, lda, ipiv, work, lwork, info));
    }
    private static native int cusolverDnZsytrfNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer ipiv, 
        Pointer work, 
        int lwork, 
        Pointer info);


    /** bidiagonal factorization */
    public static int cusolverDnSgebrd_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] Lwork)
    {
        return checkResult(cusolverDnSgebrd_bufferSizeNative(handle, m, n, Lwork));
    }
    private static native int cusolverDnSgebrd_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] Lwork);


    public static int cusolverDnDgebrd_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] Lwork)
    {
        return checkResult(cusolverDnDgebrd_bufferSizeNative(handle, m, n, Lwork));
    }
    private static native int cusolverDnDgebrd_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] Lwork);


    public static int cusolverDnCgebrd_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] Lwork)
    {
        return checkResult(cusolverDnCgebrd_bufferSizeNative(handle, m, n, Lwork));
    }
    private static native int cusolverDnCgebrd_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] Lwork);


    public static int cusolverDnZgebrd_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] Lwork)
    {
        return checkResult(cusolverDnZgebrd_bufferSizeNative(handle, m, n, Lwork));
    }
    private static native int cusolverDnZgebrd_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] Lwork);


    public static int cusolverDnSgebrd(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer D, 
        Pointer E, 
        Pointer TAUQ, 
        Pointer TAUP, 
        Pointer Work, 
        int Lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnSgebrdNative(handle, m, n, A, lda, D, E, TAUQ, TAUP, Work, Lwork, devInfo));
    }
    private static native int cusolverDnSgebrdNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer D, 
        Pointer E, 
        Pointer TAUQ, 
        Pointer TAUP, 
        Pointer Work, 
        int Lwork, 
        Pointer devInfo);


    public static int cusolverDnDgebrd(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer D, 
        Pointer E, 
        Pointer TAUQ, 
        Pointer TAUP, 
        Pointer Work, 
        int Lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnDgebrdNative(handle, m, n, A, lda, D, E, TAUQ, TAUP, Work, Lwork, devInfo));
    }
    private static native int cusolverDnDgebrdNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer D, 
        Pointer E, 
        Pointer TAUQ, 
        Pointer TAUP, 
        Pointer Work, 
        int Lwork, 
        Pointer devInfo);


    public static int cusolverDnCgebrd(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer D, 
        Pointer E, 
        Pointer TAUQ, 
        Pointer TAUP, 
        Pointer Work, 
        int Lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnCgebrdNative(handle, m, n, A, lda, D, E, TAUQ, TAUP, Work, Lwork, devInfo));
    }
    private static native int cusolverDnCgebrdNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer D, 
        Pointer E, 
        Pointer TAUQ, 
        Pointer TAUP, 
        Pointer Work, 
        int Lwork, 
        Pointer devInfo);


    public static int cusolverDnZgebrd(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer D, 
        Pointer E, 
        Pointer TAUQ, 
        Pointer TAUP, 
        Pointer Work, 
        int Lwork, 
        Pointer devInfo)
    {
        return checkResult(cusolverDnZgebrdNative(handle, m, n, A, lda, D, E, TAUQ, TAUP, Work, Lwork, devInfo));
    }
    private static native int cusolverDnZgebrdNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer D, 
        Pointer E, 
        Pointer TAUQ, 
        Pointer TAUP, 
        Pointer Work, 
        int Lwork, 
        Pointer devInfo);


    /** generates one of the unitary matrices Q or P**T determined by GEBRD*/
    public static int cusolverDnSorgbr_bufferSize(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnSorgbr_bufferSizeNative(handle, side, m, n, k, A, lda, tau, lwork));
    }
    private static native int cusolverDnSorgbr_bufferSizeNative(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnDorgbr_bufferSize(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnDorgbr_bufferSizeNative(handle, side, m, n, k, A, lda, tau, lwork));
    }
    private static native int cusolverDnDorgbr_bufferSizeNative(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnCungbr_bufferSize(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnCungbr_bufferSizeNative(handle, side, m, n, k, A, lda, tau, lwork));
    }
    private static native int cusolverDnCungbr_bufferSizeNative(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnZungbr_bufferSize(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnZungbr_bufferSizeNative(handle, side, m, n, k, A, lda, tau, lwork));
    }
    private static native int cusolverDnZungbr_bufferSizeNative(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnSorgbr(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnSorgbrNative(handle, side, m, n, k, A, lda, tau, work, lwork, info));
    }
    private static native int cusolverDnSorgbrNative(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnDorgbr(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnDorgbrNative(handle, side, m, n, k, A, lda, tau, work, lwork, info));
    }
    private static native int cusolverDnDorgbrNative(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnCungbr(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnCungbrNative(handle, side, m, n, k, A, lda, tau, work, lwork, info));
    }
    private static native int cusolverDnCungbrNative(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnZungbr(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnZungbrNative(handle, side, m, n, k, A, lda, tau, work, lwork, info));
    }
    private static native int cusolverDnZungbrNative(
        cusolverDnHandle handle, 
        int side, 
        int m, 
        int n, 
        int k, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    /** tridiagonal factorization */
    public static int cusolverDnSsytrd_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnSsytrd_bufferSizeNative(handle, uplo, n, A, lda, d, e, tau, lwork));
    }
    private static native int cusolverDnSsytrd_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnDsytrd_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnDsytrd_bufferSizeNative(handle, uplo, n, A, lda, d, e, tau, lwork));
    }
    private static native int cusolverDnDsytrd_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnChetrd_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnChetrd_bufferSizeNative(handle, uplo, n, A, lda, d, e, tau, lwork));
    }
    private static native int cusolverDnChetrd_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnZhetrd_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnZhetrd_bufferSizeNative(handle, uplo, n, A, lda, d, e, tau, lwork));
    }
    private static native int cusolverDnZhetrd_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnSsytrd(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnSsytrdNative(handle, uplo, n, A, lda, d, e, tau, work, lwork, info));
    }
    private static native int cusolverDnSsytrdNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnDsytrd(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnDsytrdNative(handle, uplo, n, A, lda, d, e, tau, work, lwork, info));
    }
    private static native int cusolverDnDsytrdNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnChetrd(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnChetrdNative(handle, uplo, n, A, lda, d, e, tau, work, lwork, info));
    }
    private static native int cusolverDnChetrdNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnZhetrd(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnZhetrdNative(handle, uplo, n, A, lda, d, e, tau, work, lwork, info));
    }
    private static native int cusolverDnZhetrdNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer d, 
        Pointer e, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    /** generate unitary Q comes from sytrd */
    public static int cusolverDnSorgtr_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnSorgtr_bufferSizeNative(handle, uplo, n, A, lda, tau, lwork));
    }
    private static native int cusolverDnSorgtr_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnDorgtr_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnDorgtr_bufferSizeNative(handle, uplo, n, A, lda, tau, lwork));
    }
    private static native int cusolverDnDorgtr_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnCungtr_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnCungtr_bufferSizeNative(handle, uplo, n, A, lda, tau, lwork));
    }
    private static native int cusolverDnCungtr_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnZungtr_bufferSize(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork)
    {
        return checkResult(cusolverDnZungtr_bufferSizeNative(handle, uplo, n, A, lda, tau, lwork));
    }
    private static native int cusolverDnZungtr_bufferSizeNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        int[] lwork);


    public static int cusolverDnSorgtr(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnSorgtrNative(handle, uplo, n, A, lda, tau, work, lwork, info));
    }
    private static native int cusolverDnSorgtrNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnDorgtr(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnDorgtrNative(handle, uplo, n, A, lda, tau, work, lwork, info));
    }
    private static native int cusolverDnDorgtrNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnCungtr(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnCungtrNative(handle, uplo, n, A, lda, tau, work, lwork, info));
    }
    private static native int cusolverDnCungtrNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnZungtr(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnZungtrNative(handle, uplo, n, A, lda, tau, work, lwork, info));
    }
    private static native int cusolverDnZungtrNative(
        cusolverDnHandle handle, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer work, 
        int lwork, 
        Pointer info);


    /** compute op(Q)*C or C*op(Q) where Q comes from sytrd */
    public static int cusolverDnSormtr_bufferSize(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork)
    {
        return checkResult(cusolverDnSormtr_bufferSizeNative(handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, lwork));
    }
    private static native int cusolverDnSormtr_bufferSizeNative(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork);


    public static int cusolverDnDormtr_bufferSize(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork)
    {
        return checkResult(cusolverDnDormtr_bufferSizeNative(handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, lwork));
    }
    private static native int cusolverDnDormtr_bufferSizeNative(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork);


    public static int cusolverDnCunmtr_bufferSize(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork)
    {
        return checkResult(cusolverDnCunmtr_bufferSizeNative(handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, lwork));
    }
    private static native int cusolverDnCunmtr_bufferSizeNative(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork);


    public static int cusolverDnZunmtr_bufferSize(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork)
    {
        return checkResult(cusolverDnZunmtr_bufferSizeNative(handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, lwork));
    }
    private static native int cusolverDnZunmtr_bufferSizeNative(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        int[] lwork);


    public static int cusolverDnSormtr(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnSormtrNative(handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, work, lwork, info));
    }
    private static native int cusolverDnSormtrNative(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnDormtr(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnDormtrNative(handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, work, lwork, info));
    }
    private static native int cusolverDnDormtrNative(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnCunmtr(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnCunmtrNative(handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, work, lwork, info));
    }
    private static native int cusolverDnCunmtrNative(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnZunmtr(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnZunmtrNative(handle, side, uplo, trans, m, n, A, lda, tau, C, ldc, work, lwork, info));
    }
    private static native int cusolverDnZunmtrNative(
        cusolverDnHandle handle, 
        int side, 
        int uplo, 
        int trans, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer tau, 
        Pointer C, 
        int ldc, 
        Pointer work, 
        int lwork, 
        Pointer info);


    /** singular value decomposition, A = U * Sigma * V^H */
    public static int cusolverDnSgesvd_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] lwork)
    {
        return checkResult(cusolverDnSgesvd_bufferSizeNative(handle, m, n, lwork));
    }
    private static native int cusolverDnSgesvd_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] lwork);


    public static int cusolverDnDgesvd_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] lwork)
    {
        return checkResult(cusolverDnDgesvd_bufferSizeNative(handle, m, n, lwork));
    }
    private static native int cusolverDnDgesvd_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] lwork);


    public static int cusolverDnCgesvd_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] lwork)
    {
        return checkResult(cusolverDnCgesvd_bufferSizeNative(handle, m, n, lwork));
    }
    private static native int cusolverDnCgesvd_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] lwork);


    public static int cusolverDnZgesvd_bufferSize(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] lwork)
    {
        return checkResult(cusolverDnZgesvd_bufferSizeNative(handle, m, n, lwork));
    }
    private static native int cusolverDnZgesvd_bufferSizeNative(
        cusolverDnHandle handle, 
        int m, 
        int n, 
        int[] lwork);


    public static int cusolverDnSgesvd(
        cusolverDnHandle handle, 
        char jobu, 
        char jobvt, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer VT, 
        int ldvt, 
        Pointer work, 
        int lwork, 
        Pointer rwork, 
        Pointer info)
    {
        return checkResult(cusolverDnSgesvdNative(handle, jobu, jobvt, m, n, A, lda, S, U, ldu, VT, ldvt, work, lwork, rwork, info));
    }
    private static native int cusolverDnSgesvdNative(
        cusolverDnHandle handle, 
        char jobu, 
        char jobvt, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer VT, 
        int ldvt, 
        Pointer work, 
        int lwork, 
        Pointer rwork, 
        Pointer info);


    public static int cusolverDnDgesvd(
        cusolverDnHandle handle, 
        char jobu, 
        char jobvt, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer VT, 
        int ldvt, 
        Pointer work, 
        int lwork, 
        Pointer rwork, 
        Pointer info)
    {
        return checkResult(cusolverDnDgesvdNative(handle, jobu, jobvt, m, n, A, lda, S, U, ldu, VT, ldvt, work, lwork, rwork, info));
    }
    private static native int cusolverDnDgesvdNative(
        cusolverDnHandle handle, 
        char jobu, 
        char jobvt, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer VT, 
        int ldvt, 
        Pointer work, 
        int lwork, 
        Pointer rwork, 
        Pointer info);


    public static int cusolverDnCgesvd(
        cusolverDnHandle handle, 
        char jobu, 
        char jobvt, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer VT, 
        int ldvt, 
        Pointer work, 
        int lwork, 
        Pointer rwork, 
        Pointer info)
    {
        return checkResult(cusolverDnCgesvdNative(handle, jobu, jobvt, m, n, A, lda, S, U, ldu, VT, ldvt, work, lwork, rwork, info));
    }
    private static native int cusolverDnCgesvdNative(
        cusolverDnHandle handle, 
        char jobu, 
        char jobvt, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer VT, 
        int ldvt, 
        Pointer work, 
        int lwork, 
        Pointer rwork, 
        Pointer info);


    public static int cusolverDnZgesvd(
        cusolverDnHandle handle, 
        char jobu, 
        char jobvt, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer VT, 
        int ldvt, 
        Pointer work, 
        int lwork, 
        Pointer rwork, 
        Pointer info)
    {
        return checkResult(cusolverDnZgesvdNative(handle, jobu, jobvt, m, n, A, lda, S, U, ldu, VT, ldvt, work, lwork, rwork, info));
    }
    private static native int cusolverDnZgesvdNative(
        cusolverDnHandle handle, 
        char jobu, 
        char jobvt, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer VT, 
        int ldvt, 
        Pointer work, 
        int lwork, 
        Pointer rwork, 
        Pointer info);


    /** standard symmetric eigenvalue solver, A*x = lambda*x, by divide-and-conquer  */
    public static int cusolverDnSsyevd_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnSsyevd_bufferSizeNative(handle, jobz, uplo, n, A, lda, W, lwork));
    }
    private static native int cusolverDnSsyevd_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnDsyevd_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnDsyevd_bufferSizeNative(handle, jobz, uplo, n, A, lda, W, lwork));
    }
    private static native int cusolverDnDsyevd_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnCheevd_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnCheevd_bufferSizeNative(handle, jobz, uplo, n, A, lda, W, lwork));
    }
    private static native int cusolverDnCheevd_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnZheevd_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnZheevd_bufferSizeNative(handle, jobz, uplo, n, A, lda, W, lwork));
    }
    private static native int cusolverDnZheevd_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnSsyevd(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnSsyevdNative(handle, jobz, uplo, n, A, lda, W, work, lwork, info));
    }
    private static native int cusolverDnSsyevdNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnDsyevd(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnDsyevdNative(handle, jobz, uplo, n, A, lda, W, work, lwork, info));
    }
    private static native int cusolverDnDsyevdNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnCheevd(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnCheevdNative(handle, jobz, uplo, n, A, lda, W, work, lwork, info));
    }
    private static native int cusolverDnCheevdNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnZheevd(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnZheevdNative(handle, jobz, uplo, n, A, lda, W, work, lwork, info));
    }
    private static native int cusolverDnZheevdNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    /** standard selective symmetric eigenvalue solver, A*x = lambda*x, by divide-and-conquer  */
    public static int cusolverDnSsyevdx_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnSsyevdx_bufferSizeNative(handle, jobz, range, uplo, n, A, lda, vl, vu, il, iu, meig, W, lwork));
    }
    private static native int cusolverDnSsyevdx_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnDsyevdx_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnDsyevdx_bufferSizeNative(handle, jobz, range, uplo, n, A, lda, vl, vu, il, iu, meig, W, lwork));
    }
    private static native int cusolverDnDsyevdx_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnCheevdx_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnCheevdx_bufferSizeNative(handle, jobz, range, uplo, n, A, lda, vl, vu, il, iu, meig, W, lwork));
    }
    private static native int cusolverDnCheevdx_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnZheevdx_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnZheevdx_bufferSizeNative(handle, jobz, range, uplo, n, A, lda, vl, vu, il, iu, meig, W, lwork));
    }
    private static native int cusolverDnZheevdx_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnSsyevdx(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnSsyevdxNative(handle, jobz, range, uplo, n, A, lda, vl, vu, il, iu, meig, W, work, lwork, info));
    }
    private static native int cusolverDnSsyevdxNative(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnDsyevdx(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnDsyevdxNative(handle, jobz, range, uplo, n, A, lda, vl, vu, il, iu, meig, W, work, lwork, info));
    }
    private static native int cusolverDnDsyevdxNative(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnCheevdx(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnCheevdxNative(handle, jobz, range, uplo, n, A, lda, vl, vu, il, iu, meig, W, work, lwork, info));
    }
    private static native int cusolverDnCheevdxNative(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnZheevdx(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnZheevdxNative(handle, jobz, range, uplo, n, A, lda, vl, vu, il, iu, meig, W, work, lwork, info));
    }
    private static native int cusolverDnZheevdxNative(
        cusolverDnHandle handle, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    /** selective generalized symmetric eigenvalue solver, A*x = lambda*B*x, by divide-and-conquer  */
    public static int cusolverDnSsygvdx_bufferSize(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnSsygvdx_bufferSizeNative(handle, itype, jobz, range, uplo, n, A, lda, B, ldb, vl, vu, il, iu, meig, W, lwork));
    }
    private static native int cusolverDnSsygvdx_bufferSizeNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnDsygvdx_bufferSize(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnDsygvdx_bufferSizeNative(handle, itype, jobz, range, uplo, n, A, lda, B, ldb, vl, vu, il, iu, meig, W, lwork));
    }
    private static native int cusolverDnDsygvdx_bufferSizeNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnChegvdx_bufferSize(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnChegvdx_bufferSizeNative(handle, itype, jobz, range, uplo, n, A, lda, B, ldb, vl, vu, il, iu, meig, W, lwork));
    }
    private static native int cusolverDnChegvdx_bufferSizeNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnZhegvdx_bufferSize(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnZhegvdx_bufferSizeNative(handle, itype, jobz, range, uplo, n, A, lda, B, ldb, vl, vu, il, iu, meig, W, lwork));
    }
    private static native int cusolverDnZhegvdx_bufferSizeNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnSsygvdx(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnSsygvdxNative(handle, itype, jobz, range, uplo, n, A, lda, B, ldb, vl, vu, il, iu, meig, W, work, lwork, info));
    }
    private static native int cusolverDnSsygvdxNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnDsygvdx(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnDsygvdxNative(handle, itype, jobz, range, uplo, n, A, lda, B, ldb, vl, vu, il, iu, meig, W, work, lwork, info));
    }
    private static native int cusolverDnDsygvdxNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnChegvdx(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnChegvdxNative(handle, itype, jobz, range, uplo, n, A, lda, B, ldb, vl, vu, il, iu, meig, W, work, lwork, info));
    }
    private static native int cusolverDnChegvdxNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        float vl, 
        float vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnZhegvdx(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnZhegvdxNative(handle, itype, jobz, range, uplo, n, A, lda, B, ldb, vl, vu, il, iu, meig, W, work, lwork, info));
    }
    private static native int cusolverDnZhegvdxNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int range, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        double vl, 
        double vu, 
        int il, 
        int iu, 
        Pointer meig, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    /** generalized symmetric eigenvalue solver, A*x = lambda*B*x, by divide-and-conquer  */
    public static int cusolverDnSsygvd_bufferSize(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnSsygvd_bufferSizeNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, lwork));
    }
    private static native int cusolverDnSsygvd_bufferSizeNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnDsygvd_bufferSize(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnDsygvd_bufferSizeNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, lwork));
    }
    private static native int cusolverDnDsygvd_bufferSizeNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnChegvd_bufferSize(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnChegvd_bufferSizeNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, lwork));
    }
    private static native int cusolverDnChegvd_bufferSizeNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnZhegvd_bufferSize(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork)
    {
        return checkResult(cusolverDnZhegvd_bufferSizeNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, lwork));
    }
    private static native int cusolverDnZhegvd_bufferSizeNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork);


    public static int cusolverDnSsygvd(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnSsygvdNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, work, lwork, info));
    }
    private static native int cusolverDnSsygvdNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnDsygvd(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnDsygvdNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, work, lwork, info));
    }
    private static native int cusolverDnDsygvdNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnChegvd(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnChegvdNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, work, lwork, info));
    }
    private static native int cusolverDnChegvdNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnZhegvd(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info)
    {
        return checkResult(cusolverDnZhegvdNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, work, lwork, info));
    }
    private static native int cusolverDnZhegvdNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info);


    public static int cusolverDnCreateSyevjInfo(
        syevjInfo info)
    {
        return checkResult(cusolverDnCreateSyevjInfoNative(info));
    }
    private static native int cusolverDnCreateSyevjInfoNative(
        syevjInfo info);


    public static int cusolverDnDestroySyevjInfo(
        syevjInfo info)
    {
        return checkResult(cusolverDnDestroySyevjInfoNative(info));
    }
    private static native int cusolverDnDestroySyevjInfoNative(
        syevjInfo info);


    public static int cusolverDnXsyevjSetTolerance(
        syevjInfo info, 
        double tolerance)
    {
        return checkResult(cusolverDnXsyevjSetToleranceNative(info, tolerance));
    }
    private static native int cusolverDnXsyevjSetToleranceNative(
        syevjInfo info, 
        double tolerance);


    public static int cusolverDnXsyevjSetMaxSweeps(
        syevjInfo info, 
        int max_sweeps)
    {
        return checkResult(cusolverDnXsyevjSetMaxSweepsNative(info, max_sweeps));
    }
    private static native int cusolverDnXsyevjSetMaxSweepsNative(
        syevjInfo info, 
        int max_sweeps);


    public static int cusolverDnXsyevjSetSortEig(
        syevjInfo info, 
        int sort_eig)
    {
        return checkResult(cusolverDnXsyevjSetSortEigNative(info, sort_eig));
    }
    private static native int cusolverDnXsyevjSetSortEigNative(
        syevjInfo info, 
        int sort_eig);


    public static int cusolverDnXsyevjGetResidual(
        cusolverDnHandle handle, 
        syevjInfo info, 
        Pointer residual)
    {
        return checkResult(cusolverDnXsyevjGetResidualNative(handle, info, residual));
    }
    private static native int cusolverDnXsyevjGetResidualNative(
        cusolverDnHandle handle, 
        syevjInfo info, 
        Pointer residual);


    public static int cusolverDnXsyevjGetSweeps(
        cusolverDnHandle handle, 
        syevjInfo info, 
        Pointer executed_sweeps)
    {
        return checkResult(cusolverDnXsyevjGetSweepsNative(handle, info, executed_sweeps));
    }
    private static native int cusolverDnXsyevjGetSweepsNative(
        cusolverDnHandle handle, 
        syevjInfo info, 
        Pointer executed_sweeps);


    public static int cusolverDnSsyevjBatched_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnSsyevjBatched_bufferSizeNative(handle, jobz, uplo, n, A, lda, W, lwork, params, batchSize));
    }
    private static native int cusolverDnSsyevjBatched_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params, 
        int batchSize);


    public static int cusolverDnDsyevjBatched_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnDsyevjBatched_bufferSizeNative(handle, jobz, uplo, n, A, lda, W, lwork, params, batchSize));
    }
    private static native int cusolverDnDsyevjBatched_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params, 
        int batchSize);


    public static int cusolverDnCheevjBatched_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnCheevjBatched_bufferSizeNative(handle, jobz, uplo, n, A, lda, W, lwork, params, batchSize));
    }
    private static native int cusolverDnCheevjBatched_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params, 
        int batchSize);


    public static int cusolverDnZheevjBatched_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnZheevjBatched_bufferSizeNative(handle, jobz, uplo, n, A, lda, W, lwork, params, batchSize));
    }
    private static native int cusolverDnZheevjBatched_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params, 
        int batchSize);


    public static int cusolverDnSsyevjBatched(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnSsyevjBatchedNative(handle, jobz, uplo, n, A, lda, W, work, lwork, info, params, batchSize));
    }
    private static native int cusolverDnSsyevjBatchedNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params, 
        int batchSize);


    public static int cusolverDnDsyevjBatched(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnDsyevjBatchedNative(handle, jobz, uplo, n, A, lda, W, work, lwork, info, params, batchSize));
    }
    private static native int cusolverDnDsyevjBatchedNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params, 
        int batchSize);


    public static int cusolverDnCheevjBatched(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnCheevjBatchedNative(handle, jobz, uplo, n, A, lda, W, work, lwork, info, params, batchSize));
    }
    private static native int cusolverDnCheevjBatchedNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params, 
        int batchSize);


    public static int cusolverDnZheevjBatched(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnZheevjBatchedNative(handle, jobz, uplo, n, A, lda, W, work, lwork, info, params, batchSize));
    }
    private static native int cusolverDnZheevjBatchedNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params, 
        int batchSize);


    public static int cusolverDnSsyevj_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params)
    {
        return checkResult(cusolverDnSsyevj_bufferSizeNative(handle, jobz, uplo, n, A, lda, W, lwork, params));
    }
    private static native int cusolverDnSsyevj_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params);


    public static int cusolverDnDsyevj_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params)
    {
        return checkResult(cusolverDnDsyevj_bufferSizeNative(handle, jobz, uplo, n, A, lda, W, lwork, params));
    }
    private static native int cusolverDnDsyevj_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params);


    public static int cusolverDnCheevj_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params)
    {
        return checkResult(cusolverDnCheevj_bufferSizeNative(handle, jobz, uplo, n, A, lda, W, lwork, params));
    }
    private static native int cusolverDnCheevj_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params);


    public static int cusolverDnZheevj_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params)
    {
        return checkResult(cusolverDnZheevj_bufferSizeNative(handle, jobz, uplo, n, A, lda, W, lwork, params));
    }
    private static native int cusolverDnZheevj_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params);


    public static int cusolverDnSsyevj(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params)
    {
        return checkResult(cusolverDnSsyevjNative(handle, jobz, uplo, n, A, lda, W, work, lwork, info, params));
    }
    private static native int cusolverDnSsyevjNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params);


    public static int cusolverDnDsyevj(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params)
    {
        return checkResult(cusolverDnDsyevjNative(handle, jobz, uplo, n, A, lda, W, work, lwork, info, params));
    }
    private static native int cusolverDnDsyevjNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params);


    public static int cusolverDnCheevj(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params)
    {
        return checkResult(cusolverDnCheevjNative(handle, jobz, uplo, n, A, lda, W, work, lwork, info, params));
    }
    private static native int cusolverDnCheevjNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params);


    public static int cusolverDnZheevj(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params)
    {
        return checkResult(cusolverDnZheevjNative(handle, jobz, uplo, n, A, lda, W, work, lwork, info, params));
    }
    private static native int cusolverDnZheevjNative(
        cusolverDnHandle handle, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params);


    public static int cusolverDnSsygvj_bufferSize(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params)
    {
        return checkResult(cusolverDnSsygvj_bufferSizeNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, lwork, params));
    }
    private static native int cusolverDnSsygvj_bufferSizeNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params);


    public static int cusolverDnDsygvj_bufferSize(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params)
    {
        return checkResult(cusolverDnDsygvj_bufferSizeNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, lwork, params));
    }
    private static native int cusolverDnDsygvj_bufferSizeNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params);


    public static int cusolverDnChegvj_bufferSize(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params)
    {
        return checkResult(cusolverDnChegvj_bufferSizeNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, lwork, params));
    }
    private static native int cusolverDnChegvj_bufferSizeNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params);


    public static int cusolverDnZhegvj_bufferSize(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params)
    {
        return checkResult(cusolverDnZhegvj_bufferSizeNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, lwork, params));
    }
    private static native int cusolverDnZhegvj_bufferSizeNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        int[] lwork, 
        syevjInfo params);


    public static int cusolverDnSsygvj(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params)
    {
        return checkResult(cusolverDnSsygvjNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, work, lwork, info, params));
    }
    private static native int cusolverDnSsygvjNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params);


    public static int cusolverDnDsygvj(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params)
    {
        return checkResult(cusolverDnDsygvjNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, work, lwork, info, params));
    }
    private static native int cusolverDnDsygvjNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params);


    public static int cusolverDnChegvj(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params)
    {
        return checkResult(cusolverDnChegvjNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, work, lwork, info, params));
    }
    private static native int cusolverDnChegvjNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params);


    public static int cusolverDnZhegvj(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params)
    {
        return checkResult(cusolverDnZhegvjNative(handle, itype, jobz, uplo, n, A, lda, B, ldb, W, work, lwork, info, params));
    }
    private static native int cusolverDnZhegvjNative(
        cusolverDnHandle handle, 
        int itype, 
        int jobz, 
        int uplo, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer B, 
        int ldb, 
        Pointer W, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        syevjInfo params);


    public static int cusolverDnCreateGesvdjInfo(
        gesvdjInfo info)
    {
        return checkResult(cusolverDnCreateGesvdjInfoNative(info));
    }
    private static native int cusolverDnCreateGesvdjInfoNative(
        gesvdjInfo info);


    public static int cusolverDnDestroyGesvdjInfo(
        gesvdjInfo info)
    {
        return checkResult(cusolverDnDestroyGesvdjInfoNative(info));
    }
    private static native int cusolverDnDestroyGesvdjInfoNative(
        gesvdjInfo info);


    public static int cusolverDnXgesvdjSetTolerance(
        gesvdjInfo info, 
        double tolerance)
    {
        return checkResult(cusolverDnXgesvdjSetToleranceNative(info, tolerance));
    }
    private static native int cusolverDnXgesvdjSetToleranceNative(
        gesvdjInfo info, 
        double tolerance);


    public static int cusolverDnXgesvdjSetMaxSweeps(
        gesvdjInfo info, 
        int max_sweeps)
    {
        return checkResult(cusolverDnXgesvdjSetMaxSweepsNative(info, max_sweeps));
    }
    private static native int cusolverDnXgesvdjSetMaxSweepsNative(
        gesvdjInfo info, 
        int max_sweeps);


    public static int cusolverDnXgesvdjSetSortEig(
        gesvdjInfo info, 
        int sort_svd)
    {
        return checkResult(cusolverDnXgesvdjSetSortEigNative(info, sort_svd));
    }
    private static native int cusolverDnXgesvdjSetSortEigNative(
        gesvdjInfo info, 
        int sort_svd);


    public static int cusolverDnXgesvdjGetResidual(
        cusolverDnHandle handle, 
        gesvdjInfo info, 
        Pointer residual)
    {
        return checkResult(cusolverDnXgesvdjGetResidualNative(handle, info, residual));
    }
    private static native int cusolverDnXgesvdjGetResidualNative(
        cusolverDnHandle handle, 
        gesvdjInfo info, 
        Pointer residual);


    public static int cusolverDnXgesvdjGetSweeps(
        cusolverDnHandle handle, 
        gesvdjInfo info, 
        Pointer executed_sweeps)
    {
        return checkResult(cusolverDnXgesvdjGetSweepsNative(handle, info, executed_sweeps));
    }
    private static native int cusolverDnXgesvdjGetSweepsNative(
        cusolverDnHandle handle, 
        gesvdjInfo info, 
        Pointer executed_sweeps);


    public static int cusolverDnSgesvdjBatched_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnSgesvdjBatched_bufferSizeNative(handle, jobz, m, n, A, lda, S, U, ldu, V, ldv, lwork, params, batchSize));
    }
    private static native int cusolverDnSgesvdjBatched_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params, 
        int batchSize);


    public static int cusolverDnDgesvdjBatched_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnDgesvdjBatched_bufferSizeNative(handle, jobz, m, n, A, lda, S, U, ldu, V, ldv, lwork, params, batchSize));
    }
    private static native int cusolverDnDgesvdjBatched_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params, 
        int batchSize);


    public static int cusolverDnCgesvdjBatched_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnCgesvdjBatched_bufferSizeNative(handle, jobz, m, n, A, lda, S, U, ldu, V, ldv, lwork, params, batchSize));
    }
    private static native int cusolverDnCgesvdjBatched_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params, 
        int batchSize);


    public static int cusolverDnZgesvdjBatched_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnZgesvdjBatched_bufferSizeNative(handle, jobz, m, n, A, lda, S, U, ldu, V, ldv, lwork, params, batchSize));
    }
    private static native int cusolverDnZgesvdjBatched_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params, 
        int batchSize);


    public static int cusolverDnSgesvdjBatched(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnSgesvdjBatchedNative(handle, jobz, m, n, A, lda, S, U, ldu, V, ldv, work, lwork, info, params, batchSize));
    }
    private static native int cusolverDnSgesvdjBatchedNative(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params, 
        int batchSize);


    public static int cusolverDnDgesvdjBatched(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnDgesvdjBatchedNative(handle, jobz, m, n, A, lda, S, U, ldu, V, ldv, work, lwork, info, params, batchSize));
    }
    private static native int cusolverDnDgesvdjBatchedNative(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params, 
        int batchSize);


    public static int cusolverDnCgesvdjBatched(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnCgesvdjBatchedNative(handle, jobz, m, n, A, lda, S, U, ldu, V, ldv, work, lwork, info, params, batchSize));
    }
    private static native int cusolverDnCgesvdjBatchedNative(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params, 
        int batchSize);


    public static int cusolverDnZgesvdjBatched(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params, 
        int batchSize)
    {
        return checkResult(cusolverDnZgesvdjBatchedNative(handle, jobz, m, n, A, lda, S, U, ldu, V, ldv, work, lwork, info, params, batchSize));
    }
    private static native int cusolverDnZgesvdjBatchedNative(
        cusolverDnHandle handle, 
        int jobz, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params, 
        int batchSize);


    public static int cusolverDnSgesvdj_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params)
    {
        return checkResult(cusolverDnSgesvdj_bufferSizeNative(handle, jobz, econ, m, n, A, lda, S, U, ldu, V, ldv, lwork, params));
    }
    private static native int cusolverDnSgesvdj_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params);


    public static int cusolverDnDgesvdj_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params)
    {
        return checkResult(cusolverDnDgesvdj_bufferSizeNative(handle, jobz, econ, m, n, A, lda, S, U, ldu, V, ldv, lwork, params));
    }
    private static native int cusolverDnDgesvdj_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params);


    public static int cusolverDnCgesvdj_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params)
    {
        return checkResult(cusolverDnCgesvdj_bufferSizeNative(handle, jobz, econ, m, n, A, lda, S, U, ldu, V, ldv, lwork, params));
    }
    private static native int cusolverDnCgesvdj_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params);


    public static int cusolverDnZgesvdj_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params)
    {
        return checkResult(cusolverDnZgesvdj_bufferSizeNative(handle, jobz, econ, m, n, A, lda, S, U, ldu, V, ldv, lwork, params));
    }
    private static native int cusolverDnZgesvdj_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        int[] lwork, 
        gesvdjInfo params);


    public static int cusolverDnSgesvdj(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params)
    {
        return checkResult(cusolverDnSgesvdjNative(handle, jobz, econ, m, n, A, lda, S, U, ldu, V, ldv, work, lwork, info, params));
    }
    private static native int cusolverDnSgesvdjNative(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params);


    public static int cusolverDnDgesvdj(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params)
    {
        return checkResult(cusolverDnDgesvdjNative(handle, jobz, econ, m, n, A, lda, S, U, ldu, V, ldv, work, lwork, info, params));
    }
    private static native int cusolverDnDgesvdjNative(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params);


    public static int cusolverDnCgesvdj(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params)
    {
        return checkResult(cusolverDnCgesvdjNative(handle, jobz, econ, m, n, A, lda, S, U, ldu, V, ldv, work, lwork, info, params));
    }
    private static native int cusolverDnCgesvdjNative(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params);


    public static int cusolverDnZgesvdj(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params)
    {
        return checkResult(cusolverDnZgesvdjNative(handle, jobz, econ, m, n, A, lda, S, U, ldu, V, ldv, work, lwork, info, params));
    }
    private static native int cusolverDnZgesvdjNative(
        cusolverDnHandle handle, 
        int jobz, 
        int econ, 
        int m, 
        int n, 
        Pointer A, 
        int lda, 
        Pointer S, 
        Pointer U, 
        int ldu, 
        Pointer V, 
        int ldv, 
        Pointer work, 
        int lwork, 
        Pointer info, 
        gesvdjInfo params);


    /** batched approximate SVD */
    public static int cusolverDnSgesvdaStridedBatched_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        int[] lwork, 
        int batchSize)
    {
        return checkResult(cusolverDnSgesvdaStridedBatched_bufferSizeNative(handle, jobz, rank, m, n, d_A, lda, strideA, d_S, strideS, d_U, ldu, strideU, d_V, ldv, strideV, lwork, batchSize));
    }
    private static native int cusolverDnSgesvdaStridedBatched_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        int[] lwork, 
        int batchSize);


    public static int cusolverDnDgesvdaStridedBatched_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        int[] lwork, 
        int batchSize)
    {
        return checkResult(cusolverDnDgesvdaStridedBatched_bufferSizeNative(handle, jobz, rank, m, n, d_A, lda, strideA, d_S, strideS, d_U, ldu, strideU, d_V, ldv, strideV, lwork, batchSize));
    }
    private static native int cusolverDnDgesvdaStridedBatched_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        int[] lwork, 
        int batchSize);


    public static int cusolverDnCgesvdaStridedBatched_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        int[] lwork, 
        int batchSize)
    {
        return checkResult(cusolverDnCgesvdaStridedBatched_bufferSizeNative(handle, jobz, rank, m, n, d_A, lda, strideA, d_S, strideS, d_U, ldu, strideU, d_V, ldv, strideV, lwork, batchSize));
    }
    private static native int cusolverDnCgesvdaStridedBatched_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        int[] lwork, 
        int batchSize);


    public static int cusolverDnZgesvdaStridedBatched_bufferSize(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        int[] lwork, 
        int batchSize)
    {
        return checkResult(cusolverDnZgesvdaStridedBatched_bufferSizeNative(handle, jobz, rank, m, n, d_A, lda, strideA, d_S, strideS, d_U, ldu, strideU, d_V, ldv, strideV, lwork, batchSize));
    }
    private static native int cusolverDnZgesvdaStridedBatched_bufferSizeNative(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        int[] lwork, 
        int batchSize);


    public static int cusolverDnSgesvdaStridedBatched(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        Pointer d_work, 
        int lwork, 
        Pointer d_info, 
        Pointer h_R_nrmF, 
        int batchSize)
    {
        return checkResult(cusolverDnSgesvdaStridedBatchedNative(handle, jobz, rank, m, n, d_A, lda, strideA, d_S, strideS, d_U, ldu, strideU, d_V, ldv, strideV, d_work, lwork, d_info, h_R_nrmF, batchSize));
    }
    private static native int cusolverDnSgesvdaStridedBatchedNative(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        Pointer d_work, 
        int lwork, 
        Pointer d_info, 
        Pointer h_R_nrmF, 
        int batchSize);


    public static int cusolverDnDgesvdaStridedBatched(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        Pointer d_work, 
        int lwork, 
        Pointer d_info, 
        Pointer h_R_nrmF, 
        int batchSize)
    {
        return checkResult(cusolverDnDgesvdaStridedBatchedNative(handle, jobz, rank, m, n, d_A, lda, strideA, d_S, strideS, d_U, ldu, strideU, d_V, ldv, strideV, d_work, lwork, d_info, h_R_nrmF, batchSize));
    }
    private static native int cusolverDnDgesvdaStridedBatchedNative(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        Pointer d_work, 
        int lwork, 
        Pointer d_info, 
        Pointer h_R_nrmF, 
        int batchSize);


    public static int cusolverDnCgesvdaStridedBatched(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        Pointer d_work, 
        int lwork, 
        Pointer d_info, 
        Pointer h_R_nrmF, 
        int batchSize)
    {
        return checkResult(cusolverDnCgesvdaStridedBatchedNative(handle, jobz, rank, m, n, d_A, lda, strideA, d_S, strideS, d_U, ldu, strideU, d_V, ldv, strideV, d_work, lwork, d_info, h_R_nrmF, batchSize));
    }
    private static native int cusolverDnCgesvdaStridedBatchedNative(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        Pointer d_work, 
        int lwork, 
        Pointer d_info, 
        Pointer h_R_nrmF, 
        int batchSize);


    public static int cusolverDnZgesvdaStridedBatched(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        Pointer d_work, 
        int lwork, 
        Pointer d_info, 
        Pointer h_R_nrmF, 
        int batchSize)
    {
        return checkResult(cusolverDnZgesvdaStridedBatchedNative(handle, jobz, rank, m, n, d_A, lda, strideA, d_S, strideS, d_U, ldu, strideU, d_V, ldv, strideV, d_work, lwork, d_info, h_R_nrmF, batchSize));
    }
    private static native int cusolverDnZgesvdaStridedBatchedNative(
        cusolverDnHandle handle, 
        int jobz, 
        int rank, 
        int m, 
        int n, 
        Pointer d_A, 
        int lda, 
        long strideA, 
        Pointer d_S, 
        long strideS, 
        Pointer d_U, 
        int ldu, 
        long strideU, 
        Pointer d_V, 
        int ldv, 
        long strideV, 
        Pointer d_work, 
        int lwork, 
        Pointer d_info, 
        Pointer h_R_nrmF, 
        int batchSize);
    

}
