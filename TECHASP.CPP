

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class donor
{
char name[20];
int age;
char email[25];
char mobile[10];
char bgp[2];
char gender;
public:
void insert()
{

cout<<"ENTER THE NAME:"<<endl;
 gets(name);
 cout<<"ENTER THE AGE"<<endl;
 cin>>age;
 if(age<0&&age>100)
 {cout<<"error; wrong age";
 return;
 }
 cout<<"ENTER THE EMAIL"<<endl;
 cin>>email;

 cout<<"ENTER THE MOBILE"<<endl;
 cin>>mobile;
 cout<<"ENTER THE BLOOD GROUP"<<endl;
 cin>>bgp;
 cout<<"ENTER THE GENDER(m/f)"<<endl;
 cin>>gender;}

	void show()
	{
		cout<<"NAME:";
 puts(name);

 cout<<endl<<" AGE"<<endl;
 cout<<age;
 cout<<"EMAIL:";
 cout<<email<<endl;

 cout<<"MOBILE:";
 cout<<mobile<<endl;
 cout<<"BLOOD GROUP:";
 cout<<bgp<<endl;
 cout<<"ENTER THE GENDER";
 cout<<gender<<endl;

	}
int getage()
{return age;}
};

void main()
{	clrscr();
int a;
cout<<"FOR ENTERING THE DATA PRESS 1"<<endl<<"FOR VIEW PRESS 2"<<endl<<"FOR MINMUM AGE FILTER";
//not yet implemented

int age1,i=0;
cout<<"enter the number of donors you want to enter ";
int n;
cin>>n;
donor d[100];
while(i<n)
    {d[i].insert();
    i++;
    }
    cout<<"displaying all";

//display detail all
for(int k=0;k<i;k++)
{
d[k].show();
}
//display age filter
cout<<"enter the minimum age";
cin>>age1;
for( k=0;k<i;k++)
{if(d[k].getage()>=age1)
d[k].show();
}

getch();
}


