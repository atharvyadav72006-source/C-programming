#include<iostream>
using namespace std;

int main()
{
    int num,temp,rev=0,rem;
    cout<<"Enter a number:";
    cin>>num;

    temp=num;
      
    while(temp!=0)
    {
    rem=temp%10;
    rev=rev*10+rem;
    temp=temp/10;
    }
    if(rev==num)
      cout<<"Palindrome Number";
    else
      cout<<" Not a Palindrome Number";
    
    return 0;
}