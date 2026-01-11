#include <stdio.h>

int main()
{
        int a = 5;
        int b = 10;
        int *p1 = &a;
        int *p2 = &b;
        int temp = 0;
        printf("a befor : %d\n", a);
        printf("b befor : %d\n", b);
        printf("\n");
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        printf("a after : %d\n", a);
        printf("b after : %d\n", b);
        return 0;

}