#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end) {
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main() {
  int n;
  cin >> n;
  if(n >= 1 && n <= 100000){
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
      if (arr[i] == 0) {
        reverse(arr, 0, i - 1);
      }
    }
    printArray(arr, n);
  }
  return 0;
}