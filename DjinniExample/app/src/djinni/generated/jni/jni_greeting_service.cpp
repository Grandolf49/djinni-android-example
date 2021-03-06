// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from greeting.djinni

#include "jni_greeting_service.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

JNIGreetingService::JNIGreetingService() : ::djinni::JniInterface<::GreetingService, JNIGreetingService>("com/example/djinni/GreetingService$CppProxy") {}

JNIGreetingService::~JNIGreetingService() = default;


CJNIEXPORT void JNICALL Java_com_example_djinni_GreetingService_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::GreetingService>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_example_djinni_GreetingService_00024CppProxy_createService(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::GreetingService::create_service();
        return ::djinni::release(::djinni_generated::JNIGreetingService::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_example_djinni_GreetingService_00024CppProxy_native_1greet(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_who)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::GreetingService>(nativeRef);
        auto r = ref->greet(::djinni::String::toCpp(jniEnv, j_who));
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
