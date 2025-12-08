#include <stdio.h>

int main()
{
        int m[4][4];
        int n;
        int a;
        int i;
        int x;
        printf("Enter matrix size : ");
        scanf("%d", &n);
        while(n > 4)
        {
                printf("number is big Enter matrix size : ");
                scanf("%d", &n);     
        }
        i = 0;
        x = 0;
        while(i < n)
        {
                a = 0;
                while(a < n)
                {
                        printf("Enter element [%d][%d]: ", i, a);
                        scanf("%d", &m[i][a]);
                        x += m[i][a];
                        a++;
                }
                i++;
        }
        printf("sum = %d\n", x);
        return 0;
}