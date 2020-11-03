#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sec;
    int Hours;
    int Minutes;
    int Seconds;

    printf("Input seconds: ");
    scanf("%d", &sec);

    Hours = (sec/3600);
    Minutes = (sec - (3600*Hours))/60;
    Seconds = (sec - (3600*Hours)-(Minutes*60));

    printf("Hours - %d\n",Hours);
    printf("Minutes - %d\n",Minutes);
    printf("Seconds - %d\n",Seconds);

    return 0;
}
