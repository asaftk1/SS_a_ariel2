#include <stdio.h>
#include <limits.h>
#include "my_mat.h"
#define N 10



void f1(int mat[N][N]){
   int i, j;
   for(i=0; i<N; i++) {
      for(j=0;j<N;j++) {
        
         scanf("%d", &mat[i][j]);
      }
   }
}
void f2(int mat[N][N]){
       int row, col;

       scanf("%d%d",&row,&col);

         if(mat[row][col] == INT_MAX || row == col )printf("False\n");
            else printf("True\n");        

}
void FW(int mat[N][N]){
    for (int k = 0; k < N; ++k) {
        for (int i = 0; i < N; ++i) {
            if(mat[k][i]==0){
                mat[k][i] = INT_MAX;
            }
        }
    }

    for (int k = 0; k < N; ++k) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (mat[i][j] > mat[i][k] + mat[k][j] && (mat[i][k] + mat[k][j]) > 0){
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
            }
    }
       
}
void f3(int mat[N][N]){
     int row, col,i,j;

       scanf("%d%d",&row,&col);

         if(mat[row][col] == INT_MAX || row == col)printf("-1\n");
            else printf("%d\n",mat[row][col]);  

}
