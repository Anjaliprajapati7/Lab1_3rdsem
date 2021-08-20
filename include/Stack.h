#include "Linkedlist.h"

class Stack
{
public:
    virtual int top()=0;
    virtual void isEmpty() = 0;
    virtual void push(int data) = 0;
    virtual int pop() = 0;
};

class LinkedlistStack : public Stack
{
public:
    virtual void isEmpty()
    {
        if(list.isEmpty()==1)
        {
            std::cout<<"Stack is Empty"<<std::endl;
        }
    }

    virtual void push(int data)
    {
        list.addToHead(data);
    }

    virtual int pop()
    {
        if(!list.isEmpty())
        {
            return list.removeFromHead();
        }
        else
        {
            return list.isEmpty();
        }

    }
    virtual int top()
    {
        return list.get_head();
    }


private:
    Linkedlist list;
};