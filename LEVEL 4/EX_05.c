#include <stdio.h>

void swap(int *a, int *b)
{
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
}
int main()
{
        int x = 3;
        int y = 7;
        swap(&x, &y) ;
        printf("x = %d\n", x);
        printf("y = %d\n", y);
        return 0;
}