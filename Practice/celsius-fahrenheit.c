#include <stdio.h>
#define CBEGIN 10
#define CLIMIT -5
#define CSTEPC 5
void main()
{
    int celcius;
    double farhenheit;
    printf("Celsius Fahrenheit \n");
    for(celcius=CBEGIN;celcius>=CLIMIT;celcius-=CSTEPC)
    {
        farhenheit=1.8*celcius+32.0;
        printf("%6c%3d%8c%7.2f\n",' ',celcius,' ', farhenheit);
    }
}
