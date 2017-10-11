#include <stdio.h>

struct time {
        int seconds;
        int minutes;
        int hours;
};

struct unitMod {
        int ownUnits;
        int upperUnits;
};

struct time elapsed_time(struct time t1, struct time t2)
{
        struct unitMod calculate_difference(int, int);
        struct time result, gt, lt;
        struct unitMod upperSeconds, upperMinutes;
        if(t1.hours > t2.hours){
                gt = t1;
                lt = t2;
                        }
        else{
                gt = t2;
                lt = t1;
        }

        upperSeconds = calculate_difference(gt.seconds, lt.seconds);
        upperMinutes = calculate_difference(gt.minutes, lt.minutes);

        printf("%i --- %i --- %i \n", gt.hours, lt.hours, gt.hours - lt.hours);

        result = (struct time) {
                upperSeconds.ownUnits,
                upperMinutes.ownUnits - upperSeconds.upperUnits,
                gt.hours - lt.hours - upperMinutes.upperUnits
        };

        return result;
}


struct unitMod calculate_difference(int s1, int s2)
{
        int remainder = s1 - s2;

        if(remainder < 0)
                return (struct unitMod) { 60 + remainder, 1};
        else
                return (struct unitMod) { remainder, 0};
}

int main (void)
{
        struct time t1 = {15,45,3}, t2 = {3,44,9}, diff = elapsed_time(t1,t2);

        printf("h:%i m:%i s:%i\n", diff.hours, diff.minutes, diff.seconds);

}
