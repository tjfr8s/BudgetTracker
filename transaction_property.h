/*
implement template class for transaction properties. will allow class
Transaction to have a single member vector of type TransProp
instead of have multiple member variables of different types
*/
#ifndef TRANSACTION_PROPERTY_H
#define TRANSACTION_PROPERTY_H
#include <iostream>
#include <vector>

class TransPropBase
{
public:
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

    std::vector<std::string> propTypeString{"date", "description", "description0",
    "amount", "trans_type", "category", "account name", "labels", "max prop"};
};

// inherit TransPropBase publicly for use of enum PropType.
template<class T>
class TransProp: public TransPropBase
{
private:
    T m_prop;
    PropType m_type;
public:
    TransProp(T prop, PropType type);


    T getProp() {return m_prop;}
    PropType getType() {return static_cast<PropType>(m_type);}
    std::string getPropTypeString();

    friend std::ostream& operator<<(std::ostream& out, TransProp& prop)
    {
        out << prop.getPropTypeString() << ": " << prop.getProp();
        return out;
    }
};

template<class T>
TransProp<T>::TransProp(T prop, PropType type): m_prop(prop), m_type(type)
{

}

template<class T>
std::string TransProp<T>::getPropTypeString()
{
    return propTypeString[m_type];
}



#endif
