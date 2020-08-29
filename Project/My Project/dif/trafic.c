#include<stdio.h>
main()
{
    char f[25],t[25];
    int i,k,sf=0,st=0;
    printf("\n      Traffic update\n");
    printf("\n\n  Where are you now: ");
    fflush(stdin);
    scanf("%[^\n]s",f);
    printf("\n  OK. Now say where do you want to go ? ");
    fflush(stdin);
    scanf("%[^\n]s",t);
    for(i=0; f[i]!='\0'; i++)
    {
        sf=(sf+f[i])%10;
    }
    for(i=0; t[i]!='\0'; i++)
    {
        st=(st+t[i])%10;
    }
    k=(srand()/sf)%st;
    switch(k)
    {
    case 1:
        printf("\n There are no delays to report in %s at this moment. Vehicles are moving freely\n in both directions. You can go easily. \n",t);
        break;
    case 2:
        printf("\n A slide traffic has been noticed, but vehicles are moving in both directions.\n You can go.\n");
        break;
    case 3:
        printf("\n On your way, there is so many traffic!! Because of rain water road is flooded\n and jammed. \n");
        break;
    case 4:
        printf("\n This road is under construction. Vehicles are moving very slowly. Road can be\n blocked anytime. \n");
        break;
    case 5:
        printf("\n Traffic is almost at a standstill at %s. \n",f);
        break;
    case 6:
        printf("\n There are no delays to report in %s at this moment.Vehicles are moving. \n",t);
        break;
    case 7:
        printf("\n On your way, large potholes and construction work on the four-lane highway has\n slowed down movement of vehicles. \n");
        break;
    case 8:
        printf("\n There are some delays in %s at this moment. On your way, there are so many potholes. Be careful while moving. \n",t);
        break;
    case 9:
        printf("\n On your way, vehicles are moving slowly. Because of rain water road is flooded.. \n");
        break;
    default:
        printf("\n Road is totally blocked.Because of rain water road is flooded. Traffic is almost\n at a standstill. \n");
    }
}
