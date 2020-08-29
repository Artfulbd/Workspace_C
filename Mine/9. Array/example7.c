#include <stdio.h>

int sum (int, int);
int main ()
{

    int arr[8] = {5,10,15,20,25};

    int result = sum (arr [2],arr [7]);
    printf ("\nThe sum of 3rd and 4th element of the array is: %d",result);
    printf ("\nThe sum of 3rd and 4th element of the array is: %d",sum (arr[2],arr[3]));
    printf ("\n%d", arr[2]);
    return 0;

}

int sum (int a, int b)
{
    int sum1 = a+b;
    a=123;
    return sum1;
}
