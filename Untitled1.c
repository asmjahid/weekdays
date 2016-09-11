#include<stdio.h>
#include<math.h>
#include<time.h>
int isdatevalid(int month, int day, int year)
{
    if (day <= 0)
        return 0 ;
    switch( month )
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (day > 31)
            return 0 ;
        else
            return 1 ;
    case 4:
    case 6:
    case 9:
    case 11:
        if (day > 30)
            return 0 ;
        else
            return 1 ;
    case 2:
        if ( day > 29 )
            return 0 ;
        if ( day < 29 )
            return 1 ;
        else return 0 ;
    }
    return 0 ;
}
