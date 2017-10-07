#include "transaction.h"

Transaction::Transaction(std::vector<std::string> &csvVect)
{
    this->setDate(csvVect[csvVect.size() - 1]);
    csvVect.pop_back();
    this->setDescription(csvVect[csvVect.size() - 1]);
    csvVect.pop_back();
    this->setDescriptionO(csvVect[csvVect.size() - 1]);
    csvVect.pop_back();
    this->setAmount(csvVect[csvVect.size() - 1]);
    csvVect.pop_back();
    this->setTransType(csvVect[csvVect.size() - 1]);
    csvVect.pop_back();
    this->setCategory(csvVect[csvVect.size() - 1]);
    csvVect.pop_back();
    this->setAccountName(csvVect[csvVect.size() - 1]);
    csvVect.pop_back();
    this->setLabels(csvVect[csvVect.size() - 1]);
    csvVect.pop_back();
    // this->setNotes(csvVect[csvVect.size() - 1]);
    // csvVect.pop_back();
}

void Transaction::setDate(std::string date)
{
    m_date = date;
}

void Transaction::setDescription(std::string desc)
{
    m_description = desc;
}

void Transaction::setDescriptionO(std::string descO)
{
    m_descriptionO = descO;
}

void Transaction::setAmount(std::string amount)
{
    m_amount = amount;
}

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

// void Transaction::setNotes(std::string notes)
// {
//     m_notes = notes;
// }

void Transaction::printTransaction()
{
    std::cout << m_date << "\n";
    std::cout << m_description << "\n";
    std::cout << m_descriptionO << "\n";
    std::cout << m_amount << "\n";
    std::cout << m_transType << "\n";
    std::cout << m_category << "\n";
    std::cout << m_accountName << "\n";
    std::cout << m_labels << "\n";
    // std::cout << m_notes << "\n";
    std::cout << "end" << std::endl;
}
