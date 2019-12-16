// ReverseIntegerandStoreInVariable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	int n = 1234567;
	cout << "Reverse of " << n << " is " << reverse(n);
	getchar();
	return 0;
}

int reverse(int n) {
	int modn ;
	map<int, int> revmap;
	map<int, int>::iterator itr;
	int ctr = 0, sum = 0;
	if (n <= 0)
		return 0;
	while (n != 0) {
		modn = n % 10;
		n = n / 10;
		revmap.insert({ ctr, modn });
		ctr++;
	}
	
	for (itr = revmap.begin(); itr != revmap.end(); ++itr) {
		int i = 1;
		int tempctr = ctr;
		while (tempctr > 1) {
			i = i * 10;
			tempctr--;
		}
		ctr--;
		
		sum = sum + (itr->second * i);
	}
		
	return sum;
}

