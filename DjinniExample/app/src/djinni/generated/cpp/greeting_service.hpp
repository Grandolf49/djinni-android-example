// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from greeting.djinni

#pragma once

#include <memory>
#include <string>

class GreetingService {
public:
    virtual ~GreetingService() {}

    static std::shared_ptr<GreetingService> create_service();

    virtual std::string greet(const std::string & who) = 0;
};