#include <jni.h>
#include <string>
#include <android/log.h>

#define TAG "native-lib"

extern "C"
JNIEXPORT void JNICALL
Java_com_example_myndk_MainActivity_anotherCallJNI(JNIEnv *env, jobject instance) {
    __android_log_print(ANDROID_LOG_INFO, TAG, "anotherCallJNI: called");
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_myndk_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
