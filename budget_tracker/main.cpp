#include <iostream>
#include "transaction.h"
#include <fstream>

int main()
{
    std::ifstream myTransactions;
    myTransactions.open("transactions.csv");
    Transaction trans(myTransactions);
    Transaction trans2(myTransactions);
    trans.printTransaction();
    trans2.printTransaction();

    return 0;
}
