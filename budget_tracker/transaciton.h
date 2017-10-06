#include <iostream>
#include <fstream>
#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction
{
private:
    int m_date;
    std::string m_description;
    std::string m_transType;
    std::string m_category;
    std::string m_accountName;
public:
    Transaction(std::istream &transIn)
    {};

};

#endif
