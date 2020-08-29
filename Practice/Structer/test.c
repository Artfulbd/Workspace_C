#include<stdio.h>
typedef struct
{
    int age;
    float CGPA;
}nilshagor;

nilshagor hayre_nilshagor()
{
    nilshagor st;
    st.age = 90;
    st.CGPA = 4.00;
    return st;
}

int main ()
{
    nilshagor nil;
    nil = hayre_nilshagor();
    printf ("\nx= %d, y = %.2f\n", nil.age, nil.CGPA);
    return 0;
}
