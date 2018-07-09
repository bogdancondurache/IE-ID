#include <stdio.h>

int sum_array(int arr[], int size)
{
	if (size == 0)
		return 0;
	else if (size == 1)
		return arr[0];

	int mid = size / 2;
	int rsize = size - mid;
	int lsum = sum_array(arr, mid);
	int rsum = sum_array(arr + mid, rsize);
	return lsum + rsum;
}