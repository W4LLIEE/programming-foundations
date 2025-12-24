#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
}time;

void timeDiff(time *diffTime, time startTime, time endTime) {
       
        int minDec = 0, hrDec = 0;
       
        diffTime->seconds=(endTime.seconds - startTime.seconds);
        diffTime->minutes=(endTime.minutes - startTime.minutes);
        diffTime->hours=(endTime.hours - startTime.hours);
       
       
       
        if (diffTime->seconds < 0) {
            minDec = 1;
            diffTime->seconds = abs(diffTime->seconds);
        }
       
        if (diffTime->minutes < 0) {
            hrDec = 1;
            diffTime->minutes = abs(diffTime->minutes);
        }
       
        if (minDec == 1)
            diffTime->minutes--;
       
        if (hrDec == 1)
            diffTime->hours--;
       
}

int main() {
   
    time startTime;
    time endTime;
    time diffTime;
   
    printf("Enter  the start time in hours, minutes, seconds: \n");
    scanf("%d%d%d", &startTime.hours, &startTime.minutes, &startTime.seconds);
   
    printf("Enter  the end time in hours, minutes, seconds: \n");
    scanf("%d%d%d", &endTime.hours, &endTime.minutes, &endTime.seconds);
   
    timeDiff(&diffTime, startTime, endTime);
   
    printf("Time Difference: %d:%d:%d - %d:%d:%d == %d:%d:%d\n", startTime.hours, startTime.minutes, startTime.seconds, endTime.hours, endTime.minutes, endTime.seconds, diffTime.hours, diffTime.minutes,diffTime.seconds);
   
   
   
   

    return 0;
}