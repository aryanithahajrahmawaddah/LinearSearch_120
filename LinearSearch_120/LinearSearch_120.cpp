#include <iostream>
using namespace std;

int arr[20];		// Array to be searched
int n;				// Number of elements in the array
int i;				// Index of array element


void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	// Accept array elements
	cout << "\n------------------\n";
	cout << " Enter array elements ";
	cout << "----------------------";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr;					// Number of comparision

	do
	{
		// Accept the number to be scared
		cout << "\nEnter the elemen you want to search: ";		// Langkah no 1 Algoritma
		int item;
		cin >> item;
		
		ctr = 0;
		for (i = 0; i < n; i++)									// Langkah no 2 & 3 & 4 Algoritma
		{
			ctr++;
			if (arr[i] == item)									// Langkah no 5 Algoritma
			{
				cout << "\n" << item << "found at position " << (i + 1) << endl;
				break;
			}
		}


		