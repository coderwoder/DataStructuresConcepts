//Big O of N^2

#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;
void sort(int arr[], int len) {
  // We go on comparing between 2 adjacent and arranging the biggest to the end
  // and then cut it as sorted and so on
  // we arrrange biggest first at its place (i.e. Last)
  int i, j;
  for (i = 0; i < len - 1/*lenght starts from 1*/; i++)
    for (j = 0; j < len - i - 1/*we dont want to compare the last element everytime*/; j++)
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
}
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