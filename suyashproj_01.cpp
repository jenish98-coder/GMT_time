/*Write a program that takes time input (hour and minute) in -4:00 GMT and converts 
the time into equivalent +5:45 GMT time
*/
#include<iostream>
using namespace std;
int main(){
    int t1,t2,h;
    float m;
    cout<<"Hour"<<"=";
    cin>>h;
    cout<<"Minute"<<"=";
    cin>>m;

    cout<<"Entered Time"<<"= -"<<h<<":"<<m<<"GMT"<<endl;
   

    int c=(h+9)%24;
    int d=(m+45)%60;

    cout<<"Converted Time"<<"= +"<<c<<":"<<d<<"GMT";

 return 0;

}
