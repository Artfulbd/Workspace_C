#include <stdio.h>
void func();
int i=4;          /* Global definition   */

main()
{
    printf ("\ninside main before increment: %d\n", i);
    i++;          /* global variable     */
    printf ("\ninside main after increment: %d\n", i);
    func ();
    printf ("\ninside main after function calling: %d\n", i);
    {
        int i = 199;
        printf ("\ninside main local variable: %d\n", i);
    }
    printf ("\noutside main after bracket: %d\n", i);
}

void func()
{
    printf ("\ninside function before assigning: %d\n", i);
    int i=10;     /* Internal declaration */
    i++;          /* Internal variable    */
    printf ("\ninside function after assignment and increment: %d\n", i);
}

