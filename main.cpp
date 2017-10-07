#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "comma_parser.h"
#include "transaction.h"


int main()
{
    std::ifstream myTransactions;
    myTransactions.open("transactions_short.csv");
    std::vector<std::string> csvVector;
    commaParser(myTransactions, csvVector);
    // for(auto element : csvVector)
    // {
    //     std::cout << element << " test " << std::endl;
    // }
    std::reverse(csvVector.begin(), csvVector.end());


    Transaction trans1(csvVector);
    Transaction trans2(csvVector);
    trans1.printTransaction();
    trans2.printTransaction();

    return 0;
}
