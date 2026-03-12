//check if num is primne
#include<iostream>
using namespace std;
int main()
{
    int a=1;
    bool prime=true;
    if(a<=1)
        prime=false;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            prime=false;
            break;   
        }
    }
    if(prime)
        cout<<"Prime";
    else
        cout<<"Not prime";
}