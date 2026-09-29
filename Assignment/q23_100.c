/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
#include <stdio.h>
int main()
{
    int days;
    int fine = 0;
    printf("Enter the number of days late: ");
    if (scanf("%d", &days) != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }

    if (days <= 0) {
        printf("No fine. The book was returned on time!\n");
    } 
    else if (days <= 5)
    {
        fine = days * 2;
        printf("Total Fine: ₹%d\n", fine);
    } 
    else if (days <= 10) 
    {
      
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Total Fine: ₹%d\n", fine);
    } 
    else if (days <= 30) 
    {
       fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Total Fine: ₹%d\n", fine);
    } 
    else
    {
        printf("Fine Status: Membership Cancelled!\n");
    }

    return 0;
}
