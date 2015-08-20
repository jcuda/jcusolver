/*
 * JCuda - Java bindings for CUDA
 *
 * http://www.jcuda.org
 */

package jcuda.jcusolver;

import static org.junit.Assert.assertTrue;

import org.junit.Test;

/**
 * Basic test of the bindings of the JCusolverDn, 
 * JCusolverSp and JCusolverRf classes
 */
public class JCusolverBasicBindingTest
{
    public static void main(String[] args)
    {
        JCusolverBasicBindingTest test = new JCusolverBasicBindingTest();
        test.testJCusolverDn();
        test.testJCusolverSp();
        test.testJCusolverRf();
    }

    @Test
    public void testJCusolverDn()
    {
        assertTrue(BasicBindingTest.testBinding(JCusolverDn.class));
    }
    
    @Test
    public void testJCusolverSp()
    {
        assertTrue(BasicBindingTest.testBinding(JCusolverSp.class));
    }

    @Test
    public void testJCusolverRf()
    {
        assertTrue(BasicBindingTest.testBinding(JCusolverRf.class));
    }

}
