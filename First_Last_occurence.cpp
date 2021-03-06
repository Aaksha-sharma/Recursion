#include<iostream>
using namespace std;
int first_occ(int arr[], int n, int i, int key)
{
	if (i == n)
	{
		return -1;
	}
	if (arr[i] == key)
	{
		return i;
	}
	return first_occ(arr, n, i + 1, key);
}
int last_occ(int arr[], int n, int i, int key)
{
	if (i == n)
	{
		return -1;
	}
	int rest_Array = last_occ(arr, n, i + 1, key);
	if (rest_Array != -1)
	{
		return rest_Array;
	}
	if (arr[i] == key)
	{
		return i;
	}
	return -1;
}
int main()
{
	int arr[] = {4,2,1,2,5,2,7};
	cout << "First Occurence " << first_occ(arr,7,0,2);
	cout << "Last Occurence " << last_occ(arr,7,0,2);
}