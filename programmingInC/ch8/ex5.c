#include <stdio.h>
#include <stdbool.h>

struct time {
        int seconds;
        int minutes;
        int hour;
};

struct date {
        int day;
        int month;
        int year;
};

struct dateAndTime {
        struct time time;
        struct date date;
};

struct time updateTime(struct time now)
{
        ++now.seconds;

        if(now.seconds == 60){
                now.seconds = 0;
                ++now.minutes;
                if(now.minutes == 60){
                        now.minutes = 0;
                        ++now.hour;
                        if(now.hour == 24)
                                now.hour = 0;
                }
        }

        return now;
}

struct date updateDate(struct date now)
{
        struct date tomorrow;
        int numberOfDays(struct date);

        if(now.day != numberOfDays(now))
                tomorrow = (struct date){now.day + 1, now.month, now.year};
        else if(now.month == 12)
                tomorrow = (struct date){1,1,now.year + 1};
        else
                tomorrow = (struct date){1, now.month + 1, now.year};

        return tomorrow;
}

int numberOfDays(struct date date)
{
        int days;
        bool isLeapYear(struct date);
        const int daysPerMonth[12] = 
        {31,28,31,30,31,30,31,31,30,31,30,31};

        if(isLeapYear(date) && date.month == 2)
                days = 29;
        else
                days = daysPerMonth[date.month -1];

        return days;
}

bool isLeapYear(struct date date)
{
        bool leapYearFlag;
        if((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0)
                leapYearFlag = true;
        else 
                leapYearFlag = false;
        return leapYearFlag;
}

struct dateAndTime clockKeeper(struct dateAndTime now)
{
        struct time updateTime(struct time);
        struct date updateDate(struct date);
        struct time updatedTime = updateTime(now.time);
        struct date updatedDate = now.date;

        if(updatedTime.hour == 0)
                updatedDate = updateDate(now.date);

        struct dateAndTime future = {
                updatedTime,
                updatedDate
        };

        return future;
}

int main (void)
{

        struct dateAndTime now = {
                {59,59,23}, {31,12,2009}
        };

        printf("The current dateTime is: %i/%i/%i::%i:%i:%i\n\n", now.date.day, now.date.month, now.date.year, now.time.seconds, now.time.minutes, now.time.hour);

        now = clockKeeper(now);

        printf("The updated dateTime is: %i/%i/%i::%i:%i:%i\n\n", now.date.day, now.date.month, now.date.year, now.time.seconds, now.time.minutes, now.time.hour);

        return 0;
}

