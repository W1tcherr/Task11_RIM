#include "func.h"

unsigned getValue()
{
    while(true)
    {
        unsigned int value;
        std::cin >> value;
        if(std::cin.fail() || value > 4000 || value <= 0)
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "\nWrong size, please re-enter.\n";
        }
        else
        {
            return value;
        }
    }
}

std::string getRimNumber(unsigned number)
{
    std::string rimNumber{};
    std::vector<std::pair<int, char const*>> roman {
        { 1000, "M" },{ 900, "CM" }, { 500, "D" },{ 400, "CD"},
        { 100, "C" },{ 90, "XC" }, { 50, "L" },{ 40, "XL"},
        {10, "X" },{9, "IX" }, {5, "V" },{4, "IV"}, { 1, "I" }};

    for(auto const& el: roman)
        while(number >= el.first)
        {
            rimNumber += el.second;
            number -= el.first;
        }

    return rimNumber;
}

