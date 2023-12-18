#include <iostream>

using namespace std;

void insertion_sort(int arr[], int length) {
  int i, j, tmp;

  for (i = 1; i < length; i++) {
    j = i;

    while (j > 0 && arr[j - 1] > arr[j]) {
      tmp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = tmp;
      j--;
    }
  }
}

void print_array(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << "\t";
  }

  cout << endl;
}

int main() {
  int arr[] = { 5, 2, 4, 6, 1, 3 };
  int length = sizeof(arr) / sizeof(arr[0]);

  insertion_sort(arr, length);
  print_array(arr, length);

  return 0;
}