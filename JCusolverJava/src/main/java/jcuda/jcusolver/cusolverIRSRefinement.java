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

public class cusolverIRSRefinement
{
    public static final int CUSOLVER_IRS_REFINE_NOT_SET = 1100;
    public static final int CUSOLVER_IRS_REFINE_NONE = 1101;
    public static final int CUSOLVER_IRS_REFINE_CLASSICAL = 1102;
    public static final int CUSOLVER_IRS_REFINE_CLASSICAL_GMRES = 1103;
    public static final int CUSOLVER_IRS_REFINE_GMRES = 1104;
    public static final int CUSOLVER_IRS_REFINE_GMRES_GMRES = 1105;
    public static final int CUSOLVER_IRS_REFINE_GMRES_NOPCOND = 1106;
    public static final int CUSOLVER_PREC_DD = 1150;
    public static final int CUSOLVER_PREC_SS = 1151;
    public static final int CUSOLVER_PREC_SHT = 1152;

    /**
     * Private constructor to prevent instantiation
     */
    private cusolverIRSRefinement()
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
            case CUSOLVER_IRS_REFINE_NOT_SET: return "CUSOLVER_IRS_REFINE_NOT_SET";
            case CUSOLVER_IRS_REFINE_NONE: return "CUSOLVER_IRS_REFINE_NONE";
            case CUSOLVER_IRS_REFINE_CLASSICAL: return "CUSOLVER_IRS_REFINE_CLASSICAL";
            case CUSOLVER_IRS_REFINE_CLASSICAL_GMRES: return "CUSOLVER_IRS_REFINE_CLASSICAL_GMRES";
            case CUSOLVER_IRS_REFINE_GMRES: return "CUSOLVER_IRS_REFINE_GMRES";
            case CUSOLVER_IRS_REFINE_GMRES_GMRES: return "CUSOLVER_IRS_REFINE_GMRES_GMRES";
            case CUSOLVER_IRS_REFINE_GMRES_NOPCOND: return "CUSOLVER_IRS_REFINE_GMRES_NOPCOND";
            case CUSOLVER_PREC_DD: return "CUSOLVER_PREC_DD";
            case CUSOLVER_PREC_SS: return "CUSOLVER_PREC_SS";
            case CUSOLVER_PREC_SHT: return "CUSOLVER_PREC_SHT";
        }
        return "INVALID cusolverIRSRefinement: "+n;
    }
}

