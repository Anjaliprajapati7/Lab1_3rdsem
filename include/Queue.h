#include "Linkedlist.h"

class Queue
{
public:

    virtual void isEmpty() = 0;
    virtual void enqueue(int data) = 0;
    virtual int dequeue() = 0;
};

class LinkedlistQueue : public Queue
{
public:
    virtual void isEmpty()
    {
      list.isEmpty();
    
    }

    virtual void enqueue(int data)
    {
       list.addToTail(data);

    }

    virtual int dequeue()
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


private:
    Linkedlist list;
};