#include <iostream>
#include "transaction_property.h"

int main()
{
    int number(7);
    Properties::PropType type = Properties::DATE;
    TransProp<int> test(number, type);
    std::cout << test << std::endl;

    return 0;
}
