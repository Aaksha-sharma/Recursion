#include<iostream>
using namespace std;
bool sort(int arr[], int n)
{
	if (n == 1)
	{
		return true;
	}
	bool rest_array = sort(arr+1, n-1);
	return (arr[0] < arr[1] && rest_array);
}
int main()
{
	int arr[] = { 1,5,3,4,2,6 };
	cout << sort(arr, 6);
}