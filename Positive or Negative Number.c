#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
        printf("%d is positive number", num);
    else
        printf("%d is negative number", num);

    return 0;
}
