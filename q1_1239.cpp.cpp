#include <iostream>
using namespace std;

int main(){
int x=0;
int y=0;
int z=0;
int *p=nullptr;
int *q=nullptr;
int *r=nullptr;
x=5;
y=6;
p=&x;
q=&y;
cout<<x<<endl<<y<<endl<<p<<endl<<q<<endl<<*p<<endl<<*q<<endl<<endl;
z=x;
x=y;
y=z;
cout<<x<<endl<<y<<endl<<p<<endl<<q<<endl<<*p<<endl<<*q<<endl<<endl;
r=p;
p=q;
q=r;
cout<<x<<endl<<y<<endl<<p<<endl<<q<<endl<<*p<<endl<<*q<<endl<<endl;
}