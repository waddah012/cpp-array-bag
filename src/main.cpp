/*
Assignment: 3 — ADT Bag (Array-Based)

compile:  g++ main.cpp MyArrayBag.cpp -o ADTBag
to run: ./ADTBag

The program implents array based bag (ADT) A bag is a container that can hold multiple items
which includes duplicates without caring about its order
The bag in this case is a fixed array with a limit of 20 items
the variable itemcount keeps tract of how many items stored
The MyArrayBag provides functions to
add items
remove occurences
check if an item is present
count items total
union two bags together
display contents or print each unique items
*/

#include "MyArrayBag.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Assignment 3: ADT Bag " << endl << endl;

    MyArrayBag myShoppingBag; // Here i created a empty bag which will set the constrcutor in the cpp file to the count being 0

    myShoppingBag.add("Shampoo"); // This is the grocery bag and here i will add items to it
    myShoppingBag.add("Soup");
    myShoppingBag.add("Milk");
    myShoppingBag.add("Shampoo");
    myShoppingBag.add("Soup");
    myShoppingBag.add("Milk");
    myShoppingBag.add("Milk");
    cout << "myShoppingBag: "; // here i am printing the bag contents
    myShoppingBag.display(); // I am calling the display fucnction which loops through the bags content and arrays and prints them.
    cout << "The Total items in the bag is : " << myShoppingBag.count() << endl;
    cout << "Does it Contains 'Soup'? " << (myShoppingBag.contains("Soup") ? "Yes it does contain Soup" : "No it doesnt contain soup") << endl; // This calls the contain function which loops through the array and checks if the item is there or not
    cout << "Removing one 'Soup'..." << endl;
    myShoppingBag.remove("Soup");
    myShoppingBag.display();

    cout << "Removing all 'Milk'..." << endl;
    int removed = myShoppingBag.findAndRemove("Milk"); // this function removes all the milk in the bag
    cout << "Removed " << removed << " Milk(s)." << endl; // this prints out how many miiks i have remmoved
    myShoppingBag.display(); // bag is updated and shows contents


    myShoppingBag.add("Peanut Butter"); // here we are adding new itemss to the bag for the testing and shows that the bag still works
    myShoppingBag.add("Garlic Bread");
    myShoppingBag.add("Soup");
    myShoppingBag.add("Shampoo");

    cout << "\nItem counts in myShoppingBag:" << endl;
    myShoppingBag.printItemCounts(); // this scans through the bag and print each item with how much of it in the bag

    MyArrayBag newBag; // this is a bag created to test the uniton function and see if it works
    newBag.add("Eggs");
    newBag.add("Juice");
    newBag.add("Bread");
    newBag.add("Cheese");
    newBag.add("Soup");

    cout << "\n In the newBag: "; // This prints the new bag contents, and shows its content.
    newBag.display();

    cout << "Union myShoppingBag with the newBag..." << endl; // here we are calling the union method which loops through the newbag and adds each item into the grocery bags
    myShoppingBag.unionWith(newBag);

    cout << "myShoppingBag after union: "; // This will print each item in the bag and how many time it appears after combiing both bags
    myShoppingBag.display();
    cout << "Total items now: " << myShoppingBag.count() << endl;// this prints out the bag and its content after the union, and prints out the total

    cout << "\nHere is the Item counts after union:" << endl;
    myShoppingBag.printItemCounts(); // This prints out each item in the bag and its count.

    cout << "\nDone." << endl; // this marks the end of the program
    return 0;
}
