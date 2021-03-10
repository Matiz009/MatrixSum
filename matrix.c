#include <stdio.h>
int main() {
int arr[3][3]={{12,34,345},{14,567,55},{34,56,566}};
int brr[3][3]={{11,31,345},{14,527,55},{34,516,566}};
int crr[3][3];
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    /* code */crr[i][j]=arr[i][j]+brr[i][j];

  }

}
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    printf("%7d",crr[i][j] );
  }
  printf("\n");
}
  return 0;
}
