#include<iostream>
using namespace std;
int main()
{
    int yearOfBirth =1995;
    char gender ='f';
    bool isOlderThan18 = true;
    float averageGrade=4.5;
    double balance= 4512752;
    cout<<"Size of int is "<<sizeof(int)<<" bytes\n";
    cout<<"Int min value is "<< INT32_MIN <<endl;
    cout<<"Int max value is "<< INT32_MAX <<endl;
    cout<<"Size of usigned int is "<< sizeof(unsigned int)<<"bytes"<<endl;
    cout<<"Uint max value is "<<UINT32_MAX<<endl;
    cout<<"Size of bool is "<< sizeof(bool)<<" bytes"<<endl;
    cout<<"Size of char is "<< sizeof(char)<<" bytes"<<endl;
    cout<<"Size of float is "<< sizeof(float)<<" bytes"<<endl;
    cout<<"Size of double is "<< sizeof(double)<<" bytes"<<endl;
    int intMax =INT32_MAX;
    cout<<intMax<<endl;
    cout<<intMax+1<<endl;
    }