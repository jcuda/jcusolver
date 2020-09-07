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

import jcuda.CudaException;
import jcuda.Pointer;

/**
 * Java bindings for CUSOLVER, the NVIDIA CUDA solver library. <br />
 * <br />
 * The documentation is taken from the CUSOLVER header files.
 */
public class JCusolverMg
{
    /* Private constructor to prevent instantiation */
    private JCusolverMg()
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
    
    public static int cusolverMgCreate(
        cusolverMgHandle handle)
    {
        return checkResult(cusolverMgCreateNative(handle));
    }
    private static native int cusolverMgCreateNative(
        cusolverMgHandle handle);


    public static int cusolverMgDestroy(
        cusolverMgHandle handle)
    {
        return checkResult(cusolverMgDestroyNative(handle));
    }
    private static native int cusolverMgDestroyNative(
        cusolverMgHandle handle);


    public static int cusolverMgDeviceSelect(
        cusolverMgHandle handle, 
        int nbDevices, 
        int[] deviceId)
    {
        return checkResult(cusolverMgDeviceSelectNative(handle, nbDevices, deviceId));
    }
    private static native int cusolverMgDeviceSelectNative(
        cusolverMgHandle handle, 
        int nbDevices, 
        int[] deviceId);


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
    public static int cusolverMgCreateDeviceGrid(
        cudaLibMgGrid grid, 
        int numRowDevices, 
        int numColDevices, 
        int[] deviceId, 
        int mapping)
    {
        return checkResult(cusolverMgCreateDeviceGridNative(grid, numRowDevices, numColDevices, deviceId, mapping));
    }
    private static native int cusolverMgCreateDeviceGridNative(
        cudaLibMgGrid grid, 
        int numRowDevices, 
        int numColDevices, 
        int[] deviceId, 
        int mapping);


    /**
     * <pre>
     * Releases the allocated resources related to the distributed grid..
     * @param grid (in) the opaque data strcuture that holds the distributed grid
     * @return the status code
     * </pre>
     */
    public static int cusolverMgDestroyGrid(
        cudaLibMgGrid grid)
    {
        return checkResult(cusolverMgDestroyGridNative(grid));
    }
    private static native int cusolverMgDestroyGridNative(
        cudaLibMgGrid grid);


    /**
     * <pre>
     * Allocates resources related to the distributed matrix descriptor..
     * @param desc (out) the opaque data strcuture that holds the descriptor
     * @param numRows (in) number of total rows
     * @param numCols (in) number of total columns
     * @param rowBlockSize (in) row block size
     * @param colBlockSize (in) column block size
     * @param dataType (in) the data type of each element in cudaDataType
     * @param grid (in) the opaque data structure of the distributed grid
     * @return the status code
     * </pre>
     */
    public static int cusolverMgCreateMatrixDesc(
        cudaLibMgMatrixDesc desc, 
        long numRows, 
        long numCols, 
        long rowBlockSize, 
        long colBlockSize, 
        int dataType, 
        cudaLibMgGrid grid)
    {
        return checkResult(cusolverMgCreateMatrixDescNative(desc, numRows, numCols, rowBlockSize, colBlockSize, dataType, grid));
    }
    private static native int cusolverMgCreateMatrixDescNative(
        cudaLibMgMatrixDesc desc, 
        long numRows, 
        long numCols, 
        long rowBlockSize, 
        long colBlockSize, 
        int dataType, 
        cudaLibMgGrid grid);


    /**
     * <pre>
     * Releases the allocated resources related to the distributed matrix descriptor..
     * @param desc (in) the opaque data strcuture that holds the descriptor
     * @return the status code
     * </pre>
     */
    public static int cusolverMgDestroyMatrixDesc(
        cudaLibMgMatrixDesc desc)
    {
        return checkResult(cusolverMgDestroyMatrixDescNative(desc));
    }
    private static native int cusolverMgDestroyMatrixDescNative(
        cudaLibMgMatrixDesc desc);


    public static int cusolverMgSyevd_bufferSize(
        cusolverMgHandle handle, 
        int jobz, 
        int uplo, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        Pointer W, 
        int dataTypeW, 
        int computeType, 
        int[] lwork)
    {
        return checkResult(cusolverMgSyevd_bufferSizeNative(handle, jobz, uplo, N, array_d_A, IA, JA, descrA, W, dataTypeW, computeType, lwork));
    }
    private static native int cusolverMgSyevd_bufferSizeNative(
        cusolverMgHandle handle, 
        int jobz, 
        int uplo, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        Pointer W, 
        int dataTypeW, 
        int computeType, 
        int[] lwork);


    public static int cusolverMgSyevd(
        cusolverMgHandle handle, 
        int jobz, 
        int uplo, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        Pointer W, 
        int dataTypeW, 
        int computeType, 
        Pointer[] array_d_work, 
        long lwork, 
        Pointer info)
    {
        return checkResult(cusolverMgSyevdNative(handle, jobz, uplo, N, array_d_A, IA, JA, descrA, W, dataTypeW, computeType, array_d_work, lwork, info));
    }
    private static native int cusolverMgSyevdNative(
        cusolverMgHandle handle, 
        int jobz, 
        int uplo, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        Pointer W, 
        int dataTypeW, 
        int computeType, 
        Pointer[] array_d_work, 
        long lwork, 
        Pointer info);


    public static int cusolverMgGetrf_bufferSize(
        cusolverMgHandle handle, 
        int M, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int[][] array_d_IPIV, 
        int computeType, 
        int[] lwork)
    {
        return checkResult(cusolverMgGetrf_bufferSizeNative(handle, M, N, array_d_A, IA, JA, descrA, array_d_IPIV, computeType, lwork));
    }
    private static native int cusolverMgGetrf_bufferSizeNative(
        cusolverMgHandle handle, 
        int M, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int[][] array_d_IPIV, 
        int computeType, 
        int[] lwork);


    public static int cusolverMgGetrf(
        cusolverMgHandle handle, 
        int M, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int[][] array_d_IPIV, 
        int computeType, 
        Pointer[] array_d_work, 
        long lwork, 
        Pointer info)
    {
        return checkResult(cusolverMgGetrfNative(handle, M, N, array_d_A, IA, JA, descrA, array_d_IPIV, computeType, array_d_work, lwork, info));
    }
    private static native int cusolverMgGetrfNative(
        cusolverMgHandle handle, 
        int M, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int[][] array_d_IPIV, 
        int computeType, 
        Pointer[] array_d_work, 
        long lwork, 
        Pointer info);


    public static int cusolverMgGetrs_bufferSize(
        cusolverMgHandle handle, 
        int TRANS, 
        int N, 
        int NRHS, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int[][] array_d_IPIV, 
        Pointer[] array_d_B, 
        int IB, 
        int JB, 
        cudaLibMgMatrixDesc descrB, 
        int computeType, 
        int[] lwork)
    {
        return checkResult(cusolverMgGetrs_bufferSizeNative(handle, TRANS, N, NRHS, array_d_A, IA, JA, descrA, array_d_IPIV, array_d_B, IB, JB, descrB, computeType, lwork));
    }
    private static native int cusolverMgGetrs_bufferSizeNative(
        cusolverMgHandle handle, 
        int TRANS, 
        int N, 
        int NRHS, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int[][] array_d_IPIV, 
        Pointer[] array_d_B, 
        int IB, 
        int JB, 
        cudaLibMgMatrixDesc descrB, 
        int computeType, 
        int[] lwork);


    public static int cusolverMgGetrs(
        cusolverMgHandle handle, 
        int TRANS, 
        int N, 
        int NRHS, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int[][] array_d_IPIV, 
        Pointer[] array_d_B, 
        int IB, 
        int JB, 
        cudaLibMgMatrixDesc descrB, 
        int computeType, 
        Pointer[] array_d_work, 
        long lwork, 
        Pointer info)
    {
        return checkResult(cusolverMgGetrsNative(handle, TRANS, N, NRHS, array_d_A, IA, JA, descrA, array_d_IPIV, array_d_B, IB, JB, descrB, computeType, array_d_work, lwork, info));
    }
    private static native int cusolverMgGetrsNative(
        cusolverMgHandle handle, 
        int TRANS, 
        int N, 
        int NRHS, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int[][] array_d_IPIV, 
        Pointer[] array_d_B, 
        int IB, 
        int JB, 
        cudaLibMgMatrixDesc descrB, 
        int computeType, 
        Pointer[] array_d_work, 
        long lwork, 
        Pointer info);


    public static int cusolverMgPotrf_bufferSize(
        cusolverMgHandle handle, 
        int uplo, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int computeType, 
        int[] lwork)
    {
        return checkResult(cusolverMgPotrf_bufferSizeNative(handle, uplo, N, array_d_A, IA, JA, descrA, computeType, lwork));
    }
    private static native int cusolverMgPotrf_bufferSizeNative(
        cusolverMgHandle handle, 
        int uplo, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int computeType, 
        int[] lwork);


    public static int cusolverMgPotrf(
        cusolverMgHandle handle, 
        int uplo, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int computeType, 
        Pointer[] array_d_work, 
        long lwork, 
        Pointer h_info)
    {
        return checkResult(cusolverMgPotrfNative(handle, uplo, N, array_d_A, IA, JA, descrA, computeType, array_d_work, lwork, h_info));
    }
    private static native int cusolverMgPotrfNative(
        cusolverMgHandle handle, 
        int uplo, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int computeType, 
        Pointer[] array_d_work, 
        long lwork, 
        Pointer h_info);


    public static int cusolverMgPotrs_bufferSize(
        cusolverMgHandle handle, 
        int uplo, 
        int n, 
        int nrhs, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        Pointer[] array_d_B, 
        int IB, 
        int JB, 
        cudaLibMgMatrixDesc descrB, 
        int computeType, 
        int[] lwork)
    {
        return checkResult(cusolverMgPotrs_bufferSizeNative(handle, uplo, n, nrhs, array_d_A, IA, JA, descrA, array_d_B, IB, JB, descrB, computeType, lwork));
    }
    private static native int cusolverMgPotrs_bufferSizeNative(
        cusolverMgHandle handle, 
        int uplo, 
        int n, 
        int nrhs, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        Pointer[] array_d_B, 
        int IB, 
        int JB, 
        cudaLibMgMatrixDesc descrB, 
        int computeType, 
        int[] lwork);


    public static int cusolverMgPotrs(
        cusolverMgHandle handle, 
        int uplo, 
        int n, 
        int nrhs, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        Pointer[] array_d_B, 
        int IB, 
        int JB, 
        cudaLibMgMatrixDesc descrB, 
        int computeType, 
        Pointer[] array_d_work, 
        long lwork, 
        Pointer h_info)
    {
        return checkResult(cusolverMgPotrsNative(handle, uplo, n, nrhs, array_d_A, IA, JA, descrA, array_d_B, IB, JB, descrB, computeType, array_d_work, lwork, h_info));
    }
    private static native int cusolverMgPotrsNative(
        cusolverMgHandle handle, 
        int uplo, 
        int n, 
        int nrhs, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        Pointer[] array_d_B, 
        int IB, 
        int JB, 
        cudaLibMgMatrixDesc descrB, 
        int computeType, 
        Pointer[] array_d_work, 
        long lwork, 
        Pointer h_info);


    public static int cusolverMgPotri_bufferSize(
        cusolverMgHandle handle, 
        int uplo, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int computeType, 
        int[] lwork)
    {
        return checkResult(cusolverMgPotri_bufferSizeNative(handle, uplo, N, array_d_A, IA, JA, descrA, computeType, lwork));
    }
    private static native int cusolverMgPotri_bufferSizeNative(
        cusolverMgHandle handle, 
        int uplo, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int computeType, 
        int[] lwork);


    public static int cusolverMgPotri(
        cusolverMgHandle handle, 
        int uplo, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int computeType, 
        Pointer[] array_d_work, 
        long lwork, 
        Pointer h_info)
    {
        return checkResult(cusolverMgPotriNative(handle, uplo, N, array_d_A, IA, JA, descrA, computeType, array_d_work, lwork, h_info));
    }
    private static native int cusolverMgPotriNative(
        cusolverMgHandle handle, 
        int uplo, 
        int N, 
        Pointer[] array_d_A, 
        int IA, 
        int JA, 
        cudaLibMgMatrixDesc descrA, 
        int computeType, 
        Pointer[] array_d_work, 
        long lwork, 
        Pointer h_info);

}
