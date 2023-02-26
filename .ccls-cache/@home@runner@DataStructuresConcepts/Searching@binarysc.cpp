#include <iostream>
#include <stdio.h>
using namespace std;
int search(int arr[], int len, int target) {
  int l, r,mid;
  while (l<=r) {
    mid=l+r/2;
    if (arr[mid]==target)
      return mid;
    else if (target>arr[mid])
      l=mid+1;
    else
      r=mid-1; //Going back in the array not ++ init
  }
  return -1;
}
int main() { 
  int arr[] = { 2, 3, 4, 10, 40 };
	int target = 10;
	int len = sizeof(arr) / sizeof(arr[0]);
  int result=search(arr,len,target);
  cout<<result;
  return 0;
  }