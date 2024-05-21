#include <iostream>
using namespace std;

void stableSelectionSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++) 
	{
		// Find the minimum element in the unsorted part of the array
		int min = i;
		for (int j = i + 1; j < n; j++)
			if (a[min] > a[j])
				min = j;
		
		// Move the minimum element to its correct position
		int key = a[min];
		while (min > i)
		{
			a[min] = a[min - 1];
			min--;
		}
		a[i] = key;
	}
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
	int a[10], n;
	cout << "Enter the number of elements: ";
	cin >> n;
	cout << "Enter the array elements: ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	stableSelectionSort(a, n);
	cout << "Sorted Array is: ";
	printArray(a, n);
	return 0;
}

// output:
// Enter the number of elements: 3
// Enter the array elements: 2 1 4
// Sorted Array is: 1 2 4 