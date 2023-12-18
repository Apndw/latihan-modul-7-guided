#include <iostream>

using namespace std;

void buble_sort(double arr[], int length) {
  int j = 0;
  double temp;
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

void print_array(double arr[], int length) {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << "\t";
  }

  cout << endl;
}

int main() {
  double arr[] = {22.1, 15.3, 8.2, 33.21, 99,99};
  int length = sizeof(arr) / sizeof(arr[0]);

  buble_sort(arr, length);
  print_array(arr, length);

  return 0;
}