#include <stdio.h>

int main()
{
        int m[4][4];
        int n;
        int a, i, x, s, diag_sum;
        printf("Enter matrix size : ");
        scanf("%d", &n);
        while (n < 1 || n > 4)
        {
                printf("Size must be between 1 and 4: ");
                scanf("%d", &n);
        }
        int k[n];
        diag_sum = 0;
        i = 0;
        x = 0;
        s = 0;
        while(i < n)
        {
                a = 0;
                while(a < n)
                {
                        printf("Enter element [%d][%d]: ", i, a);
                        scanf("%d", &m[i][a]);
                        if(i == a)
                        {
                                k[s] = m[i][a];
                                diag_sum += m[i][a];
                                s++;
                        }
                        x += m[i][a];
                        a++;
                }
                i++;
        }
        for (int j = 0; j < s; j++)
        {
                printf("%d ", k[j]);
        }
        printf("\n");
        printf("sum = %d\n", x);
        printf("diag_sum = %d\n", diag_sum);
        return 0;
}