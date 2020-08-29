// return structure
#include<stdio.h>
struct nilshagor
{
    int age;
    float CGPA;
};

struct nilshagor hayre_nilshagor()
{
    struct nilshagor st;
    st.age = 90;
    st.CGPA = 4.00;
    return st;
}

int main ()
{
    struct nilshagor nil;
    nil = hayre_nilshagor();
    printf ("\nx= %d, y = %.2f\n", nil.age, nil.CGPA);
    return 0;
}
