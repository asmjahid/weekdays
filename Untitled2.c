int fm(int date, int month,int year)
{
    int fmonth,leap;
    if((year%100==0) && (year%400!=0)) leap=0;
    else if(year%4==0) leap=1;
    else
        leap=0;
    fmonth=3+(2-leap)*((month+2)/(2* month))+(5*month+month/9)/2;
}
int day_of_week(int date, int month, int year)
{
    int dow;
    int YY = year % 100;
    int century = year / 100;
    printf("\nDate: %d/%d/%d\n\n",date, month,year);
    dow = 1.25 * YY + fm(date,month, year) + date - 2*( century % 4);
    dow = dow % 7;
    switch (dow)
    {
    case 0:
        printf("WEEKDAY = Saturday");
        break;
    case 1:
        printf("WEEKDAY = Sunday");
        break;
    case 2:
        printf("WEEKDAY = Monday");
        break;
    case 3:
        printf("WEEKDAY = Tuesday");
        break;
    case 4:
        printf("WEEKDAY = Wednesday");
        break;
    case 5:
        printf("WEEKDAY = Thursday");
        break;
    case 6:
        printf("WEEKDAY = Friday");
        break;
    default:
        printf("Incorrect data");
    }
    return 0;
}
