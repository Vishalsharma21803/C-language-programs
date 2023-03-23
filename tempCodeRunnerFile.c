#include <stdio.h>
int main()
{
    int n;
    printf("Enter the range of Array : ");
    scanf("%d",&n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nmin is: %d", a[0]);
    printf("\nmax is : %d", a[n - 1]);
    return 0;
}