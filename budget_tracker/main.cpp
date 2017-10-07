#include <iostream>
// #include "transaction.h"
#include <fstream>
#include <string>
#include <vector>
#include "comma_parser.h"


int main()
{
    std::ifstream myTransactions;
    myTransactions.open("transactions.csv");
    std::vector<std::string> csvVector;
    commaParser(myTransactions, csvVector);
    for(auto element : csvVector)
    {
        std::cout << element << std::endl;
    }

    // Transaction trans(myTransactions);
    // Transaction trans2(myTransactions);
    // trans.printTransaction();
    // trans2.printTransaction();

    return 0;
}
