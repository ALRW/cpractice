#include <stdio.h>

struct date 
{
        int month;
        int date;
        int year;
};

int getDateValue (struct date d)
{
        int DateValue;
        int f (int year, int month);
        int g (int month);

        DateValue = (1461 * f(d.year, d.month)) / 4 + (153 * g(d.month)) / 5 + d.date;

        return (DateValue);
}

int f (int year, int month)
{
        if(month <= 2)
                return year - 1;
        else
                return  year;
}

int g(int month)
{
        if(month <= 2)
                return month + 13;
        else
                return month + 1;
}


int main (void)
{
        int month1, month2;
        int date1, date2, year1, year2;
        int dateVal1, dateVal2, dateDiff;
        printf("Enter the older date (in form MM/DD/YYYY): ");
        scanf("%i/%i/%i", &month1, &date1, &year1);
        printf("Enter the newer date (in form MM/DD/YYYY): ");
        scanf("%i/%i/%i", &month2, &date2, &year2);
        dateVal1 = getDateValue ((struct date){month1, date1, year1});
        dateVal2 = getDateValue ((struct date){month2, date2, year2});
        printf("\n\n%i   %i\n\n", dateVal1, dateVal2);
        dateDiff = dateVal2 - dateVal1;
        printf("\nA total of %i days passed between the two dates.", dateDiff);

        return 0;

}

