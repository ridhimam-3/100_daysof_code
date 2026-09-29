#include <stdio.h>
int main() 
{
    double s1, s2, s3;
    printf("Enter the lengths of the three sides of the triangle:\n");
    if (scanf("%lf %lf %lf", &s1, &s2, &s3) != 3)
     {
        printf("Invalid input. Please enter numbers.\n");
        return 1;
    }
    if (s1 <= 0 || s2 <= 0 || s3 <= 0) 
    {
        printf("Not a valid triangle.\n");
    }
    else if ((s1 + s2 <= s3) || (s1 + s3 <= s2) || (s2 + s3 <= s1)) {
        printf("The given sides do not form a valid triangle.\n");
    } 
    else
     {
        if (s1 == s2 && s2 == s3) 
        {          
            printf("The triangle is Equilateral.\n");
        } 
        else if (s1 == s2 || s1 == s3 || s2 == s3) 
        {          
            printf("The triangle is Isosceles.\n");
        } 
        else
         {
    
            printf("The triangle is Scalene.\n");
        }
    }

    return 0;
}
