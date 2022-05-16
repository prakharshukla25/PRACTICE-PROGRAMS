#include<iostream>
using namespace std;
int main()
{
    //Guessitng game
    int hostUserNum, guestUserNum;
    cout<<"Host:";
    cin>>hostUserNum;
    system("cls");
    cout<<"Guest:";
    cin>>guestUserNum;
    /**if(hostUserNum==guestUserNum)
    {
        cout<<"You have gussed wirght";
    }
    else
    {
        cout<<"not gussed correctly";
    }**/
    (hostUserNum==guestUserNum)? cout<<"You have gussed wirght" : cout<<"not gussed correctly";
}