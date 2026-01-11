#include <stdio.h>

int array_sum(int *arr, int size)
{
        int sum = 0;
        while(size > 0)
        {
                sum += *arr;
                arr++;
                size--;
        }
        return sum;
}

int main()
{
        int arr[5] = {1, 2, 3, 4, 5};
        int s = array_sum(arr, 5);
        printf("The first method \n");
        printf("%d\n", s);

        
        printf("The second method\n");
        int size2;
        printf("enter your size : ");
        scanf("%d", &size2);
        int arr2[size2];
        int *p = arr2;
        int i = 0;
        while(i < size2)
        {
                printf("eneter element [%d] : ", i);
                scanf("%d", p);
                p++;
                i++;
        }
        int j = array_sum(arr2, size2);
        printf("%d\n", j);
        return 0;
}