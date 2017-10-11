#include <stdio.h>

int getDateValue (int month, int date, int year)
{
        int DateValue;


        if (month <= 2) {
                year = year - 1;
                month = month + 13;
        }
        else {
                month = month + 1;
        }

        DateValue = (1461 * year) / 4 + (153 * month) / 5 + date;

        return (DateValue);
}

int main (void)
{
        int month1;
        int date1, year1;
        int dateVal1, dayCalc, dayof;

        printf("Enter the date (in form MM/DD/YYYY): ");
        scanf("%i/%i/%i", &month1, &date1, &year1);

        dateVal1 = getDateValue (month1, date1, year1);

        dayCalc = dateVal1 - 621049;

        dayof = dayCalc % 7;

        switch (dayof)
        {
                case 0:
                        printf("It was a Sunday\n");
                        break;
                case 1:
                        printf("It was a Monday\n");
                        break;
                case 2:
                        printf("It was a Tuesday\n");
                        break;
                case 3:
                        printf("It was a Wednesday\n");
                        break;
                case 4:
                        printf("It was a Thursday\n");
                        break;
                case 5:
                        printf("It was a Friday\n");
                        break;
                case 6:
                        printf("It was a Saturday\n");
                        break;
        }
        return 0;


}

