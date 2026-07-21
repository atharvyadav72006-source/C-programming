#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter three numbers=";
cin>>a>>b>>c;
cout<<"*****Before Swapping********"<<endl;
cout<<"Numbers:"<<endl<<a<<b<<c<<endl;
cout<<"*****after Swapping********"<<endl;
a=b;
b=c;
c=a;
cout<<"Numbers:"<<a<<b<<c<<endl;
return 0;
}



