#include <stdio.h>

int main()
{
        int x = 10;
        int *p = &x;
        printf("x befor : %d\n", x);
        *p = 50;
        printf("x after : %d\n", x);
        return 0;
}