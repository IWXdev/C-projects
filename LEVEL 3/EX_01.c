#include <stdio.h>

void not_nig()
{
        int size;
        printf("enter size your arr  : ");
        scanf("%d", &size);
        while(size <= 0)
        {
                printf("arr not found trye again  : ");
                scanf("%d", &size);
        }
        int arr[size];
        int a;
        a = 0;
        int o[size];
        int b;
        b = 0;
        while(a < size)
        {
                printf("Enter element [%d] : ", a);
                scanf("%d", &arr[a]);
                if(arr[a] >= 0)
                {
                        o[b] = arr[a];
                        b++;
                }
                a++;
        }
        for(int j = 0; j < b; j++)
        {
                printf("%d ", o[j]);
        }
        printf("\n");
}

void not_pos()
{
        int size;
        printf("enter size your arr  : ");
        scanf("%d", &size);
        while(size <= 0)
        {
                printf("arr not found trye again  : ");
                scanf("%d", &size);
        }
        int arr[size];
        int a;
        a = 0;
        int o[size];
        int b;
        b = 0;
        while(a < size)
        {
                printf("Enter element [%d] : ", a);
                scanf("%d", &arr[a]);
                if(arr[a] < 0)
                {
                        o[b] = arr[a];
                        b++;
                }
                a++;
        }
        for(int j = 0; j < b; j++)
        {
                printf("%d ", o[j]);
        }
        printf("\n");
}
int main()
{
        
        printf("This function prints only the positive numbers from the array \n");
        not_nig();
        char h;
        printf("Do you want to Continue Y/n : ");
        scanf(" %c", &h);
        if(h == 'N' || h == 'n')
        {
                return 0;
        }
        else if(h == 'Y' || h == 'y')
        {
                printf("Now, conversely, we will print only negative numbers from the array \n");
                not_pos();
        }
        return 0;
}
