#include<iostream>
using namespace std;
int pal(int a)
{
    int b=a,r=0;
    while(a>0)
    {
        int temp=a%10;
        r=r*10+temp;
        a/=10;
    }
    return r==b;
}
int main()
{
    int a=1221;
    if(pal(a))
        cout<<"Palindrome";
    else
        cout<<"Not palindrome";
}