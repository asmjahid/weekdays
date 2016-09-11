void main()
{
    system("color F1");
    int date,month,year;
    printf("\t------------------------------------------------------\n");
    printf("\t------------------------------------------------------\n");
    printf("\t%c THIS SIMPLE PROJECT IS CREATED BY ASM JAHID %c\n\n\tProject Name : Weekday via Date\n\tProject Type : C\n\n",2,2);
    printf("\t------------------------------------------------------");
    tiime();
    printf("\n\nEnter the year:");
    scanf("%d",&year);
    printf("\nEnter the month:");
    scanf("%d",&month);
    printf("\nEnter the date:");
    scanf("%d",&date);
    day_of_week(date,month,year);
    getch();
}

