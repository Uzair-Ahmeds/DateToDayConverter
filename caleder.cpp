#include <iostream>
#include <string>
using namespace std;
void d_m_y(string date);
int d_value(int day);
bool leap_year(int year);
int c_value(int year);
int y_value(int year);
int m_value(string month,int year);
int main()
{ string day_eng,date,day_s,month,year_s;
int year,day,cal_of_day;
cout<<endl<<"enter date DD/MM/YYYY : ";
getline(cin,date);
int find=date.find('/');
int find2=date.find('/',find+1);
int a=find2-find;
day_s=date.substr(0,find);
day=stoi(day_s);
month=date.substr(find+1,a-1);
year_s=date.substr(find2+1,4);
year=stoi(year_s);
int d=d_value(day);
bool r=leap_year(year);
if(r==true)
{
cout<<endl<<"it is a leap year ";
}
else
{
cout<<endl<<"it is not a leap year ";
}
int r2=c_value(year);
int r3=y_value(year);
int m=m_value(month,year);
cal_of_day=d+r2+r3+m;
cal_of_day=cal_of_day%7;
switch(cal_of_day)
{
case 0:
day_eng="sunday";
break;
case 1:
day_eng="monday";
break;
case 2:
day_eng="tuesday";
break;
case 3:
day_eng="wednesday";
break;
case 4:
day_eng="thursday";
break;
case 5:
day_eng="friday";
break;
case 6:
day_eng="saturday";
break;
}
cout<<endl<<endl;
cout<<endl<<"day month year ";
cout<<endl<<day_eng<<" "<<month<<" "<<year;
return 0;
}
int d_value(int day)
{
int d=day;
return d;
}
bool leap_year(int year)
{
bool r=true;
if(year%4==0 && year/100!=0)
{
r=true;
}
else
{
r=false;
}
return r;
}
int c_value(int year)
{
int r2,a=year/100;
r2=a%4;
r2=3-r2;
r2=r2*2;
return r2;
}
int y_value(int year)
{
int r3=year%100,a;
a=r3/4;
r3=a+r3;
return r3;
}
int m_value(string month,int year)
{
bool r=leap_year(year);
int m=0;
if(month=="01"||month=="january" )
{
if(r==true)
m=6;
else
m=0;
}
if(month=="02"||month=="february")
{
if(r==true)
m=2;
else
m=3;
}
if(month=="03"||month=="march")
{
m=3;
}
else if(month=="04"||month=="april")
{
m=6;
}
else if(month=="05"||month=="may")
{
m=1;
}
else if(month=="06"||month=="june")
{
m=4;
}
else if(month=="07"||month=="july")
{
m=6;
}
else if(month=="08"||month=="august")
{
m=2;
}
else if(month=="09"||month=="september")
{
m=5;
}
else if(month=="10"||month=="october")
{
m=0;
}
else if(month=="11"||month=="november")
{
m=3;
}
else if(month=="12"||month=="december")
{
m=5;
}
return m;
}


