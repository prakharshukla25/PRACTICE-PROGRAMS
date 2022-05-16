#include<iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout<<"Enter the valur of a ,b &c:-";
    cin>>a>>b>>c;
    if(a==b&&b==c)
    {
        cout<<"This is Equilateral triangle\n";
    }
    else
    {
         if(a!=b && a!=c && b!=c)
         {
             cout<<"This is Scalene triangle\n";

         }
         else
         {
              cout<<"This Isocleles triangle\n";
         }

    }
}