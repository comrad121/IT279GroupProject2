/* 
 * File:   LinkedList.cpp
 * Author: jerry
 * 
 * Created on March 1, 2018, 1:59 PM
 */

#include "LinkedList.h"
#include <iostream>

// #define NULL 0

LinkedList::LinkedList() {
    head = NULL;
    tail = NULL;
    temp = NULL;
    size = 0;
}

void LinkedList::push(long data){
    // Creation of new node
    temp = new node;
    temp->data = data;
    temp->next = NULL;
    
    if(head == NULL){   // if list is empty, new node becomes head and tail
        head = tail = temp;
        head->next = NULL;
    }else{              // otherwise it becomes the tail
        tail->next = temp;
        tail = temp;
        tail->next = NULL;
    }
    size++;
}

long LinkedList::readHead(){
    return head->data;
}

void LinkedList::deleteHead(){
    if(head == NULL){
        head = head->next;
        size--;
    }
}

void LinkedList::print(){
    temp = new node;
    temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<"\n";
        temp = temp->next;
    }
}

int LinkedList::getSize(){
    return size;
}

void LnkedList::insertionSort(){
    if(head == null)
}