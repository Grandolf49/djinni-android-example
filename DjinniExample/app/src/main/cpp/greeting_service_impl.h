//
// Created by chinm on 24-10-2020.
//

#pragma once

#include <memory>
#include <string>
//#include "greeting_service.hpp"
#include "../../djinni/generated/cpp/greeting_service.hpp"

class GreetingServiceImpl : public GreetingService {
public:
    virtual std::string greet(const std::string &who) override;
};
