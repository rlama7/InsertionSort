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