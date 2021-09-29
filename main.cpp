#include <iostream>
#include "func.h"

int main() {
    unsigned number;
    std::cout << "Enter number: ";
    number = getValue();
    std:: cout << getRimNumber(number) << std::endl;
    return 0;
}
