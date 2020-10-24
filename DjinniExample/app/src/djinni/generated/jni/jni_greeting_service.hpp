// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from greeting.djinni

#pragma once

#include "greeting_service.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class JNIGreetingService final : ::djinni::JniInterface<::GreetingService, JNIGreetingService> {
public:
    using CppType = std::shared_ptr<::GreetingService>;
    using CppOptType = std::shared_ptr<::GreetingService>;
    using JniType = jobject;

    using Boxed = JNIGreetingService;

    ~JNIGreetingService();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<JNIGreetingService>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<JNIGreetingService>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    JNIGreetingService();
    friend ::djinni::JniClass<JNIGreetingService>;
    friend ::djinni::JniInterface<::GreetingService, JNIGreetingService>;

};

}  // namespace djinni_generated