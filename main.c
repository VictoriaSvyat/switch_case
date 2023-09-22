#include <stdio.h>
int main()
{
    float a, b;
    char first_symbol;
    printf("Enter numbers: \n");
    scanf("%f %f", &a, &b);
    printf("Enter operation (+, -, *, /): \n");
    scanf(" %c", &first_symbol);
    if ((b != 0) && (first_symbol == '/'))
    {
        printf("Their division = %f\n", a/b);
    }
    else
    {
        if ((b == 0) && (first_symbol == '/'))
        {
            printf("ERROR\n");
        } 
        else
        {
            switch (first_symbol)
            {
                case '+': 
                    printf("Their sum = %f\n", a+b);
                    break;
                case '-': 
                    printf("Their razn = %f\n", a-b);
                    break;
                case '*': 
                    printf("Their multi = %f\n", a*b);
                    break;
                default: printf(":(\n");
            }
    return 0;
        }
    }
}