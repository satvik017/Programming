#include<stdio.h>
#include<conio.h>
#include<string.h>
int DAYS,Year=2020, Month=9, Date=6;
char Mont[3];
void prince(int,int,int,int,int,int,int);

int main()
{
int week ,all_leap ,jan1_day, leap;
printf("100 years of calendar 2000-2099\n");
try:
printf("Enter a year (dd/mm/yyyy)\n");
scanf("%d/%d/%d",&Date, &Month, &Year);

week=Year-2000; //Take only Tens value
all_leap=week/4; //how many leap days we have
leap=week%4;//Year is leap or not
if(leap==0)
week--;
week+=all_leap;//add leap days into week days
jan1_day=week%7;

if(Year<2000||Year>2999)//Year range 2000-2099
{printf("\nEnter year into 2000-2099\n");
goto try;}

if(Month<1||Month>12)//Months 1-12
{printf("\nPlz enter month into 1-12\n");
goto try;}

if((Month==1||Month==3||Month==5||Month==7||Month==8||Month==10||Month==12)&&(Date<1||Date>31))//31 days Months
{printf("\nYou Enter wrong date plz check\n");
goto try;}

if((Month==4||Month==6||Month==9||Month==11)&&(Date<1||Date>30))//30 days Months
{printf("\nYou Enter wrong date plz check\n");
goto try;}

if(Month==2&&leap!=0&&(Date<1||Date>28))//Febrary
{printf("You Enter wrong date plz check\n");
goto try;}

if(Month==2&&leap==0&&(Date<1||Date>29))//Febrary for leap year
{printf("You Enter wrong date plz check\n");
goto try;}

switch(Month){//Converts here month into days

case 1://JANUARY
DAYS=0;
strcpy(Mont,"Jan");
break;

case 2://FEBRARY
DAYS=31;
strcpy(Mont,"Feb");
break;

case 3://MARCH
DAYS=59;
strcpy(Mont,"Mar");
break;

case 4://APRIL
DAYS=90;
strcpy(Mont,"Apr");
break;

case 5://MAY
DAYS=120;
strcpy(Mont,"May");
break;

case 6://JUNE
DAYS=151;
strcpy(Mont,"Jun");
break;

case 7://JULY
DAYS=181;
strcpy(Mont,"Jul");
break;

case 8://AUGUST
DAYS=212;
strcpy(Mont,"Aug");
break;

case 9://SEPTEMBER
DAYS=243;
strcpy(Mont,"Sep");
break;

case 10://OCTOBER
DAYS=273;
strcpy(Mont,"Oct");
break;

case 11://NOVEMBER
DAYS=304;
strcpy(Mont,"Nov");
break;

case 12://DECEMBER
DAYS=334;
strcpy(Mont,"Dec");
break;
}

if(leap==0&&Month!=1&&Month!=2) //Add leap day into All days
   DAYS++;

DAYS+=Date;//Convert date into Days
DAYS=DAYS%7;
switch(jan1_day)
{
case 1://1/1/YEAR = MONDAY
prince(1,2,3,4,5,6,0);
break;
////////////////////////////////////////////////////////
case 2://1/1/YEAR = TUESDAY
prince(0,1,2,3,4,5,6);
break;
////////////////////////////////////////////////////////
case 3://1/1/YEAR = WEDNESDAY
prince(6,0,1,2,3,4,5);
break;
////////////////////////////////////////////////////////
case 4://1/1/YEAR = THURSDAY
prince(5,6,0,1,2,3,4);
break;
////////////////////////////////////////////////////////
case 5://1/1/YEAR = FRIDAY
prince(4,5,6,0,1,2,3);
break;
////////////////////////////////////////////////////////
case 6://1/1/YEAR = SATURDAY
prince(3,4,5,6,0,1,2);
break;
////////////////////////////////////////////////////////
case 0://1/1/YEAR = SUNDAY
prince(2,3,4,5,6,0,1);
break;
}
return 0;
}

void prince (int A, int B, int C, int D, int E, int F, int G)
{
printf("\n%d-%s-%d = ",Date, Mont, Year);
if(DAYS==A)
printf("MONDAY");

else if(DAYS==B)
printf("TUESDAY");

else if(DAYS==C)
printf("WEDNESDAY");

else if(DAYS==D)
printf("THURSDAY");

else if(DAYS==E)
printf("FRIDAY");

else if(DAYS==F)
printf("SATURDAY");

else
printf("SUNDAY");
}

