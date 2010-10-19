/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_melloware_jintellitype_JIntellitype */

#ifndef _Included_com_melloware_jintellitype_JIntellitype
#define _Included_com_melloware_jintellitype_JIntellitype
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_melloware_jintellitype_JIntellitype
 * Method:    initializeLibrary
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_melloware_jintellitype_JIntellitype_initializeLibrary
  (JNIEnv *, jobject);

/*
 * Class:     com_melloware_jintellitype_JIntellitype
 * Method:    regHotKey
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_melloware_jintellitype_JIntellitype_regHotKey
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_melloware_jintellitype_JIntellitype
 * Method:    terminate
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_melloware_jintellitype_JIntellitype_terminate
  (JNIEnv *, jobject);

/*
 * Class:     com_melloware_jintellitype_JIntellitype
 * Method:    unregHotKey
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_melloware_jintellitype_JIntellitype_unregHotKey
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_melloware_jintellitype_JIntellitype
 * Method:    isRunning
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_melloware_jintellitype_JIntellitype_isRunning
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
