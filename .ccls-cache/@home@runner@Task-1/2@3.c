// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     FILE *S1, *S2;
//     char mas[1001];
//     char s = '~';
//     int i = 0;
//     int len = 0;
//     int wei;
//     int rez1, kol;
//     char rez2;

//     S1 = fopen("S1.txt", "r");
//     while(!feof(S1)){
//         if (len == 0 && s == '\n'){
//             len = i;
//         }
//         if (s == '1' || s == '0'){
//             mas[i] = s;
//             i++;
//         }
//         fscanf(S1, "%c", &s);
//     }
//     wei = i/len;



//     for (int j = 1; j <= len; j++){
//         kol = 0;
//         for (int k = j; k <= i; k++){
//             if(mas[k-1] == '1'){
//                 if (kol > 0){
//                     printf("%d\n", k/(len+1)+1);
//                     break;
//                 }
//                 if (kol == 0){
//                     kol++;
//                     printf("%d: ", k/(len+1)+1);
//                 }
//             }
//             k += len-1;
//         }
//     }
    
//     S2 = fopen("S2.dot", "w");
//     fprintf(S2, "digraph Grah {\n");
//     for (int j = 1; j <= len; j++){
//         kol = 0;
//         for (int k = j; k <= i; k++){
//             if(mas[k-1] == '1'){
//                 if (kol > 0){
//                     fprintf(S2, "\"%d\"\n",  k/(len+1)+1);
//                     break;
//                 }
//                 if (kol == 0){
//                     kol++;
//                     fprintf(S2, "\"%d\"-> ",  k/(len+1)+1);
//                 }
//             }
//             k += len-1;
//         }
//     }
//     fprintf(S2, "}");
//     fclose(S2);

//     return 0; 
// }   