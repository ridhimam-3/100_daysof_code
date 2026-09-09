#include <stdio.h>
int main() 
{
    float num1, num2;
    float sum, diff, prod, quotient;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    printf( "Results:- \n");
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", diff);
    printf("Product: %.2f\n", prod);
    if (num2 != 0)
     {
        quotient = num1 / num2;
        printf("Quotient: %.2f\n", quotient);
    } 
      else
     {
        printf("Quotient Undefined \n");
     }
     return 0;
}
}
