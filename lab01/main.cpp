#include <iostream>
#include "include/zamenitel3000.h"

int main()
{
    std::string input;
    std::cout << "enter text: ";
    std::cin  >> input;

    std::cout << "result: " << zamenitel3000(input) << std::endl;
    return 0;
}
