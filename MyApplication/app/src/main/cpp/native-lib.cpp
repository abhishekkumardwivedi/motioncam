#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_abhishek_myapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jboolean JNICALL
Java_com_example_abhishek_myapplication_MainActivity_initTrackingJNI(JNIEnv *env, jobject instance,
                                                                     jobject bitmap,
                                                                     jintArray rectangle_) {
    jint *rectangle = env->GetIntArrayElements(rectangle_, NULL);

    // TODO

    env->ReleaseIntArrayElements(rectangle_, rectangle, 0);
}extern "C"
JNIEXPORT jintArray JNICALL
Java_com_example_abhishek_myapplication_MainActivity_getPositionUpdateJNI(JNIEnv *env,
                                                                          jobject instance,
                                                                          jobject bitmap) {

    // TODO

}extern "C"
JNIEXPORT jboolean JNICALL
Java_com_example_abhishek_myapplication_MainActivity_stopTrackingJNI(JNIEnv *env,
                                                                     jobject instance) {

    // TODO

}