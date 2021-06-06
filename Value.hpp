#pragma once

#include "Expression.hpp"

namespace yamler
{
    template <typename T>
    class Value : public Expression
    {
    private:
        T val_;
    public:
        Value() = default;
        Value(const Value &other) : val_(other.val_) {}
        Value(T &&v) : val_(std::forward<T>(v)) {}

        template <typename U>
        T get() const
        {
            if constexpr(std::is_convertible<T, U>())  return static_cast<U>(val_);
        }

        ~Value() override = default;
    };
}