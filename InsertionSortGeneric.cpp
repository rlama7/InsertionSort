/**
 * @file 			InsertionSortGeneric.cpp
 * @brief 			A program to implement Insert Sort for generic data
 * @param Array		Array to be sorted
 * @param size		size of the Array to be sorted
 * 
 * @algorithm:
 * KeyWord: Sorted Sublist
 * Steps:
 * 1) Consider the first element in the array to be a sorted sublist of length 1
 * 2) Introduc the second element into the sorted sublist, shifting the first element if needed
 * 3) Introduce the third element into the sorted sublist, shifting the other elements as needed
 * 4) Repeat until all values have been sorted into their proper positions in the Array.
 * 
 */
#include <iostream>
#include <string>		// c++ style string
#include <vector>		// vector
using namespace std;

template<typename ItemType>
void InsertionSort(ItemType Array[], int size);

int main() {
	
	string my_Array[7] = {"T", "K", "P", "A", "R", "L", "F"};
	InsertionSort(my_Array, 6);
	for (auto s : my_Array) {
		cout << s << " ";
	}
	cout << "\n--------------------------------------------\n" << endl;
	
	int num[] = {3,5,8,0,9,3,4,2,1,7,6,2};
	InsertionSort(num, 12);
	for (auto n : num) {
		cout << n << " ";
	}
	cout << "\n--------------------------------------------\n" << endl;
	
	string flowers[] = {"Rose", "Jasmine", "Tulip","Lily", "Rhododendron", "Daffodil", "Heather", "Limonium", "Ranunculus", "Dahlia"};
	InsertionSort(flowers, 10);
	for(auto f : flowers) {
		cout << f << " ";
	}
	cout << "\n--------------------------------------------\n" << endl;
	
	return 0;
} // end main

template<typename ItemType>
void InsertionSort(ItemType Array[], int size) {
	for (int unsorted = 1; unsorted < size; unsorted++) {
		ItemType nextItem = Array[unsorted];
		int loc = unsorted;
		
		while ((loc > 0) && (Array[loc-1] > nextItem)) {
			Array[loc] = Array[loc-1];
			loc--;
		}
		Array[loc] = nextItem;
	}
} // end InsertionSort