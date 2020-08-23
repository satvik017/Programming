#include<stdio.h>
#include<conio.h>
#define print(x) printf(x);
#define scan(X) scanf("%d",&X);

void display();
void assen();

int i[50],j=0,k,a,l,p,b,z=3;
char f;


struct stud
{
int roll,birth;
char name[10];

}std[52];

void main()
{
print("Range 1 to 50\n")
roll:
print("Enter student roll no.\n")
scan(std[j].roll);
if(std[j].roll>50||std[j].roll<=0)
{
print("Enter roll no. in 1 to 50\n")
goto roll;
}
fflush(stdin);
print("Enter student name\n")
gets(std[j].name);

print("Enter year of birth\n")
scan(std[j].birth)

yesot:
fflush(stdin);
print("\nSelect 'Y' to Enter another student data\n select 'N' to display the data \n\n")
f=getch();
if(f=='Y'||f=='y')
{
    print("\n")
j++;
goto roll;
}
else if(f=='N'||f=='n')
{
assen();
wel:
	 printf("\nEnter password\n");
	 scan(b);

	 if(b!=1234)
	{
         if(z==1)
    	{
         z--;
         printf("Password is Incorrect\n This was your last attemp\n\n");
         goto bye;
        }
 	 else
	{
	 z--;
	 printf("Password is incorrect\ntry again, %d attemp is left\n\n",z);
	 goto wel;
	}
	}


display();
}
else
{print("you press wrong key, press 'Y' or 'N'\n")
goto yesot;}
bye:
getch();
}


void display()
{
k=j;
for(j=0;j<=k;j++){
printf("\n           \"%d\"\n",std[j].roll);
printf("     Name       = %s\n",std[j].name);
printf("Year of birth   = %d\n",std[j].birth);

}
}


void assen()

{

 for (p = 0; p <= j; ++p)
        {

            for (l = p + 1; l <= j; ++l)
            {

                if (std[p].roll > std[l].roll)
                {

                    std[50] =  std[p];
                    std[p] = std[l];
                    std[l] = std[50];

                }

            }

        }

}






