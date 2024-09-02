#include<iostream>
using namespace std;
int pivot_finder(int array[], int left, int right)
{
	int pivot = array[right];
	int pivotindex_finder = left;
	for (int i = left; i < right; i++)
	{
		if (array[i] < pivot)
		{
			swap(array[i], array[pivotindex_finder]);
			pivotindex_finder++;
		}
	}
	swap(array[pivotindex_finder], array[right]);
	return pivotindex_finder;
}
void quick_sort(int array[],int left,int right)
{
	if (left < right)
	{
		int pivot = pivot_finder(array, left, right);
		quick_sort(array, left, pivot - 1);
		quick_sort(array, pivot + 1, right);
	}
}
int main()
{
	int array[6] = { 4,6,1,8,3,2 };
	cout << "Unsorted array:-" << endl;
	for (int i : array)
	{
		cout << i << " ";
	}cout << endl;
	quick_sort(array, 0, 5);
	cout << "Sorted array" << endl;
	for (int t : array)
	{
		cout << t << " ";
	}cout << endl;
	return 0;
}