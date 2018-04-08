#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_jni_demo_com_jniddemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
