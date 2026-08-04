#include <iostream>
#include <string>

std::string determine_color(std::string s){
    if ((s[0] + s[1]) % 2 == 0)
        return "Black";
    return "White";
} 
