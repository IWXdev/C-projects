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
        int a = 0, b = 0;
        int sum;
        int result[r];
        while (a < r)
        {
                b = 0;
                sum = 0;
                while(b < c)
                {
                        printf("enter element [%d][%d] : ", a, b);
                        scanf("%d", &matrix[a][b]);
                        sum += matrix[a][b];
                        b++;
                }
                result[a] = sum;
                a++;
        }
        for(int j = 0; j < a; j++)
        {
                printf("Row %d sum = %d\n", j, result[j]);
        }
        return 0;
}