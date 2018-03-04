/* 
 * File:   InsertionSort.cpp
 * Author: jerry
 *
 * Created on March 1, 2018, 1:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

#include "LinkedList.h"

using namespace std;

void insertionSort(node *headref);
void insert(node* headref, node* current);

int main(int argc, char *argv[]) {
    if(argc == 1){
        cout<<"No command line argument given.\n"
                "Please provide the input file name as an argument.\n"
                "Ex: InsersionSort file.txt\n";
        return -1;
    }
    
    LinkedList list;
    ifstream inputFile;
    ofstream outputFile;
    string inputFileName(argv[1]);
    string outputFileName = inputFileName.append("_sorted");
    
    // File input. It reads every line of the argued file into a long, then
    // add it to the list.
    inputFile.open(inputFileName);
    long inputNum;
    while(inputFile >> inputNum)
        list.push(inputNum);
    inputFile.close();
    
    // list.insertionSort();
    
    // File output. It prints every element of list onto its own line
    // in a file named "[inputFileName]_sorted.txt"
    outputFile.open(outputFileName);
    node temp = list.getHead();
    while(temp->next != NULL){
        outputFile<<temp->data<<endl;
        temp = temp->next;
    }
    outputFile.close();
    
    return 0; 
}



