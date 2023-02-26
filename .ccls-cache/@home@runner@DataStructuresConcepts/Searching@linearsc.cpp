#include <iostream>
#include <stdio.h>
using namespace std;
int linearsc(int arr[], int len, int target) {
  int i;
  for (i = 0; i < len; i++)
    if (arr[i] == target)
      return i;
  return -1;
}

int main(void) {
  int ary[] = {2, 3, 4, 10, 40};
  int len = sizeof(ary) / sizeof(ary[0]);
  int target = 10;
  int result = linearsc(ary, len, target);
  cout << result;
  return 0;
}
