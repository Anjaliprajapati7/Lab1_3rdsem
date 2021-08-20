

#pragma once
#include<iostream>

class Node{
    public:
    int info;
    Node *next;

    Node():next(nullptr){}
    Node(int info,Node *next):info(info),next(next){}

};

class Linkedlist
{
    private:
    Node *head;
    Node *tail;
   

    public:
    Linkedlist();
    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node *predecessor);
    void traverse(char separator= ' ');
    int remove(int data);
    int removeFromTail();
    int removeFromHead();
    bool search(int data);
    bool retrieve(int data, Node *&ptr);
    
    int get_head(){
        return head->info;
    }
};

