#include <string>
#include <algorithm>
#include <iostream>

int main(){
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << str << std::endl;

    return 0;
}
