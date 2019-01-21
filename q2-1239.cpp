// LAB1-Q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

void offsetnotation(int n,int *b){
	int x=0;
	for(int i=0;i<n;i++){
	cout<<"Enter number in array"<<endl;
	cin>>x;
	*(b+i)=x;
	}

}


int _tmain(int argc, _TCHAR* argv[])
{
	int n=0;
	int x=0;
	int y=0;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cout<<"Enter numbers in array"<<endl;
		cin>>arr[i];	
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<=n;j++){
		if(arr[i]<arr[j]){
		x=arr[j];
		arr[j]=arr[i];
		arr[i]=x;
		}
		}
	}
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";	
	}
		cout<<endl<<"press 1 to use offsetnotation"<<endl;
		cin>>y;
		if(y==1){
	offsetnotation(n,arr);
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";	
	}
		}
	return 0;
}

