#include<iostream>
using namespace std;
#include<conio.h>
main()
{
int a, b;
char ch;
cout<<"Enter 1st value ";
cin>>a;
cout<<"Enter 2nd value ";
cin>>b;
cout<<"1. Add\n";
cout<<"2. Subtract\n";
cout<<"3. Multiply\n";
cout<<"4. Divide\n";
again:
cout<<"Enter your choice (1-4) ";
ch=getche();
cout<<endl;

switch(ch)
    {
case '1':
case 'A':
case 'a':
	cout<<a<<" + "<<b<<" = "<<a+b<<endl;
	break;
case '2':
case 'S':
case 's':
cout<<a<<" - "<<b<<" = "<<a-b<<endl;
break;
case '3':
case 'M':
case 'm':
cout<<a<<" x "<<b<<" = "<<a*b<<endl;
break;
case '4':
case 'D':
case 'd':
cout<<a<<" / "<<b<<" = "<<a/b<<endl;
break;
default:
	cout<<"Wrong Choice\n";
	goto again;
    }
return 0;
}

