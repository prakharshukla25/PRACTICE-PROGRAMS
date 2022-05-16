#include<iostream>
using namespace std;
int main()
{
    cout<<(int)'a'<<endl;
    cout<<int('a')<<endl;
    cout<<int('A')<<endl;
    cout<<char(65)<<endl;
    char c1,c2,c3,c4,c5;
    cout<<"Enter the five values:- \n";
    cin>>c1>>c2>>c3>>c4>>c5;
    cout<<"ASCI Message: "<<int(c1)<<" "<<int(c2)<<" "<<int(c3)<<" "<<int(c4)<<" "<<int(c5)<<endl;
    int c6,c7,c8,c9,c10;
    cout<<"Enter the five values:- \n";
    cin>>c6>>c7>>c8>>c9>>c10;
    cout<<"ASCI Message: "<<char(c6)<<" "<<char(c7)<<" "<<char(c8)<<" "<<char(c9)<<" "<<char(c10)<<endl;
}