#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
char name[10];
int roll number;

void calper()
{
int i=1, a[5];
cout<<"enter the marks";
for(;i<=3;i++)
{
cin>>a[i];
}
for(i=1;i<=3;i++)
{
sum+=a[i];
}
cout<<sum*100/300;
}
};
void main()
{
student s;
cout<<"enter the name of the student\n";
gets(s.name);
cout<<"name of the student : "<<s.name;
cout<<"percentage of the student\n";
s.calper;
getch();
}