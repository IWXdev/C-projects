#include <stdio.h>


void test()
{
        char star = '*';
        int i;
        int a;
        int b;
        int m;
        printf("Enter pyramid height: ");
        scanf("%d", &b);
        m = b;
        for(i = 0; i < m; i++)
        {
                a = 0;
                while(a < b)
                {
                        printf("%c", star);
                        a++;
                }
                if (b > 1)
                {
                        b--;
                }
                printf("\n");
        }
}

int main()
{
        char star = '*';
        int i;
        int a;
        int b;
        int m;
        b = 1;
        printf("Enter pyramid height : ");
        scanf("%d", &m);
        for(i = 0; i < m; i++)
        {
                a = 0;
                while(a < b)
                {
                        printf("%c", star);
                        a++;
                }
                if (b < m)
                {
                        b++;
                }
                printf("\n");
        }
        test();
        return 0;
}