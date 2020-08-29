#include <stdio.h>

int main ()
{

    int arr [5];
  //int arr[] = {5,10,15};
    int i, sum = 0;
    double avg;

    arr [0] = 7;
    arr [1] = 10;
    arr [2] = 15;
    arr [3] = 20;
    arr [4] = 25;
//*/
//int arr[] = {5,10,15};

    for (i = 0 ; i<5; i++ )
    {
        sum += arr [i];
    }

    avg = (double)sum / 5 ;
    //avg = sum / 5.0 ;

    printf ("\n The average of the sum of %d %d %d %d %d  is %lf.\n", arr [0],arr [1],arr [2],arr [3],arr [4],avg);

    return 0;

}
