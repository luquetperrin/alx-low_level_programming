#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    char password[12]; // Assuming the password length is 11 characters + null terminator

    srand(time(NULL));

    for (i = 0; i < 11; i++)
    {
        password[i] = rand() % 94 + 33; // Generate random printable ASCII characters
    }
    password[11] = '\0';

    printf("%s", password);

    return 0;
}

