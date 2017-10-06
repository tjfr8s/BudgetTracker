#include <iostream>
#include "transaction.h"

Transaction::Transaction(std::ifstream &transIn)
{
    std::string stringVal;
    getline(transIn, stringVal, ',');
    //this->setDate(stringVal);
    getline(transIn, stringVal, ',');
    this->setDescription(stringVal);
    getline(transIn, stringVal, ',');
    this->setDescriptionO(stringVal);
    getline(transIn, stringVal, ',');
    //this->setAmount(stringVal);
    getline(transIn, stringVal, ',');
    this->setTransType(stringVal);
    getline(transIn, stringVal, ',');
    this->setCategory(stringVal);
    getline(transIn, stringVal, ',');
    this->setAccountName(stringVal);
    getline(transIn, stringVal, ',');
    this->setLabels(stringVal);
    getline(transIn, stringVal, ',');
    this->setNotes(stringVal);


}
/*
void Transaction::setDate(int date)
{
    m_date = date;
}
*/
void Transaction::setDescription(std::string desc)
{
    m_description = desc;
}

void Transaction::setDescriptionO(std::string descO)
{
    m_descriptionO = descO;
}
/*
void Transaction::setAmount(int amount)
{
    m_amount = amount;
}
*/
void Transaction::setTransType(std::string transType)
{
    m_transType = transType;
}

void Transaction::setCategory(std::string category)
{
    m_category = category;
}

void Transaction::setAccountName(std::string accountName)
{
    m_accountName = accountName;
}

void Transaction::setLabels(std::string labels)
{
    m_labels = labels;
}

void Transaction::setNotes(std::string notes)
{
    m_notes = notes;
}

void Transaction::printTransaction()
{
    //std::cout << m_date << "\n";
    std::cout << m_description << "\n";
    std::cout << m_descriptionO << "\n";
    //std::cout << m_amount << "\n";
    std::cout << m_transType << "\n";
    std::cout << m_category << "\n";
    std::cout << m_accountName << "\n";
    std::cout << m_labels << "\n";
    std::cout << m_notes << "\n";
}
