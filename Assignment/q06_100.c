#include <stdio.h>
int main()
 {
    int first, second, temp;
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);

    printf("Before swapping: ");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    temp = first;   
    first = second; 
    second = temp;  

    printf("After swapping: ");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);
    return 0;
}
