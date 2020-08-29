#include<stdio.h>
main()
{
    int row,col;
    int arr1[row][col],arr2[row][col];
    printf("Enter no. of rows:");
    scanf("%d",&row);
    printf("Enter no. of columns:");
    scanf("%d",&col);
    //int arr1[row][col],arr2[row][col];
    int i,j;
    //getting value for first array
    for(i=0; i<row ; i++)
    {
        for(j=0; j<col ; j++)
        {
            printf("Enter value at arr1[%d][%d]=",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    //getting value for second array
     for(i=0; i<row ; i++)
    {
        for(j=0; j<col ; j++)
        {
            printf("Enter value at arr2[%d][%d]=",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    //adding them into another array
    for(i=0; i<row; i++)
    {
        for(j=0 ; j<col; j++)
        {
            int ar[i][j];
            ar[i][j]=arr1[i][j]+arr2[i][j];
            printf("Result matrix result[%d][%d]: %d\n",i,j, ar[i][j] );
        }

    }
    char a[]="I love you JAN. umah ummmah umah umahummahh";
    puts(a);

}
