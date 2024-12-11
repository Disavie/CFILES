#include <stdio.h>

int main(){


    int hours;
    int minutes;
    printf("Enter 24-hour time: \n");
    scanf("%d:%d",&hours,&minutes);

    if(hours > 12 ){
        hours-=12;
    }
    printf("Time in regular time is %d:%d",hours,minutes);

    return 0;
}
