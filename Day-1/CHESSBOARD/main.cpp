#include <iostream>
#include <string>

std::string determineColor(const std::string &s)
{
    if ((s[0] + s[1]) % 2 == 0)
        return "Black";
    return "White";
}