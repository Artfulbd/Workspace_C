#include <stdio.h>
void main()
{
    int i, j, a, n;

    printf("Enter the number of element in the array of: \n");
    scanf("%d", &n);
    int arr [n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    printf("The numbers arranged in descending order are given below \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    //printf("\t%d\n", arr[3]);
}
