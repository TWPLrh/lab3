//This is for lab3 fun ^^;

#include "lab3.h"

void ctr::Datain() {
	
	fin.open("filein");
	cow.clear();
	fin >> c;
	while (fin >> weight) 
		cow.push_back(weight);
}

void ctr::Dataout() {
	
	InsertSort(&cow[0], cow.size());
	for (int i = 0; i <= 4; i++)
		total = cow[i] + total;
	cout << total << endl;
}

void ctr::InsertSort(int* array, int size) {

	for (int i = 1; i < size; i++)
		for (int j = i; j > 0; j--)
			if (array[j] > array[j - 1])
				swap(array, j, j - 1);
}

void ctr::swap(int* array, int x, int y)

{
	int temp = array[x];
	array[x] = array[y];
	array[y] = temp;
}
