#include <stdio.h>

int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;
    
    /*
     * write your line of code here...
     * Remember:
     * - you are not allowed to use a
     * - you are not allowed to modify p
     * - you can only write one statement
     * - you are not allowed to use ,
     * - you are not allowed to code anything else than the line of expected line of code at the expected line
     * - do not remove anything from the initial code (not even the comments)
     * - and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
     */
    *(p + 5) = 98; // This is the line you need to add
    /* ...so that this prints 98\n */
    printf("a[2] = %d\n", a[2]);
    return (0);
}

