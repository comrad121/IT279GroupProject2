#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

#include "LinkedList.h"

using namespace std;

int main(int argc, char *argv[]) {
    if(argc == 1){
        cout<<"No command line argument given.\n"
                "Please provide the input file name as an argument.\n"
                "Ex: TODO:[Your program's name] file.txt\n";
        return -1;
    }

    ifstream inputFile;
    ofstream outputFile;
    string inputFileName(argv[1]);
    string outputFileName = inputFileName.append("_sorted");
    
    // File input. It reads every line of the argued file into a long, then
    // adds it to the list.
    inputFile.open(inputFileName);
    long inputNum;
    while(inputFile >> inputNum){
		// TODO: add inputNum your array/vector here, ex: list.push(inputNum);
	}
    inputFile.close();
    
    // TODO: run your sorting algorithm here
    
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
