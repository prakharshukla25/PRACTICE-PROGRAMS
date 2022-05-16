#include<iostream>
using namespace std;
int main()
{
    //+,-,*,/,% -Arthematic operator=>Binary arithmatic operator
    cout<<5+2<<endl;
    cout<<5/2<<endl;//Quoitent
    cout<<5%2<<endl;//remainder
    system("cls");
    //++,---Uninary arithmatic operator
    int counter=7;
    counter++;
    cout<<counter<<endl;
    counter--;
    cout<<counter<<endl;
    int counter2=7;
    cout<<counter2++<<endl;//post increment
    cout<<++counter2<<endl;//pre increment
    cout<<counter2--<<endl;
    cout<<--counter2<<endl;  
    system("cls");
    //<,>,<=,>=,==,!=-Relational operator
    /**int a=5, b=8;
    cout<<(a<b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    system("cls");
    //&&,||,!-Logical operator
    cout<<(a==5 && b==5)<<endl;
    cout<<(a==5 || b==5)<<endl;
    cout<<!(a==5 || b==5)<<endl;
    cout<<(a==5 && b==5+3)<<endl;
    system("cls");
    //Assignment operator- =,+=,-=,*=,/=,%=
    int x=5;
    x+=7;
    //x=x+7;
    cout<<x<<endl;**/
    system("cls");
    int a=5,b=4;
    cout<<a+(b++)<<endl;//9
    cout<<(--a)+b<<endl;//9
    cout<<!(true && false)<<endl;//1
    cout<<(true && false || true )<<endl;//1
    int x=7;
    cout<<(++x<=9 && x+2>=10)<<endl;//1
    int y=3;
    cout<<(y==y++)<<endl;//0
    float z=8;
    z+=2;
    cout<<z<<endl;//10
    z/=2;
    cout<<z<<endl;//5

}