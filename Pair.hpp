#pragma once

#include "Value.hpp"

namespace yamler
{
    template <typename Key, typename T>
    class Pair : public Expression
    {
    private:
        Key key_;
        Value<T> val_;
    public:
        Pair(Key &&k, T &&v)
            : key_(std::forward<Key>(k)), val_(std::forward<T>(v)) {}
        
        auto val() const -> Value<T>
        {
            return val_;
        }
    };

    template <typename Key, typename Val>
    static auto makePair(Key &&key, Val &&val) -> Pair<Key, Val>
    {
        return Pair<Key, Val>(std::forward<Key>(key), std::forward<Val>(val));
    }
}