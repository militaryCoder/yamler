#include <iostream>
#include <string>

#include "yamler.hpp"

int main()
{
    yamler::Value<int> v(2);
    std::cout << v.get<float>() << '\n';
    auto p = yamler::makePair<std::string, int>("str", 1);
    std::cout << p.val().get<int>() << '\n';

    return 0;
}