#include<bits/stdc++.h>
using namespace std;
void calculator(char choice);
void add();
void substract();
void multiply();
void divide();
void square_root();
void power();
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
   
    double s;
    if(choice=='A'||choice=='a'){
       void add();
    }else if(choice=='S'||choice=='s'){
       substract();
    }else if(choice=='M'||choice=='m'){
       multiply();
        
    }else if(choice=='D'||choice=='d'){
       divide();
    }else if(choice=='R'||choice=='r'){
       square_root();
    }else if(choice=='P'||choice=='p'){
        power();

    }
}
void add(){
    int a;
    int b;
    int c;
    
     cout<<"\nEnter first number:";
     cin>>a;
     cout<<"\nEnter second number:";
     cin>>b;
     c=a+b;
     cout<<"\nThe sum of the two number is:"<<c<<endl;
}

void substract(){
    int a;
    int b;
    int c;
     cout<<"\nEnter the first number:";
        cin>>a;
        cout<<"\nEnter the second number:";
        cin>>b;
        c=a-b;
}

void multiply(){
    int a;
    int b;
    int c;
     cout<<"\nEnter number 1:";
        cin>>a;
        cout<<"\nEnter number 2:";
        cin>>b;
        c=a*b;

}

void divide(){
    int a;
    int b;
    int c;
     cout<<"\nEnter number 1:";
        cin>>a;
        cout<<"\nEnter number 2:";
        cin>>b;
        c=a/b;
        cout<<"\nThe result is:"<<c<<endl;

}

void square_root(){
    int a;
    double s;
 cout<<"\nEnter the number:";
        cin>>a;
        s=sqrt(a);
        cout<<"\nThe square root of the number is:"<<s<<endl;
}

void power(){
    int a;
    int b;
    int c;
cout<<"\nEnter the BASE:";
        cin>>a;
        cout<<"\nEnter the POWER:";
        cin>>b;
        c=pow(a,b);
        cout<<"\nThe result is:"<<c<<endl;
}

