#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <fstream>
class Transaction
{
private:
    //int m_date;
    std::string m_description;
    std::string m_descriptionO;
    //int m_amount;
    std::string m_transType;
    std::string m_category;
    std::string m_accountName;
    std::string m_labels;
    std::string m_notes;
public:
    Transaction(std::ifstream &transIn);
    //void setDate(int date);
    void setDescription(std::string desc);
    void setDescriptionO(std::string descO);
    //void setAmount(int amount);
    void setTransType(std::string transType);
    void setCategory(std::string category);
    void setAccountName(std::string accountName);
    void setLabels(std::string labels);
    void setNotes(std::string notes);
    void printTransaction();
};

#endif
