#include <stdio.h>

int main()
{
        int size;
        printf("enter size : ");
        scanf("%d", &size);
        while(size <= 0 || size > 10)
        {
                printf("enter size : ");
                scanf("%d", &size);  
        }
        int arr[size];
        int i = 0;
        int *p = arr;
        int sum = 0;
        while(i < size)
        {
                printf("eneter element [%d] : ", i);
                scanf("%d", p);
                sum += *p;
                p++;
                i++;
        }
        printf("%d\n", sum);
        return 0;
}