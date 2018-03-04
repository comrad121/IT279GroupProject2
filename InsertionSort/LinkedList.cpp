/* 
 * File:   LinkedList.cpp
 * Author: jerry
 * 
 * Created on March 1, 2018, 1:59 PM
 */

#include "LinkedList.h"
#include <iostream>

#define NULL 0

LinkedList::LinkedList() {
    head = NULL;
    tail = NULL;
}

void LinkedList::push(long data){
    // Creation of new node
    node *temp = new node;
    temp->data = data;
    temp->next = NULL;
            
    if(head == NULL){   // if list is empty, new node becomes head and tail
        head = temp;
        tail = head;
        temp = NULL;
    }else{              // otherwise it becomes the tail
        tail->next = temp;
        tail = temp;
    }
}

node LinkedList::getHead(){
    return *head;
}

void LinkedList::insert(int position, long data){
    
}

void LinkedList::delete_pos(int position){
    
}

void LinkedList::delete_val(long data){
    
}

void LinkedList::print(){
    node *temp = new node;
    temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<"\n";
        temp = temp->next;
    }
}

