#include <stdio.h>
#include <math.h>
#include<malloc.h>
int convert(int t){
  int i,d=0,last,no=0;
  for(i=0;t>0;i++){
    last=t%10;
    d+=last*pow(2,i);
    t/=10;
  }
  return d;
}
int main(){
  int i, n,no=0,l;
  printf("количество чисел:\n");
  scanf("%d",&n);
  int *arr_two[n]=(int*)malloc(nof(int)*(n+1));
  printf("введите числа двоичной системы\n");
  for (i=0;i<n;i++){
    l=arr_two[i]%10;
    if (l!=0&&l!=1){
      no++;
    }
    scanf("%d",&arr_two[i]);
  }
  if(no!=0){
      printf("Вы неправильно ввели числа");
    }
  else {
    printf("Множество в десятичной:\n");
    for (i=0;i<n;i++){
      printf("%2d",arr_two[i]);
    }
    printf("\nМножество в двоичной:\n);
    for (i=0;i<n;i++){
      printf("%2d",convert(arr_two[i]));
    }
  }
  free(arr_two);
  return 0;
}
  
  
