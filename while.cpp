#include<iostream>
using namespace std;
int main()
{
    //write out all the numbers between 100-500 that are
    int counter=100;
    while(counter<501)
    {
        if(counter%3==0 && counter%5==0)
        {
            cout<<counter<<"is divisible\n";
        }
        counter++;
    }

}