// print second rpw of matrix
#include <stdio.h>
int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        int j = 1;
        printf("%d ", mat[j][i]);
    }
    
    return 0;
}