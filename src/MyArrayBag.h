/*
Assignment: 3 — ADT Bag (Array-Based)
*/

#ifndef MYARRAYBAG_H
#define MYARRAYBAG_H

#include <iostream>
#include <string>
using namespace std;

class MyArrayBag {
private:
    static const int MAX_SIZE = 20;   // the maximum number of items my bag can cold
    string items[MAX_SIZE];           // this is the array to hold bag items
    int itemCount;                    // This is how many items are in the bag

public:
    MyArrayBag();                     // This is my constructor

    void add(string element);         // this is for adding an item
    bool remove(string element);      // This is for removing the  one occurrence
    bool contains(string element);    // this checks if bag contains the item
    bool isEmpty();                   // This checks if bag is empty
    int  count();                     // this is the total items in bag
    int  findAndRemove(string element);   // this removes all occurrences
    void unionWith(MyArrayBag& other);    // This is for the union with another bag
    void display();                   //  This prints out the bag contents
    int  countOf(string element);     //  this counts frequency of one item
    void printItemCounts();           // this print each unique item with its count
};

#endif // this willl stop the file from gettign reproceesed
