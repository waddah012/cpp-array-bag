#include "MyArrayBag.h" // we are bringing the class definition from the header file to implement its methods here


MyArrayBag::MyArrayBag() { // This defines the construtor which sets te item count to 0
    itemCount = 0;
}
void MyArrayBag::add(string element) {
    if (itemCount < MAX_SIZE) {  // This adds an item and will replace the last item if the bag is full
        items[itemCount] = element; // this pfunction adds an item to the bag
        itemCount++;
    } else {
        items[itemCount - 1] = element; // this replaces the last item
    }
}

bool MyArrayBag::remove(string element) { // this removes one occurrence of an item from the bag
    for (int i = 0; i < itemCount; i++) {
        if (items[i] == element) { // when found it replaces it with the last item in the bag and decrements the count
            items[i] = items[itemCount - 1];
            itemCount = itemCount - 1;
            return true; // return value if it were to succeed
        }
    }
    return false;
}

bool MyArrayBag::contains(string element) {  // loops throgh the stored items and checks if the item is there
    for (int i = 0; i < itemCount; i++) {
        if (items[i] == element) {
            return true; // if its there itll return true
        }
    }
    return false;
}


bool MyArrayBag::isEmpty() { // if there are no items return true
    return itemCount == 0;
}


int MyArrayBag::count() { // this returns the total number of items in the bag
    return itemCount;
}


int MyArrayBag::findAndRemove(string element) { // this removes all occurences so every copy off lement in the bag
    int removed = 0;
    int i = 0;
    while (i < itemCount) { // The while loop so it doesnt skip elemnts with the last one being moved to its place
        if (items[i] == element) {
            items[i] = items[itemCount - 1];   // keeps moving to the next untill there is a match
            itemCount = itemCount - 1;
            removed = removed + 1;
        } else {
            i= i + 1;
        }
    }
    return removed;
}


void MyArrayBag::unionWith(MyArrayBag& other) { // this function combines both bags with another it will loop through the bags and calls the add for each one
    for (int i = 0; i < other.itemCount; i = i + 1) {
        string currentItem = other.items[i];
        add(currentItem);
    }
}


void MyArrayBag::display() { // This prints the content of the bag and makes it neat and clean
    for (int i = 0; i < itemCount; i = i + 1) {
        cout << items[i];
        if (i < itemCount - 1) cout << ", ";
    }
    cout << endl;
}

int MyArrayBag::countOf(string element) { // this loops through the bag and counts how many times a element apprers.
    int freq = 0;
    for (int i = 0; i < itemCount; i = i + 1) {
        if (items[i] == element) {
            freq= freq + 1;
    }
}
    return freq;
}


void MyArrayBag::printItemCounts() { //This will print each unique item with a count
    bool seen[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i = i + 1) {
        seen[i] = false; // this helps it not print duplicates
    }

    for (int i = 0; i < itemCount; i = i + 1) { // the outer loop picks an item and the inner loop diplicated that item and marks it as seen
        if (seen[i]) continue;
        int freq = 1;
        for (int j = i + 1; j < itemCount; j = j + 1) {
            if (!seen[j] && items[j] == items[i]) {
                freq= freq + 1;
                seen[j] = true;
            }
        }
        cout << items[i] << " : " << freq << endl; // prints out the item and its total coutnt
    }
}
