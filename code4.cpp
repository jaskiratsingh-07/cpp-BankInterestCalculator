#include <iostream>
using namespace std;

float fd(int bank,float rate=1.08 ){
    return bank*rate;
}

int main() {
    int rec;
    cout<<"HOW MANY RECORDS DO YOU WISH TO ENTER?"<<endl;
    cin>>rec;
    int i=1;
    do{
       int bank,acc;
       float rate=1.08;
       cout<<"\nenter record no."<<i<<":"<<endl;
       cout<<"account number:"<<endl;
       cin>>acc;
       cout<<"bank balance:"<<endl;
       cin>>bank;
      
       if(acc<10001){
           cout<<"WELCOME VIP CUSTOMER! SPECIAL INTEREST RATE(10%) APPLIED"<<endl;
           rate=1.10;
       }
       cout<<"after 1 year you will recieve:"<<fd(bank,rate);
        i++;
    }while(i<=rec);

    return 0;
}
