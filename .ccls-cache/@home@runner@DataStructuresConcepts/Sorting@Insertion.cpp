// Insertion sort is used when number of elements is small.
// It can also be useful when input array is almost sorted,
// only few elements are misplaced in complete big array. Bubble ka Optimized
// Ver.

#include <iostream>
#include <stdio.h>
using namespace std;
void sort(int arr[], int n) {
  int i, j;
  int temp; // This to store the value of the element next the imgarinary line
  for (i = 1; i < n; i++) {

    temp =
        arr[i]; // Storing this as iske colour pe color lagne wala hai (value)

    // we are traveling from right to left in the sorted array,
    // and the last elements position of the sorted array will always be i-1.
    j = i - 1; // i = 1 then j = 0

    // Running till j becomes -1 and next iteration starts
    // Also if we find the place in between
    while (j >= 0 && arr[j] > temp) {
      // Shifting the elements, now that we got a gap (Putting value of bajuwala
      // on that element and so on)
      arr[j + 1] = arr[j];
      // Till we start pointing on the element chota than that guy
      // or we become -1
      j--;
    }
    // Now that we traveresed
    // If j = -1 then element would be added on the first (i.e. at 0th)
    // as 1st is now in 2nd and so on ...
    // Similarly if we meet the element that is chota than that guy
    // We know that this is going to point to it(i.e. j = chota)
    // and we want to put it in front of chota (i.e. j+1)
    arr[j + 1] = temp;
  }
}
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