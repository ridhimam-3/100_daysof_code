#include <stdio.h>
int main()
 {
    float percentage;
    printf("Enter the percentage (0-100): ");
    if (scanf("%f", &percentage) != 1)
     {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }
    if (percentage < 0.0 || percentage > 100.0)
     {
        printf("Error: Percentage must be between 0 and 100.\n");
    } 
  
     else if (percentage >= 90.0)
      {
        printf("Grade: A\n");
    } 
    else if (percentage >= 80.0) 
    {
        printf("Grade: B\n");
    } 
    else if (percentage >= 70.0)
     {
        printf("Grade: C\n");
    } 
    else if (percentage >= 60.0)
     {
        printf("Grade: D\n");
    } 
    else 
    {
        printf("Grade: F\n");
    }
   return 0;
}
