// greatest common denominator
#include <iostream>
#include <vector>
using namespace std;
class gdc
{
public:
    void GCD(int a, int b)
    {
        while(b!=0)
        {
            int temp=b;
            b=a%b;
            a=temp;
        }
        cout<< a;
    }
};
int main()
{
    gdc g;
    g.GCD(20,28);
}