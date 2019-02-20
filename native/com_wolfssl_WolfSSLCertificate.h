/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wolfssl_WolfSSLCertificate */

#ifndef _Included_com_wolfssl_WolfSSLCertificate
#define _Included_com_wolfssl_WolfSSLCertificate
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    d2i_X509
 * Signature: ([BI)J
 */
JNIEXPORT jlong JNICALL Java_com_wolfssl_WolfSSLCertificate_d2i_1X509
  (JNIEnv *, jclass, jbyteArray, jint);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_der
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1der
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_serial_number
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1serial_1number
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_notBefore
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1notBefore
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_notAfter
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1notAfter
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_version
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1version
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_get_signature
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1get_1signature
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_wolfssl_WolfSSLCertificate
 * Method:    X509_print
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wolfssl_WolfSSLCertificate_X509_1print
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
