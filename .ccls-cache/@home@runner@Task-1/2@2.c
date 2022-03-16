#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *m, *g;
    int i=0,k=0,n=0,kstr=0,count;
    char arr[1001],s;
    m = fopen("matrix_of_incendence181.txt", "r");
    while(!feof(m)){
      if(s=='0' || s=='1') {
        arr[i]=s;
        i++;
      }
      if(kstr==0&&s=='\n'){
        kstr=i;
      }
      fscanf(m, "%c", &s);
    }
    g = fopen("g.dot", "w");
    fprintf(g, "digraph Grah {\n");
    for(k=1;k<=kstr;k++){
      count=0;
      for(n=k;n<=i;n++){
        if(arr[n-1]=='1'){
        if(count>0){
          printf("%d\n",n/(kstr+1)+1);
          fprintf(g, "%d \n",  n/(kstr+1)+1);
          break;
        }
        if(count==0){
          count++;
          printf("%d ",n/(kstr+1)+1);
          fprintf(g, "%d -> ",  n/(kstr+1)+1);
        }
      }
      n+=kstr-1;
      }
    }
    fprintf(g, "}");
    fclose(g);
    return 0;
}
