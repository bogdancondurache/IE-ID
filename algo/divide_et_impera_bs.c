#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
	if (r >= l) {
		int mid = l + (r - l)/2;
 
		if (arr[mid] == x)  
			return mid;
 
		if (arr[mid] > x) 
			return binarySearch(arr, l, mid-1, x);
 
		return binarySearch(arr, mid+1, r, x);
	} 
	return -1;
}
 
int main(void) {
	int arr[] = {2, 7, 8, 9, 10, 11, 15, 17, 20, 25};
	int nr_elemente = sizeof(arr) / sizeof(int);
	int x = 2;
	int index = binarySearch(arr, 0, nr_elemente - 1, x);
	(index == -1) ?
	printf("Elementul %d nu este in lista", x) : printf("Elementul este pe pozitia %d", index+1);
	return 0;
}