//
// Created by chinm on 24-10-2020.
//

#include "greeting_service_impl.h"

std::shared_ptr <GreetingService> GreetingService::create_service() {
    return std::make_shared<GreetingServiceImpl>();
}

std::string GreetingServiceImpl::greet(const std::string &who) {
    return "Hello, " + who + "!";
}