#include <stdio.h>

int main()
{
        int t;
        printf("enter your matrix size max is 10 : ");
        scanf("%d", &t);
        while(t <= 0 || t >= 10)
        {
                printf("Failed enter your matrix size: ");
                scanf("%d", &t);
        }
        int m[t][t];
        int k[t];
        int v;
        int a;
        int b;
        int sum;
        a = 0;
        v = 0;
        sum = 0;
        while(a < t)
        {
                b = 0;
                while(b < t)
                {
                        printf("Enter element [%d][%d]: ", a, b);
                        scanf("%d", &m[a][b]);
                        if(a == 0 || a == t - 1 || b == 0 || b == t - 1)
                        {
                                k[v] = m[a][b];
                                sum += m[a][b];
                                v++;
                        }
                        b++;
                }
                a++;
        }
        for(int j = 0; j < v; j++)
        {
                printf("%d ", k[j]);
        }
        printf("\n");
        printf("TOTAL  : %d \n", sum);
        return 0;
}