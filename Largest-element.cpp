#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,3,0,41,9};
    int max=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    cout<<"Largest element: "<<max;
}