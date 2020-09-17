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

public class cusolverPrecType
{
    public static final int CUSOLVER_R_8I = 1201;
    public static final int CUSOLVER_R_8U = 1202;
    public static final int CUSOLVER_R_64F = 1203;
    public static final int CUSOLVER_R_32F = 1204;
    public static final int CUSOLVER_R_16F = 1205;
    public static final int CUSOLVER_R_16BF = 1206;
    public static final int CUSOLVER_R_TF32 = 1207;
    public static final int CUSOLVER_R_AP = 1208;
    public static final int CUSOLVER_C_8I = 1211;
    public static final int CUSOLVER_C_8U = 1212;
    public static final int CUSOLVER_C_64F = 1213;
    public static final int CUSOLVER_C_32F = 1214;
    public static final int CUSOLVER_C_16F = 1215;
    public static final int CUSOLVER_C_16BF = 1216;
    public static final int CUSOLVER_C_TF32 = 1217;
    public static final int CUSOLVER_C_AP = 1218;

    /**
     * Private constructor to prevent instantiation
     */
    private cusolverPrecType()
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
            case CUSOLVER_R_8I: return "CUSOLVER_R_8I";
            case CUSOLVER_R_8U: return "CUSOLVER_R_8U";
            case CUSOLVER_R_64F: return "CUSOLVER_R_64F";
            case CUSOLVER_R_32F: return "CUSOLVER_R_32F";
            case CUSOLVER_R_16F: return "CUSOLVER_R_16F";
            case CUSOLVER_R_16BF: return "CUSOLVER_R_16BF";
            case CUSOLVER_R_TF32: return "CUSOLVER_R_TF32";
            case CUSOLVER_R_AP: return "CUSOLVER_R_AP";
            case CUSOLVER_C_8I: return "CUSOLVER_C_8I";
            case CUSOLVER_C_8U: return "CUSOLVER_C_8U";
            case CUSOLVER_C_64F: return "CUSOLVER_C_64F";
            case CUSOLVER_C_32F: return "CUSOLVER_C_32F";
            case CUSOLVER_C_16F: return "CUSOLVER_C_16F";
            case CUSOLVER_C_16BF: return "CUSOLVER_C_16BF";
            case CUSOLVER_C_TF32: return "CUSOLVER_C_TF32";
            case CUSOLVER_C_AP: return "CUSOLVER_C_AP";
        }
        return "INVALID cusolverPrecType: "+n;
    }
}

