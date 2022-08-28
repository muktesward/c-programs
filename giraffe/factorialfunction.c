#include<stdio.h>

int factorial(int number)
{
    int facotrial = 1;

    for (int i = number; i >1; i--)
    {
        facotrial *= i;
        // factorial = factorial * 1
    }
    return facotrial;
}

int main()
{
    int x = 5;
    printf("%d", factorial(x));
    return 0;
}
