#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
string s= "12:45:54PM";
int number =0;
string tt;
    
if(s[8]=='P')
{
    
    number = (s[0] - '0')*10 +(s[1] -'0') + 12;
    if(number >24)
    {
        number-=24;
    } 
    else if (number == 24)
    {
        number =12;
        
    }
    
}
else
{
    number =(s[0] - '0')*10 +(s[1] -'0'); 
    if (number>=12)
    number -=12;
}
if (number>10)
{
tt = std::to_string(number);
}
else if(number<10)
{
tt= "0" + to_string(number);
}
s[0]=tt[0];
s[1]=tt[1];
s.erase(8,2);


cout<<s;

}
