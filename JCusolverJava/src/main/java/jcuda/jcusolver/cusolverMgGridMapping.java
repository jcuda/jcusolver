/*
 * JCusolver - Java bindings for CUSOLVER, the NVIDIA CUDA solver
 * library, to be used with JCuda
 *
 * Copyright (c) 2010-2017 Marco Hutter - http://www.jcuda.org
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
 * eief This enum decides how 1D device Ids (or process ranks) get mapped to a 2D grid.
 */
public class cusolverMgGridMapping
{
    public static final int CUDALIBMG_GRID_MAPPING_ROW_MAJOR = 1;
    public static final int CUDALIBMG_GRID_MAPPING_COL_MAJOR = 0;

    /**
     * Private constructor to prevent instantiation
     */
    private cusolverMgGridMapping()
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
            case CUDALIBMG_GRID_MAPPING_ROW_MAJOR: return "CUDALIBMG_GRID_MAPPING_ROW_MAJOR";
            case CUDALIBMG_GRID_MAPPING_COL_MAJOR: return "CUDALIBMG_GRID_MAPPING_COL_MAJOR";
        }
        return "INVALID cusolverMgGridMapping: "+n;
    }
}

