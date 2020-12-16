#include<bits/stdc++.h>
using namespace std;
void calculator(char choice);
int main(){
    char selection;
    cout<<"\nA=Addition";
    cout<<"\nS=Substraction";
    cout<<"\nM=Multiplicatiion";
    cout<<"\nD=Division";
    cout<<"\nR=Square Root";
    cout<<"\nC=Cube Root";
    cout<<"\nEnter your choice:";
    cin>>selection;

    calculator(selection);

    return 0;
}

void calculator(char choice){
    int a;
    int b;
    int c;
    double s;
    if(choice=='A'||choice=='a'){
        cout<<"\nEnter first number:";
        cin>>a;
        cout<<"\nEnter second number:";
        cin>>b;
        c=a+b;
        cout<<"\nThe sum of the two number is:"<<c<<endl;

    }else if(choice=='S'||choice=='s'){
        cout<<"\nEnter the first number:";
        cin>>a;
        cout<<"\nEnter the second number:";
        cin>>b;
        c=a-b;
        cout<<"\nThe result is:"<<c<<endl;
    }else if(choice=='M'||choice=='m'){
        cout<<"\nEnter number 1:";
        cin>>a;
        cout<<"\nEnter number 2:";
        cin>>b;
        c=a*b;
        cout<<"\nThe result is:"<<c<<endl;
    }else if(choice=='D'||choice=='d'){
        cout<<"\nEnter number 1:";
        cin>>a;
        cout<<"\nEnter number 2:";
        cin>>b;
        c=a/b;
        cout<<"\nThe result is:"<<c<<endl;
    }else if(choice=='R'||choice=='r'){
        cout<<"\nEnter the number:";
        cin>>a;
        s=sqrt(a);
        cout<<"\nThe square root of the number is:"<<s<<endl;
    }else if(choice=='P'||choice=='p'){
        cout<<"\nEnter the BASE:";
        cin>>a;
        cout<<"\nEnter the POWER:";
        cin>>b;
        c=pow(a,b);
        cout<<"\nThe result is:"<<c<<endl;

    }
}
