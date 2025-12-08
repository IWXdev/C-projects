#include <stdio.h>

int main()
{
        int a;
        int x;
        int b;
        a = 1;
        b = 0;
        printf("enetr your number  :  ");
        scanf("%d", &x);
        while(a <= x)
        {
                printf("%d", a);
                b = b + a;
                a++;
        }
        printf("%d\n", b);
        return 0;
}