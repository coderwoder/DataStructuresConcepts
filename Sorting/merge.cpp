// Avg:- O(nlogn)
// Additional memory space of 0(n) for the temporary array.
// Not for Small Task as it 
// Usefull for sorting Linked list as 
// we can insert in the middle in O(1) space and time.

#include <iostream>
#include <stdio.h>
using namespace std;
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() { 
    int arr[] = { 10,100,23,32,14,12,21};
    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, len);
    cout << "Sorted array: \n";
    printArray(arr, len);
    return 0;
  }