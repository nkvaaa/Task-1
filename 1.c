// #include <stdio.h>
// #include <math.h>
// #include <malloc.h>
// int convert(int t){
//   int i,d=0,last;
//   for(i=0;t>0;i++){
//     last=t%10;
//     d+=last*pow(2,i);
//     t/=10;
//   }
//   return d;
// }
// int main(){
//   int i, n;
//   printf("количество чисел:\n");
//   scanf("%d",&n);
//   int *arr_two = (int*)malloc(n * sizeof(int));
//   printf("введите числа двоичной системы\n");
//   for (i=0;i<n;i++){
//     scanf("%d",&arr_two[i]);
//   }
//   printf("Множество в двоичной: \n");
//   for (i=0;i<n;i++){
//     printf("%d\n",arr_two[i]);
//   }
//   printf("Множество в десятичной: \n");
//   for (i=0;i<n;i++){
//     printf("%d\n",convert(arr_two[i]));
//   }
//   return 0;
//   free(arr_two);
// }
