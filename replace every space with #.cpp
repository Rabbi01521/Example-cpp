#include <iostream>
using namespace std;
#include <conio.h>
#include <stdio.h>
void main()
{
clrscr();
char *str,*add;
add=str;
cout<<"ENTER A STRING";
gets(str);
for(;*str!=" ";str++)
{
if(*str==' ')
{
*str='-';
}
//   str++;
}
cout<<"\nTHE CHANGED STRING IS \n";
puts(add);
getch();
}
