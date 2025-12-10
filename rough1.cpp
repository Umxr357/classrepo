#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter number of elements: ";
	cin >> n;

	int A[n];
	cout << "Enter elements:\n";
	for(int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for(int i = 0; i < n-1; i++)
	{
		int minIndex = i;
		for(int j = i+1; j < n; j++)
		{
			if(A[j] < A[minIndex])
			{
				minIndex = j;
			}
		}

		int temp = A[i];
		A[i] = A[minIndex];
		A[minIndex] = temp;
	}

	cout << "Sorted array: ";
	for(int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	return 0;
}