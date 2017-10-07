#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <fstream>
#include <vector>

class Transaction
{
private:
    std::string m_date;
    std::string m_description;
    std::string m_descriptionO;
    std::string m_amount;
    std::string m_transType;
    std::string m_category;
    std::string m_accountName;
    std::string m_labels;
    // std::string m_notes;
public:
    Transaction(std::vector<std::string> &csvVect);
    void setDate(std::string date);
    void setDescription(std::string desc);
    void setDescriptionO(std::string descO);
    void setAmount(std::string amount);
    void setTransType(std::string transType);
    void setCategory(std::string category);
    void setAccountName(std::string accountName);
    void setLabels(std::string labels);
    // void setNotes(std::string notes);
    void printTransaction();
};

#endif
