#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "comma_parser.h"

int main()
{
    std::ifstream myTransactions;
    myTransactions.open("transactions.csv");
    std::vector<std::string> csvVector;
    commaParser(myTransactions, csvVector);
    std::reverse(csvVector.begin(), csvVector.end());
    for(auto element : csvVector)
    {
        std::cout << element << std::endl;
    }
    return 0;
}
