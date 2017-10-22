#include <jni.h>
#include <string>

#include <dlib/image_processing.h>
#include <dlib/image_io.h>

using namespace dlib;
using namespace std;

extern "C"
JNIEXPORT

jboolean JNICALL
Java_com_example_abhishek_myapplication_MainActivity_initTrackingJNI(JNIEnv *env,
                                                                     jobject instance,
                                                                     jobject bitmap//,
//                                                                     jintArray rectangle_
                                                                     ) {
//    jint *rectangle = env->GetIntArrayElements(rectangle_, NULL);

    // TODO


//    env->ReleaseIntArrayElements(rectangle_, rectangle, 0);
    array2d<unsigned char> img;
    load_image(img, NULL);
    correlation_tracker tracker;
    return false;
}

extern "C"
JNIEXPORT

jintArray JNICALL
Java_com_example_abhishek_myapplication_MainActivity_getPositionUpdateJNI(JNIEnv *env,
                                                                          jobject instance,
                                                                          jobject bitmap) {
    return NULL;
    // TODO

}

extern "C"
JNIEXPORT

jboolean JNICALL
Java_com_example_abhishek_myapplication_MainActivity_stopTrackingJNI(JNIEnv *env,
                                                                     jobject instance) {

    return false;
    // TODO

}