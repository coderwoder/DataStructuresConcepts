#include <iostream>
#include <stdio.h>
using namespace std;
int search(int arr[], int right, int target) {
  int left = 0, mid;
  while (left <= right) {
    mid = (left + right) / 2;
    if (arr[mid] == target)
      return mid;
    else if (target > arr[mid])
      left = mid + 1;
    else
      right = mid - 1; // Going back in the array not ++ init
  }
  return -1;
}
int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int target = 10;
  int right = sizeof(arr) / sizeof(arr[0]);
  int result = search(arr, right - 1, target);
  cout << result;
  return 0;
}