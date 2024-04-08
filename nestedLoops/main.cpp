#include <iostream>

using namespace std;

int main()
{
    int i, j;

    for (i = 0; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
             printf("*");
        }
        printf("\n");
    }

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
             printf("*");
        }
        printf("\n");
    }

    return 0;
}
