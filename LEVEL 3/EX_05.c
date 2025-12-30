#include <stdio.h>

int main()
{
        int size;
        printf("enter size of arr 0 < size <= 10 : ");
        scanf("%d", &size);
        while(size <= 0 || size > 10)
        {
                printf("error enter size of arr : ");
                scanf("%d", &size);     
        }
        int arr[size];
        int a = 0;
        while(a < size)
        {
                printf("enter your element [%d] : ", a);
                scanf("%d", &arr[a]);
                a++;
        }
        int Peaks[size];
        int j = 0;
        for(int b = 1; b < size - 1; b++)
        {
                if(arr[b] > arr[b - 1]  && arr[b] > arr[b + 1] )
                {
                        Peaks[j] = arr[b];
                        j++;
                }
        }
        printf("Peaks : ");
        if (j == 0)
        {
                printf("No peaks found\n");
        }
        else
        {
                for(int i = 0; i < j; i++)
                {
                        printf("%d ", Peaks[i]);
                }
                printf("\n");
        }
        return 0;
}