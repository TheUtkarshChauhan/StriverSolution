#include <stdio.h>

#define SWAP(TYPE, A, B) \
  TYPE TMP = A;          \
  A        = B;          \
  B        = TMP;

int
main(int argc, char **argv) {
  int arr[] = { 1, 6, 4, 5, 3, 2 };

  for ( int m = 0; m < sizeof(arr) / sizeof(arr[0]); m++ ) {
    printf("%3d", arr[m]);
  }

  printf("\n");

  int i = sizeof(arr) / sizeof(arr[0]) - 2;
  int j = sizeof(arr) / sizeof(arr[0]) - 2;

  for ( ; i >= 0; i-- ) {
    if ( arr[i] < arr[i + 1] ) {
      break;
    }
  }

  for ( ; j >= 0; j-- ) {
    if ( arr[j] > arr[i] ) {
      SWAP(int, arr[j], arr[i]);
      break;
    }
  }

  for ( int k = i + 1, l = sizeof(arr) / sizeof(arr[0]) - 1; k <= l;
        k++, l-- ) {
    SWAP(int, arr[k], arr[l]);
  }

  for ( int m = 0; m < sizeof(arr) / sizeof(arr[0]); m++ ) {
    printf("%3d", arr[m]);
  }

  return 0;
}