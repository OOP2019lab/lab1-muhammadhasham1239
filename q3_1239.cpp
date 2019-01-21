#include <iostream>
using namespace std;

int main(){
int n=0;
cout<<"Enter number"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
	for(int j=0;j<i;j++){
		cout<<i;
	}
		for(int j=i;j<(n*2)-i;j++){
		cout<<"*";
		}
		for(int j=0;j<i;j++){
		cout<<i;
		}
		cout<<endl;
		}
for(int q=n+1,i=1;i<n;i++,q++){
	for(int j=0;j<i;j++){
		cout<<q;
	}
		for(int j=i;j<(n*2)-i;j++){
		cout<<"*";
		}
		for(int j=0;j<i;j++){
		cout<<q;
		}
		cout<<endl;
		}
return 0;
}




