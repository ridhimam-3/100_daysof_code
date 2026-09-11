#include <stdio.h>
#include <math.h>
int main() 
{
    float p, r, t, si, ci,total;

    printf("Enter the Principal amount: ");
    scanf("%f", &p);

    printf("Enter the Rate of interest (in %%): ");
    scanf("%f", &r);

    printf("Enter the Time period (in years): ");
    scanf("%f", &t);
    
    si= (p * r * t) / 100;
    total= p * pow((1 + r / 100), t);
    ci= total- p;

    printf("Principal Amount: %.2f\n", p);
    printf("Simple Interest:  %.2f\n", si);
    printf("Compound Interest: %.2f\n", ci);
    printf("Total Amount (CI): %.2f\n", total);

    return 0;
}
