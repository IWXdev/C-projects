#include <stdio.h>

int main()
{
        int size;
        int max;
        printf("enetr max size : ");
        scanf("%d", &max);
        printf("enetr your arr size : ");
        scanf("%d", &size);
        while(size > max || size <= 0)
        {
                if(size > max)
                {
                        printf("The size must be smaller than %d Try again : ", max);
                }
                else if(size <= 0)
                {
                        printf("The size must be Greater than 0 Try again : ");
                }
                scanf("%d", &size);
        }
        int arr[size];
        int a = 0, b = 0;
        int out[size];
        int pos = 0, nig = 0, ZIRO = 0;
        while(a < size)
        {
                printf("enetr element [%d] : ", a);
                scanf("%d", &arr[a]);
                if(arr[a] > 0)
                {
                        pos++;
                        out[b] = arr[a];
                        b++;
                }
                else if(arr[a] < 0)
                {
                        nig++;
                        out[b] = arr[a];
                        b++;
                }
                else
                {
                        ZIRO++;
                        out[b] = arr[a];
                        b++;
                }
                a++;
        }
        for(int i = 0; i < b; i++)
        {
                printf(" %d ", out[i]);
        }
        printf("\n");
        printf("Number of positive numbers : %d\n", pos);
        printf("Number of negative numbers : %d\n", nig);
        printf("Number of ZIRO numbers : %d\n", ZIRO);
        return 0;
}