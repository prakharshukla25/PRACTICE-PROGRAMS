#include<iostream>
using namespace std;
int main()
{
    int a ,b;
    cout<<"Enter the valur of a &b :-";
    cin>>a >>b ;
    //Approach1
    /**int temp;
    temp=a;
    a=b;
    b=temp;**/
    //Approach2
    /**a=a+b;
    b=a-b;
    a=a-b;**/
    //Approach3
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<b;
}