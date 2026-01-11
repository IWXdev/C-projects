#include <stdio.h>

int main()
{
        int x = 42;
        int *p = &x;

        printf("this is x value : %d\n", x);
        printf("this is *p value : %d\n", *p);
        printf("this is x address : %p\n", &x);
        printf("this is p address : %p\n", p);
        return 0;
}