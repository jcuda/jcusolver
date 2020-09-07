/*
 * JCusolver - Java bindings for CUSOLVER, the NVIDIA CUDA solver
 * library, to be used with JCuda
 *
 * Copyright (c) 2010-2020 Marco Hutter - http://www.jcuda.org
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

public class cusolverStatus
{
    public static final int CUSOLVER_STATUS_SUCCESS = 0;
    public static final int CUSOLVER_STATUS_NOT_INITIALIZED = 1;
    public static final int CUSOLVER_STATUS_ALLOC_FAILED = 2;
    public static final int CUSOLVER_STATUS_INVALID_VALUE = 3;
    public static final int CUSOLVER_STATUS_ARCH_MISMATCH = 4;
    public static final int CUSOLVER_STATUS_MAPPING_ERROR = 5;
    public static final int CUSOLVER_STATUS_EXECUTION_FAILED = 6;
    public static final int CUSOLVER_STATUS_INTERNAL_ERROR = 7;
    public static final int CUSOLVER_STATUS_MATRIX_TYPE_NOT_SUPPORTED = 8;
    public static final int CUSOLVER_STATUS_NOT_SUPPORTED = 9;
    public static final int CUSOLVER_STATUS_ZERO_PIVOT = 10;
    public static final int CUSOLVER_STATUS_INVALID_LICENSE = 11;
    public static final int CUSOLVER_STATUS_IRS_PARAMS_NOT_INITIALIZED = 12;
    public static final int CUSOLVER_STATUS_IRS_PARAMS_INVALID = 13;
    public static final int CUSOLVER_STATUS_IRS_PARAMS_INVALID_PREC = 14;
    public static final int CUSOLVER_STATUS_IRS_PARAMS_INVALID_REFINE = 15;
    public static final int CUSOLVER_STATUS_IRS_PARAMS_INVALID_MAXITER = 16;
    public static final int CUSOLVER_STATUS_IRS_INTERNAL_ERROR = 20;
    public static final int CUSOLVER_STATUS_IRS_NOT_SUPPORTED = 21;
    public static final int CUSOLVER_STATUS_IRS_OUT_OF_RANGE = 22;
    public static final int CUSOLVER_STATUS_IRS_NRHS_NOT_SUPPORTED_FOR_REFINE_GMRES = 23;
    public static final int CUSOLVER_STATUS_IRS_INFOS_NOT_INITIALIZED = 25;
    public static final int CUSOLVER_STATUS_IRS_INFOS_NOT_DESTROYED = 26;
    public static final int CUSOLVER_STATUS_IRS_MATRIX_SINGULAR = 30;
    public static final int CUSOLVER_STATUS_INVALID_WORKSPACE = 31;

    /**
     * Private constructor to prevent instantiation
     */
    private cusolverStatus()
    {
        // Private constructor to prevent instantiation
    }

    /**
     * Returns a string representation of the given constant
     *
     * @return A string representation of the given constant
     */
    public static String stringFor(int n)
    {
        switch (n)
        {
            case CUSOLVER_STATUS_SUCCESS: return "CUSOLVER_STATUS_SUCCESS";
            case CUSOLVER_STATUS_NOT_INITIALIZED: return "CUSOLVER_STATUS_NOT_INITIALIZED";
            case CUSOLVER_STATUS_ALLOC_FAILED: return "CUSOLVER_STATUS_ALLOC_FAILED";
            case CUSOLVER_STATUS_INVALID_VALUE: return "CUSOLVER_STATUS_INVALID_VALUE";
            case CUSOLVER_STATUS_ARCH_MISMATCH: return "CUSOLVER_STATUS_ARCH_MISMATCH";
            case CUSOLVER_STATUS_MAPPING_ERROR: return "CUSOLVER_STATUS_MAPPING_ERROR";
            case CUSOLVER_STATUS_EXECUTION_FAILED: return "CUSOLVER_STATUS_EXECUTION_FAILED";
            case CUSOLVER_STATUS_INTERNAL_ERROR: return "CUSOLVER_STATUS_INTERNAL_ERROR";
            case CUSOLVER_STATUS_MATRIX_TYPE_NOT_SUPPORTED: return "CUSOLVER_STATUS_MATRIX_TYPE_NOT_SUPPORTED";
            case CUSOLVER_STATUS_NOT_SUPPORTED: return "CUSOLVER_STATUS_NOT_SUPPORTED";
            case CUSOLVER_STATUS_ZERO_PIVOT: return "CUSOLVER_STATUS_ZERO_PIVOT";
            case CUSOLVER_STATUS_INVALID_LICENSE: return "CUSOLVER_STATUS_INVALID_LICENSE";
            case CUSOLVER_STATUS_IRS_PARAMS_NOT_INITIALIZED: return "CUSOLVER_STATUS_IRS_PARAMS_NOT_INITIALIZED";
            case CUSOLVER_STATUS_IRS_PARAMS_INVALID: return "CUSOLVER_STATUS_IRS_PARAMS_INVALID";
            case CUSOLVER_STATUS_IRS_PARAMS_INVALID_PREC: return "CUSOLVER_STATUS_IRS_PARAMS_INVALID_PREC";
            case CUSOLVER_STATUS_IRS_PARAMS_INVALID_REFINE: return "CUSOLVER_STATUS_IRS_PARAMS_INVALID_REFINE";
            case CUSOLVER_STATUS_IRS_PARAMS_INVALID_MAXITER: return "CUSOLVER_STATUS_IRS_PARAMS_INVALID_MAXITER";
            case CUSOLVER_STATUS_IRS_INTERNAL_ERROR: return "CUSOLVER_STATUS_IRS_INTERNAL_ERROR";
            case CUSOLVER_STATUS_IRS_NOT_SUPPORTED: return "CUSOLVER_STATUS_IRS_NOT_SUPPORTED";
            case CUSOLVER_STATUS_IRS_OUT_OF_RANGE: return "CUSOLVER_STATUS_IRS_OUT_OF_RANGE";
            case CUSOLVER_STATUS_IRS_NRHS_NOT_SUPPORTED_FOR_REFINE_GMRES: return "CUSOLVER_STATUS_IRS_NRHS_NOT_SUPPORTED_FOR_REFINE_GMRES";
            case CUSOLVER_STATUS_IRS_INFOS_NOT_INITIALIZED: return "CUSOLVER_STATUS_IRS_INFOS_NOT_INITIALIZED";
            case CUSOLVER_STATUS_IRS_INFOS_NOT_DESTROYED: return "CUSOLVER_STATUS_IRS_INFOS_NOT_DESTROYED";
            case CUSOLVER_STATUS_IRS_MATRIX_SINGULAR: return "CUSOLVER_STATUS_IRS_MATRIX_SINGULAR";
            case CUSOLVER_STATUS_INVALID_WORKSPACE: return "CUSOLVER_STATUS_INVALID_WORKSPACE";
        }
        return "INVALID cusolverStatus: "+n;
    }
}

