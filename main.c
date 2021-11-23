#include <stdio.h>
#include <limits.h>
#include "my_mat.h"
#define N 10
int main(){
    char s = 's';
    int mat[N][N];
        while(s != 'D')
        {
            scanf("%c",&s);
             if(s == 'A'){
                 f1(mat);
                 FW(mat);
             }
                else if( s == 'B')f2(mat);
                    else if(s == 'C')f3(mat);   
        }

    return 0;
}