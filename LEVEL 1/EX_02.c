#include <stdio.h>

int main()
{
        int x;
        int y;

        printf("enter your age ");
        scanf("%d", &x);
        printf("You are %d", x);
        y = x * 365;
        printf(" years old\n");
        printf("Thats about %d", y);
        printf(" days\n");
        return 0;
}
