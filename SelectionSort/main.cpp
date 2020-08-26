//
//  main.cpp
//  SelectionSort
//
//  Created by Antoine Smith on 8/29/19.
//  Copyright © 2019 Antoine Smith. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

template<class ItemType> // Allows the usage multiple of data types.
                        // Furthermore, it has to be right before each function you plan to use it.
void display(ItemType values[], int numValues);


template<class ItemType>
void inline swapItem( ItemType & item1, ItemType & item2)
// Contents of Item1 and Item2 are swapped
{
    ItemType temp;
    temp = item1;
    item1 = item2;
    item2 = temp;
}

template<class ItemType>
int minIndex( ItemType values[], int startIndex, int endIndex)
{
    int indexOfMin = startIndex;
    for(int index = startIndex + 1; index < endIndex; index++)
    {
        if(values[index] < values[indexOfMin])
            indexOfMin = index;
    }
    cout << "minIndex = "<< indexOfMin << endl;
    return indexOfMin;
}

template<class ItemType>
void selectionSort(ItemType values[], int numValues)
{
    int endIndex = numValues - 1;
    for( int current = 0; current < endIndex; current++)
    {
        swapItem(values[current], values[minIndex(values, current, endIndex)]);
        display(values, numValues);
    }
}

template<class ItemType>
void display(ItemType values[], int numValues)
{
    for(int i = 0; i < numValues; i++)
    {
        cout << values[i] << " ";
    }
    cout << endl;
}

int main() {
    // insert code here...
    const int size = 10;
    int array[size] = {2, 9, 8, 4, 7, 3, 1, 5, 6, 10};
    display(array, size);
    selectionSort(array, size);
    display(array, size);
    
    string array2[size] = {"mart", "bart", "cart", "dart", "smart", "start", "brat", "art", "depart", "chart"};
    
    display(array2, size);
    selectionSort(array2, size);
    display(array2, size);
    
    return 0;
}
