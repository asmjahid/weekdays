#include <time.h>
void tiime(void)
{
    printf("\n\nCurrent Date && Time is:\n\n\t\t");
    struct tm *ptr;
    time_t lt;
    lt=time(NULL);
    ptr=localtime(&lt);
    printf(asctime(ptr));
}
