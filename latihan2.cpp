#include <iostream>

using namespace std;

void buble_sort(int arr[], int length) {
  int j = 0, temp;
  bool not_sorted = true;

  while (not_sorted) {
    not_sorted = false;
    j++;

    for (int i = 0; i < length - j; i++) {
      if (arr[i] > arr[i + 1]) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;

        not_sorted = true;
      }
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

  buble_sort(arr, length);
  print_array(arr, length);

  return 0;
}