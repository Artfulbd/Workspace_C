#include <stdio.h>
int main ()
{
    int row, column;
   // int arr [3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
int arr [3][4]={{1,2,3},{5,6,7},{9,10,11}};
//int arr [3][4]={1,2,3,4,5,6,7,8,9,10};
//int arr [3][4]={1,2,3,4};
    for (row = 0; row < 3; row++)
    {
        for (column = 0; column < 4; column++)
        {
            printf ("\nElement [%d] [%d] = %d\n", row, column, arr [row][column]);
        }
    }
    return 0;
}
