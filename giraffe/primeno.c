#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    //int counter = 0;
    int isPrime = true;
    int input = 23;
    //scanf("%d", &input);
    for(int i = sqrt(input) ; i >1; i--)
    {
        printf("%d", i);
        if(input % i == 0)
        {
            isPrime = false;
        }

    }
     if (isPrime)
    {
        printf("\n IS PRIME");
    }else{
    printf("\n not a prime");

    }
    //printf(" the number of prime nos is %d", counter);
    return 0;
}
