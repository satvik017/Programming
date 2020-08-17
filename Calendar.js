let DAYS,Year=2049, Month=5, Date=3,Mont,week ,all_leap ,jan1_day, leap;

console.log("100 years of calendar 2000-2099\n");

week=Year-2000; //Take only Tens value
all_leap=week/4; //how many leap days we have
all_leap = Math.floor(all_leap );
leap=week%4;//Year is leap or not
week+=all_leap;//add leap days into week days
if(leap==0)
week--;
jan1_day=week%7;

switch(Month){//Converts here month into days

case 1://JANUARY
DAYS=0;
Mont="Jan";
break;

case 2://FEBRARY
DAYS=31;
Mont="Feb";
break;

case 3://MARCH
DAYS=59;
Mont="Mar";
break;

case 4://APRIL
DAYS=90;
Mont="Apr";
break;

case 5://MAY
DAYS=120;
Mont="May";
break;

case 6://JUNE
DAYS=151;
Mont="Jun";
break;

case 7://JULY
DAYS=181;
Mont="Jul";
break;

case 8://AUGUST
DAYS=212;
Mont="Aug";
break;

case 9://SEPTEMBER
DAYS=243;
Mont="Sep";
break;

case 10://OCTOBER
DAYS=273;
Mont="Oct";
break;

case 11://NOVEMBER
DAYS=304;
Mont="Nov";
break;

case 12://DECEMBER
DAYS=334;
Mont="Dec";
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

function prince (A, B, C, D, E, F, G)
{
console.log(Date+"-"+Mont+"-"+Year);
if(DAYS==A)
console.log("MONDAY");

else if(DAYS==B)
console.log("TUESDAY");

else if(DAYS==C)
console.log("WEDNESDAY");

else if(DAYS==D)
console.log("THURSDAY");

else if(DAYS==E)
console.log("FRIDAY");

else if(DAYS==F)
console.log("SATURDAY");

else if(DAYS==G)
console.log("SUNDAY");
}

