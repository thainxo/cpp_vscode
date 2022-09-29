#include <stdio.h>
#include <stdlib.h>
#include <cstring>

#define MAX 200001
 
void swapArr(int arr[], int a, int b)
{
 int tmp = arr[a];
 arr[a] = arr[b];
 arr[b] = tmp;
}
 
void quickSort(int arr[], int start, int end)
{
 if (end - start <= 1) return;
 
 int pivot = arr[start];
 int i = start + 1;
 int j = end - 1;
 int mid = 0;
 
 while (i < j) {
  while ((i < j) && (arr[i] < pivot)) i += 1;
  while ((j > i) && (arr[j] > pivot)) j -= 1;
  if (i < j) {
   swapArr(arr, i, j);
   i += 1; j -= 1;
  }
 }
 if (arr[i] < pivot) mid = i;
 else mid = i - 1;
 
 swapArr(arr, start, mid);
 quickSort(arr, start, mid);
 quickSort(arr, mid + 1, end);
}
 
int main()
{
        int T;
        scanf("%d", &T);
        printf("hello a %d", T);
        return 0;
//  int T;
 
//  scanf("%d", &T);
 
//  while (T > 0) {
//   int N;
//   int result = 1;
//   int light_x[MAX];
//   int light_y[MAX];
 
//   scanf("%d", &N);
 
//   memset(light_x, 0, sizeof(light_x));
//   memset(light_y, 0, sizeof(light_y));
   
//   for (int i = 0; i < N; i++) {
//    scanf("%d %d", &light_x[i], &light_y[i]);
//   }
 
//   quickSort(light_x, 0, N);
//   quickSort(light_y, 0, N);
 
//   int cnt_x = 0, cnt_y = 0;
//   for (int i = 0; i < N; i++) if (((i + 1) == N) || (light_x[i] != light_x[i + 1])) cnt_x++;
//   for (int i = 0; i < N; i++) if (((i + 1) == N) || (light_y[i] != light_y[i + 1])) cnt_y++;
 
//   int is_balanced = (cnt_x * cnt_y == N);
//   if (is_balanced) printf("BALANCED\n");
//   else printf("NOT BALANCED\n");
 
//   T -= 1;
//  }
 
 return 0;
}