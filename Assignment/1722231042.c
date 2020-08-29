#include<stdio.h>
struct task
{
    int brief,job;
}soldier[1005];
int main()
{
    int i, n, temp, max;
    struct task hold;
    scanf("%d",&i);
    n = i;
    while(i--)scanf("%d %d", &soldier[i].brief, &soldier[i].job);
    for (i = 1; i < n; i++)
    {
        hold = soldier[i];
        temp = i - 1;
        while (temp >= 0 && soldier[temp].job < hold.job)
        {
            soldier[temp+1] = soldier[temp];
            --temp;
        }
        soldier[temp+1] = hold;
    }
    i = max = temp = 0;
    while(i < n)
    {
        temp += soldier[i].brief;
        max = max < (temp+soldier[i].job) ? (temp+soldier[i].job) : max;
        i++;
    }
    printf("%d",max);
    return 0;
}
