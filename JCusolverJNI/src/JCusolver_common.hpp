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

#ifndef JCUSOLVER_COMMON
#define JCUSOLVER_COMMON

#define JCUSOLVER_STATUS_INTERNAL_ERROR (-1)

#include <stdlib.h>
#include <jni.h>
#include <cusolverDn.h>
#include <cusolverSp.h>
#include <cusolverRf.h>

#include "Logger.hpp"
#include "JNIUtils.hpp"
#include "PointerUtils.hpp"

extern jfieldID cuComplex_x; // float
extern jfieldID cuComplex_y; // float

extern jfieldID cuDoubleComplex_x; // double
extern jfieldID cuDoubleComplex_y; // double

// Initialization / release of handles
bool initNative(JNIEnv *env, jobject &handle, cusolverDnHandle_t &handle_native, bool fill);
bool releaseNative(JNIEnv *env, cusolverDnHandle_t &handle_native, jobject &handle, bool writeBack);
bool initNative(JNIEnv *env, jobject &handle, cusolverDnHandle_t* &handle_native, bool fill);
bool releaseNative(JNIEnv *env, cusolverDnHandle_t* &handle_native, jobject &handle, bool writeBack);

// Initialization / release of streams
bool initNative(JNIEnv *env, jobject &stream, cudaStream_t &stream_native, bool fill);
bool releaseNative(JNIEnv *env, cudaStream_t &stream_native, jobject &stream, bool writeBack);
bool initNative(JNIEnv *env, jobject &stream, cudaStream_t* &stream_native, bool fill);
bool releaseNative(JNIEnv *env, cudaStream_t* &stream_native, jobject &stream, bool writeBack);


#endif