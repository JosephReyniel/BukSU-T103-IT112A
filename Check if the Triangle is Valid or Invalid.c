#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angle1, angle2, angle3, sum;
    printf("Enter three angles of a triangle: ");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    sum = angle1 + angle2 + angle3;

    if(sum == 180)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is invalid");
    }
    return 0;
}
