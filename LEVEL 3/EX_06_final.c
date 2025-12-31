#include <stdio.h>

int main()
{
        int size;
        printf("enter size 0 < size <= 20 : ");
        scanf("%d", &size);
        while(size <= 0 || size > 20)
        {
                printf("error enter size 0 < size <= 20 : ");
                scanf("%d", &size);
        }
        int arr[size];
        int a = 0;
        int sum = 0;
        int max = arr[a];
        int min = arr[a];
        int positives[size];
        int p = 0;
        int negatives[size];
        int n = 0;
        int zeros[size];
        int z = 0;
        while(a < size)
        {
                printf("neter element [%d] : ", a);
                scanf("%d", &arr[a]);
                sum += arr[a];
                if(a == 0)
                {
                        max = arr[a];
                        min = arr[a];
                }
                else
                {
                        if(max < arr[a])
                        {
                                max = arr[a];
                        }
                        if(min > arr[a])
                        {
                                min = arr[a];
                        }
                }
                if(arr[a] > 0)
                {
                        positives[p] = arr[a];
                        p++;
                }
                else if(arr[a] < 0)
                {
                        negatives[n] = arr[a];
                        n++;
                }
                else
                {
                        zeros[z] = arr[a];
                        z++;
                }
                a++;
        }
        printf("sum : %d\n", sum);
        printf("max : %d\n", max);
        printf("min : %d\n", min);
        printf("positives : ");
        for(int l = 0; l < p; l++)
        {
                printf("%d ", positives[l]);
        }
        printf("\n");
        printf("negatives : ");
        for(int k = 0; k < n; k++)
        {
                printf("%d ", negatives[k]);
        }
        printf("\n");
        printf("zeros : ");
        for(int j = 0; j < z; j++)
        {
                printf("%d ", zeros[j]);
        }
        printf("\n");
        return 0;
}