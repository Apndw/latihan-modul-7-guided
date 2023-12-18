#include <iostream>

using namespace std;

void insertion_sort(char arr[], int length) {
  int i, j;
  char temp;

  for (i = 1; i < length; i++) {
    j = i;

    while (j > 0 && arr[j -1] < arr[j]) {
      temp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = temp;
      j--;
    }
  }
}

void print_array(char arr[], int length) {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << "\t";
  }

  cout << endl;
}

int main() {
  char arr[] = {'c', 'f', 'a', 'z', 'd', 'p'};
  int length = sizeof(arr) / sizeof(arr[0]);

  insertion_sort(arr, length);
  print_array(arr, length);

  return 0;
}