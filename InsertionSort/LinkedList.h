/* 
 * File:   LinkedList.h
 * Author: jerry
 *
 * Created on March 1, 2018, 1:59 PM
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct node {
    long data;
    node* next;
};

class LinkedList {
public:
    LinkedList();
    
    void push(long data);
    void insert(int position, long data);
    void delete_pos(int position);
    void delete_val(long data);
    node getHead();
    void print();
    void insertionSort();
private:
    void insertionSort(node* head_ref, node* new_node);
    node *head, *tail;
};

#endif /* LINKEDLIST_H */

