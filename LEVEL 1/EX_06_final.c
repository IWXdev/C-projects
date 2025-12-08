#include <stdio.h>

int main()
{
       int i;
       int x;
       int a;
       int b;
       
       i = 1;
       a = 0;
       b = 0;
       printf("enetr your number : ");
       scanf("%d", &x);
        while(i <= x)
        {
                if(i % 2 == 0)
                {
                        printf("%d is even\n", i);
                        a++;
                }
                else
                {
                        printf("%d is odd\n", i);
                        b++;
                }
                i++;
        }
        printf("Total Even numbers = %d\n", a);
        printf("Total Odd numbers = %d\n", b);
        return 0;
}