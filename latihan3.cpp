#include <iostream>

using namespace std;

void select_sort(int arr[], int length) {
  int pos_min, temp;

  for (int i = 0; i < length - 1; i++) {
    pos_min = i;

    for (int j = i + 1; j < length; j++) {
      if (arr[j] < arr[pos_min]) pos_min = j;
    }

    if (pos_min != i) {
      temp = arr[i];
      arr[i] = arr[pos_min];
      arr[pos_min] = temp;
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

  select_sort(arr, length);
  print_array(arr, length);

  return 0;
}