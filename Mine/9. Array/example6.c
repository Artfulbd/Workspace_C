#include <stdio.h>

void average (int hello [],int );
int main ()
{

    int arr[5] = {5,10,15,20,25};
    average (arr,5); //call by reference
    printf ("\nThe 3rd element of the array  arr[] is %d\n", arr [2]);
    return 0;
}

void average (int hello [], int size )
{
    int i, sum = 0;
    double avg;
    for (i = 0 ; i<size; i++ )
    {
        printf("\n%d element of array is %d\n", i+1, hello [i]);
        sum += hello [i];
    }
    avg = (double)sum / 5 ;
    printf ("\nThe average of the sum of %d %d %d %d %d  is %lf \n", hello [0],hello [1],hello[2],hello [3],hello[4],avg);
    printf ("\nNow we change the value of the third element: hello [2]\n");
    hello[2] = 60 ;
    printf ("\nThe element of the array hello [] is %d %d %d %d %d\n", hello [0],hello [1],hello[2],hello [3],hello[4]);
}
