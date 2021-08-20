#include<iostream>
#include "Linkedlist.h"
using namespace std;

Linkedlist::Linkedlist(){
    head= nullptr;
    tail= nullptr;
}

bool Linkedlist::isEmpty(){
    return head== nullptr && tail == nullptr;
}

void Linkedlist::addToHead(int data){
    Node *newNode = new Node;
    newNode->info=data;
    newNode->next=head;
    head=newNode;
        if (tail==nullptr){
            tail=head;
        }
}

void Linkedlist::traverse(char separator){
   
   if (isEmpty())
    {
        std::cout << "List is empty!!\n";
    }
    else
    
    {Node *temp=head;

    while(temp!=nullptr)
    {
        std::cout<<temp->info<<separator;
        temp=temp->next;

    }
    std::cout<<std::endl;
}
}
void Linkedlist::add(int data, Node *predecessor){
    Node *newNode=new Node;
    newNode->info=data;
    newNode->next=predecessor->next;
    predecessor->next=newNode;
}

int Linkedlist::removeFromHead()
{
    if (!this->isEmpty())
    {
        Node *nodeToDelete = head;
        int data = nodeToDelete->info;
        this->head = nodeToDelete->next;

        if (head == nullptr)
        {
            tail = nullptr;
        }

        delete nodeToDelete;

        return data;
    }  
    
}

void Linkedlist::addToTail(int data){
    if(!isEmpty()){
    
    Node *newNode = new Node(data, nullptr);
    
    tail->next=newNode;
    tail=tail->next;
    }
    else
    {
        Node *newNode = new Node(data, nullptr);
        head=tail=newNode;
    }
}

int Linkedlist::removeFromTail(){
    if(!this->isEmpty()){
        Node *nodeToDelete = tail;
        int data = nodeToDelete->info;
        if(head==tail){
            head=tail=nullptr;
        }
        else
        {
        Node *pred=head;
        while(pred->next!=tail)
        {pred=pred->next;}
    tail=pred;
    pred->next=nullptr;
        }
delete nodeToDelete;
return data;
    }
   
}

bool Linkedlist::search(int data){
    Node *temp=head;
    while(temp!=nullptr)
    {
        if(temp->info==data)
        {return true;}
        temp=temp->next;
    }
}
bool Linkedlist::retrieve(int data, Node *&ptr){
  Node *point=head;
    while(point!=nullptr && point->info!=data)
    {
        point=point->next;
    }
    if(point==nullptr)
    {
        ptr=point;
        return 0;
    }
    else{
        ptr=point;
        return true;
    }
}

int Linkedlist::remove(int data)
{
    Node *nodeToDelete=head;
    Node *prev=nullptr;
    if(nodeToDelete!=nullptr && nodeToDelete->info== data)
        {
            this->head=nodeToDelete->next;
            delete nodeToDelete; 
        }
      
    else if(nodeToDelete!=nullptr && nodeToDelete->info!=data)
        {
            while(nodeToDelete->info!=data)
        {
            prev=nodeToDelete;
            nodeToDelete=nodeToDelete->next;
        }
        prev->next=nodeToDelete->next;
        delete nodeToDelete;
        }
    
    else
    {
        if(nodeToDelete==nullptr)
        std::cout<<"List is Empty"<<std::endl;
    }
}



