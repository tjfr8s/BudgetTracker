#include <iostream>
#include <string>

class Node
{
    private:
        int *m_link;
        int m_number;
    public:
       node(int number): m_link{nullptr}, m_number{number}
       {}
       void setLink(int *newLink)
       {
           link = newLink;
       }
       int*  getLink()
       {
            return link;
       }
};

class LinkedList
{
    private:
        int *headPtr;
    public:
        LinkedList(): headPtr{nullptr} {}
        void addNode(int number);
        {
            if(headPtr = nullptr)
            {
                Node *temp = new Node(number);
                headPtr = temp;
            }
            else
            {
                Node *temp = new Node(number);
                *temp.setLink(headPtr);
                headPtr = temp;
            }
        }
};
