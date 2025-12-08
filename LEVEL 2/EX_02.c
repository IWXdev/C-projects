#include <stdio.h>

int main()
{
        int i;
        char n[10];

        printf("enetr you name  :  ");
        scanf("%s", n);
        printf("enetr tou age  :  ");
        scanf("%d", &i);
        printf("Hello %s You Are %d Years Old\n", n, i);
        return 0;
}