/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class reglib_NativeRegistry */

#ifndef _Included_reglib_NativeRegistry
#define _Included_reglib_NativeRegistry
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     reglib_NativeRegistry
 * Method:    createKey
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_reglib_NativeRegistry_createKey
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     reglib_NativeRegistry
 * Method:    deleteKey
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_reglib_NativeRegistry_deleteKey
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     reglib_NativeRegistry
 * Method:    enumValues
 * Signature: (ILjava/lang/String;)[Ljava/lang/Object;
 */
JNIEXPORT jobjectArray JNICALL Java_reglib_NativeRegistry_enumValues
  (JNIEnv *, jclass, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
