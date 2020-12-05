#include <stdio.h>
#include <stdlib.h>

    int main()
{
    int num, sum;
    printf("Input Range Number: ");
    scanf("%d", &num);

    int i;
    for(i = 1; i <= num; i++)
    {
        if((i % 3) == 0)
        {
            continue;
        }
        printf("%d\n", i);
       sum+=i;
        }
     printf("The sum:%d \n",sum);

     return 0;
}

