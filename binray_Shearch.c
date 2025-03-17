/* Binary Shearch */

#include <stdio.h>

int binarySerach(int arr[], int size, int target) {
	int left = 0;int right = size - 1;
	while (left <= right) {
		int mid = left + ( right - left)/2 ;
		if (arr[mid] == target) {
			return mid ;
		}else if (arr[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid - 1 ;
		}
	}
    return -1 ;
}
int main() {
	int arr[]={2,4,6,8,10,12,14};
    int size = sizeof(arr)/sizeof(arr[0]);
	int target = 10;
    int result = binarySerach(arr, size, target);
	if (result != -1) {
	 printf(" %2d thet find it in the item  %2d location",target,result);
	}else
     printf(" %d The item not Fend in metrex \n", target);
    return 0;
   
}