#include <stdio.h>
int main ()
{
    int arr [5];
    int i, sum = 0;
    double avg;

    arr [0] = 5;
    arr [1] = arr [0] + 5;
    arr [2] = arr [1] + 5;
    arr [3] = arr [2] + arr [0];
    arr [4] = 25;

//int arr[5] = {5,10,15};
    for (i = 0 ; i<5; i++ )
    {
        printf("\n%d element of array is %d\n", i+1, arr [i]);
        sum += arr [i];
    }
    avg = (double)sum / 5 ;
    printf ("\nThe average of the sum of %d %d %d %d %d  is %lf \n", arr [0],arr [1],arr [2],arr [3],arr [4],avg);
    return 0;
}
