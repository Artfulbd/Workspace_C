//finding a digit position in an array
#include <stdio.h>
#define NOT_FOUND -1;
int search (int hello[], int, int );
int main ()
{
    int result, find;
    int arr [5]= {5,10,15,20,25};
    printf ("\nEnter the number that you want to find: \n");
    scanf ("%d", &find);
    result = search (arr,find,5);
    printf ("\nResult: %d\n", result);
//printf ("\n%d\n", arr [2]);
    return 0;
}

int search (int hello[], int target, int n)
{
    int i = 0, found = 0, where;
    while (!found && i<n)
    {
        if (hello [i] == target)
        {
            found = 1;
        }
        else
            i++;
    }
    if (found)
        where = i;
    else
        where = NOT_FOUND;
    return where;
// hello [2] = 60;
}
