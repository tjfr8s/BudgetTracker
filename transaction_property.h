/*
implement template class for transaction properties. will allow class
Transaction to have a single member vector of type TransProp
instead of have multiple member variables of different types
*/
#ifndef TRANSACTION_PROPERTY_H
#define TRANSACTION_PROPERTY_H
#include <iostream>
namespace Properties
{
    enum PropType
    {
        DATE,
        DESCRIPTION,
        DESCRIPTION0,
        AMOUNT,
        TRANS_TYPE,
        CATEGORY,
        ACCOUNT_NAME,
        LABELS,
        MAX_PROP_TYPE
    };
}

template<class T>
class TransProp
{
private:
    T m_prop;
    Properties::PropType m_type;
public:
    TransProp(T prop, Properties::PropType type);
    T getProp() {return m_prop;}
    friend std::ostream& operator<<(std::ostream& out, TransProp& prop)
    {
        out << prop.getProp();
        return out;
    }
};

template<class T>
TransProp<T>::TransProp(T prop, Properties::PropType type): m_prop(prop), m_type(type)
{

}



#endif
