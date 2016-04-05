#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class ctr{

public:
	void Datain();
	void Dataout();
	void InsertSort(int* array, int size);
	void swap(int* array, int x, int y);

private:
	int n, c, weight,total;

	fstream fin;
	vector<int>cow;

};
