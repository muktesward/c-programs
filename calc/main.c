#include <stdio.h>
#include <stdlib.h>

bool checking (char c)
{
    char opera[] = {'+','-','*','/'};
    int size = 4;
    for (int i =0; i < size; i++)
    {
        if (c ==  opera[i])
        {
            return false;
        }

    }
    return true;

}

int main()
{
    // declare the variables for number1 number2 andthe operator ans also the result
    // ask the user to give the variables and store it in above variables
    //make switch cases


    int a,b,res;
    char c;
    //char opera[] = {'+','-','*','/'};
    //int size = 4;
    do {
        printf("Enter any of the following operator:+,-,*,/ :");
        scanf(" %c", &c);
    }while ( checking(c));



    printf("Enter the numbers: ");
    scanf("%d%d", &a, &b);


    if (c == '+')
    {
        printf("the result is : %d", a+b);
    }else if ( c == '-')
    {
        printf("the result is : %d", a-b);
    }else if ( c == '*')
    {
        printf("the result is : %d", a*b);
    }else if ( c == '/')
    {
        printf("the result is : %d", a/b);
    }else
    {
        printf("Enter a valid operator");
    }
    return 0;
}
