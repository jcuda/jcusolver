/*
 * JCusolver - Java bindings for CUSOLVER, the NVIDIA CUDA solver
 * library, to be used with JCuda
 *
 * Copyright (c) 2010-2016 Marco Hutter - http://www.jcuda.org
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

/**
 * Ranges for eigen computations
 */
public class cusolverEigRange
{
    
    /**
     * All eigenvalues/eigenvectors will be found     
     */
    public static final int CUSOLVER_EIG_RANGE_ALL = 1001;
    
    /**
     * The il-th through iu-th eigenvalues/eigenvectors will be found
     */
    public static final int CUSOLVER_EIG_RANGE_I = 1002;
    
    /**
     * All eigenvalues/eigenvectors in the half-open interval (vl,vu] will 
     * be found
     */
    public static final int CUSOLVER_EIG_RANGE_V = 1003;

    /**
     * Private constructor to prevent instantiation
     */
    private cusolverEigRange(){}

    /**
     * Returns a string representation of the given constant
     *
     * @return A string representation of the given constant
     */
    public static String stringFor(int n)
    {
        switch (n)
        {
            case CUSOLVER_EIG_RANGE_ALL: return "CUSOLVER_EIG_RANGE_ALL";
            case CUSOLVER_EIG_RANGE_I: return "CUSOLVER_EIG_RANGE_I";
            case CUSOLVER_EIG_RANGE_V: return "CUSOLVER_EIG_RANGE_V";
        }
        return "INVALID cusolverEigRange: "+n;
    }
}

