#include <stdio.h>

int main()
{
        int i, sum = 0;
        int a[5];
        int max , min;
        
        for(i = 0; i < 5; i++)
        {
                printf("enter number %d : ", i);
                scanf("%d", &a[i]);
                
        }
        max = a[0];
        min = a[0];
        printf("Numbers you entred : ");
        for(i = 0; i < 5; i++)
        {
                printf("%d ", a[i]);
        }
        printf("\n");
        for(i = 0; i < 5; i++)
        {
                sum += a[i];
                if (a[i] > max)
                {
                        max = a[i];
                }
                if (a[i] < min)
                {
                        min = a[i];
                }
        }
        printf("sum = %d\n", sum);
        printf("max = %d\n", max);
        printf("min = %d\n", min);
        return 0;
}