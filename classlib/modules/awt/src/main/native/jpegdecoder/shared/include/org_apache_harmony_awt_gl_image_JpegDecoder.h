/*
 *  Licensed to the Apache Software Foundation (ASF) under one or more
 *  contributor license agreements.  See the NOTICE file distributed with
 *  this work for additional information regarding copyright ownership.
 *  The ASF licenses this file to You under the Apache License, Version 2.0
 *  (the "License"); you may not use this file except in compliance with
 *  the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
/**
 * @author Alexey A. Petrenko
 */
/*
 * THE FILE HAS BEEN AUTOGENERATED BY INTEL IJH TOOL.
 * Please be aware that all changes made to this file manually
 * will be overwritten by the tool if it runs again.
 */

#include <jni.h>


/* Header for class org.apache.harmony.awt.gl.image.JpegDecoder */

#ifndef _ORG_APACHE_HARMONY_AWT_GL_IMAGE_JPEGDECODER_H
#define _ORG_APACHE_HARMONY_AWT_GL_IMAGE_JPEGDECODER_H

#ifdef __cplusplus
extern "C" {
#endif


/* Static final fields */

#undef org_apache_harmony_awt_gl_image_JpegDecoder_BUFFER_SIZE
#define org_apache_harmony_awt_gl_image_JpegDecoder_BUFFER_SIZE 1024L

#undef org_apache_harmony_awt_gl_image_JpegDecoder_JCS_GRAYSCALE
#define org_apache_harmony_awt_gl_image_JpegDecoder_JCS_GRAYSCALE 1L

#undef org_apache_harmony_awt_gl_image_JpegDecoder_JCS_RGB
#define org_apache_harmony_awt_gl_image_JpegDecoder_JCS_RGB 2L

#undef org_apache_harmony_awt_gl_image_JpegDecoder_hintflagsProgressive
#define org_apache_harmony_awt_gl_image_JpegDecoder_hintflagsProgressive 22L

#undef org_apache_harmony_awt_gl_image_JpegDecoder_hintflagsSingle
#define org_apache_harmony_awt_gl_image_JpegDecoder_hintflagsSingle 30L

#undef org_apache_harmony_awt_gl_image_JpegDecoder_MAX_BYTES_IN_SIGNATURE
#define org_apache_harmony_awt_gl_image_JpegDecoder_MAX_BYTES_IN_SIGNATURE 8L


/* Native methods */

/*
 * Method: org.apache.harmony.awt.gl.image.JpegDecoder.decode([BIJ)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL
Java_org_apache_harmony_awt_gl_image_JpegDecoder_decode(JNIEnv *, jobject, 
    jbyteArray, jint, jlong);

/*
 * Method: org.apache.harmony.awt.gl.image.JpegDecoder.releaseNativeDecoder(J)V
 */
JNIEXPORT void JNICALL
Java_org_apache_harmony_awt_gl_image_JpegDecoder_releaseNativeDecoder(JNIEnv *, jclass, 
    jlong);

/*
 * Method: org.apache.harmony.awt.gl.image.JpegDecoder.initIDs()V
 */
JNIEXPORT void JNICALL
Java_org_apache_harmony_awt_gl_image_JpegDecoder_initIDs(JNIEnv *, jclass);


#ifdef __cplusplus
}
#endif

#endif /* _ORG_APACHE_HARMONY_AWT_GL_IMAGE_JPEGDECODER_H */
