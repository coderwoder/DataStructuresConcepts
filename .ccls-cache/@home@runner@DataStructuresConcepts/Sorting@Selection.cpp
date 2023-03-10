// O(n^2) in the worst and average case.
// Not well on large datasets with slow RAM.
// It doesn’t take advantage on case of sorted or partially sorted
#include <iostream>
#include <stdio.h>
using namespace std;
void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}
int main() {
  int arr[] = {10, 100, 23, 32, 14, 12, 21};
  int len = sizeof(arr) / sizeof(arr[0]);
  sort(arr, len);
  cout << "Sorted array: \n";
  printArray(arr, len);
  return 0;
}