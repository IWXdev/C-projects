#include <stdio.h>

int main()
{
        int r;
        int c;
        printf("enter rows your matrix : ");
        scanf("%d", &r);
        while(r <= 0 || r > 5)
        {
                printf("error!! enter rows your matrix : ");
                scanf("%d", &r);
        }
        printf("enter cols your matrix : ");
        scanf("%d", &c);
        while(c <= 0 || c > 5)
        {
                printf("error!! enter cols your matrix : ");
                scanf("%d", &c);
        }
        int matrix[r][c];
        int a = 0;
        int b;
        int j;
        int temp;
        while(a < r)
        {
                b = 0;
                j = c - 1;
                while(b < c)
                {
                        printf("enter element [%d][%d] : ", a, b);
                        scanf("%d", &matrix[a][b]);
                        b++;
                }
                b = 0;
                while(b < j)
                {
                        temp = matrix[a][b];
                        matrix[a][b] = matrix[a][j];
                        matrix[a][j] = temp;
                        b++;
                        j--;
                }
                a++;
        }
        a = 0;
        while(a < r)
        {
                for(int i = 0; i < c; i++)
                {
                        printf(" %d", matrix[a][i]);
                }
                printf("\n");
                a++;
        }
        return 0;
}