  1 #include <stdio.h>
  2
  3 int sumArray(int arr[], int size) {
  4     int sum = 0;
  5     for (int i = 0; i < size; i++) {
  6         sum += arr[i];
  7     }
  8     return sum;
  9 }
 10
 11 int main() {
 12     int size;
 13
 14     printf("Enter the number of elements: ");
 15     scanf("%d", &size);
 16     int data[size];
 17
 18
 19     printf("Enter the array elements:\n");
 20     for (int i = 0; i < size; i++) {
 21         scanf("%d", &data[i]);
 22     }
 23
 24     printf("Sum: %d\n", sumArray(data, size));
 25     return 0;
 26 }
 27
~
~
~
~
