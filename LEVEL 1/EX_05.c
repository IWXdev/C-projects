#include <stdio.h>

int main()
{
        int i;
        int a;
        int b;

        i = 1;
        b = 0;
        printf("enetr your number  :  ");
        scanf("%d", &a);
        while(i <= a)
        {
                if(i % 2 == 0)
                {
                        printf("%d\n", i);
                        b++;
                }
                i++;
        }
        printf("Total even numbers =  %d\n", b);
        return 0;
}