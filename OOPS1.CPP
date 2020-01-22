#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class student
{
public:
char name[10];
int roll number;
int sum;
void calper()
{
int a[5];
sum = 0;
cout<<"enter the marks \n";
for(int i=1;i<=3;i++)
{
cin>>a[i];
}
for(i=1;i<=3;i++)
{
sum+=a[i];
}
}
};
void main()
{
student s;
s.calper();
cout<<"enter the name of the student\n";
gets(s.name);
cout<<"name of the student : "<<s.name;
cout<<"percentage of the student : <<s.sum*100/300<<"\n";
getch();
}
