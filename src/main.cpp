#include "Linkedlist.h"
#include "Stack.h"
#include "Queue.h"
int main(){
    
    Linkedlist list;
    list.addToHead(5);
    list.addToHead(23);
    list.addToHead(10);
    list.addToHead(15);

    Node *predecessor=new Node;
    list.add(23, predecessor );

    list.addToTail(2);
    list.addToTail(17);
    list.addToTail(23);
    list.addToHead(45);
    list.addToTail(54);

    list.traverse(',');

    list.removeFromHead();
    
    list.traverse();

    list.removeFromHead();
    
    list.traverse();

    list.removeFromTail();
    
    list.removeFromHead();
    
    list.traverse();
    std::cout<<"Search result"<<std::endl;
    std::cout<<list.search(5)<<std::endl;

    Node *ptr;
    std::cout<<"Retrieve result"<<std::endl;
    std::cout<<list.retrieve(10, ptr)<<std::endl;

    list.traverse();
    std::cout<<"Removing result"<<std::endl;
    list.remove(23);
    list.remove(23);
    list.traverse();

    LinkedlistStack s;
    std::cout<<"Stack implementation in Linkedlist:"<<std::endl;
    s.push(90);
    s.push(45);
    s.push(10);
    std::cout<<"Top element is:"<<std::endl;
    std::cout<<s.top()<<std::endl;

    std::cout<<"Stack:"<<std::endl;
    std::cout << s.pop()<<std::endl;
    std::cout<<s.pop()<<std::endl;
    std::cout<<s.pop()<<std::endl;
    
    LinkedlistQueue q;
    std::cout<<"Queue implementation in Linkedlist:"<<std::endl;
    q.enqueue(45);
    q.enqueue(15);
    q.enqueue(2);

    std::cout << q.dequeue()<<std::endl;
    std::cout<<q.dequeue()<<std::endl;
    std::cout<<q.dequeue()<<std::endl;
}