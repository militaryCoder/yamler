#pragma once

#include <utility>

namespace yamler
{
    class Expression
    {
    public:
        virtual ~Expression() = 0;
    };
    
    Expression::~Expression() {}
}