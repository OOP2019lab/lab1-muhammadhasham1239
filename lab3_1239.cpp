#include "Header.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void readDataFromFile ( githubuser *&info,string filepath,int &user) {
	ifstream fin(filepath.c_str());
	if(!fin){
	cout<<"could not open file"<<endl;
	}else{
	fin>>user;
	fin.ignore();
	info=new githubuser [user];
	for(int i=0;i<user;i++){
		getline(fin,info[i].firstName);
		getline(fin,info[i].userName);
		getline(fin,info[i].email);
		fin>>info[i].folderCount;
		fin.ignore();
		info[i].gitHubFolders =new string[info[i].folderCount];
		for(int j=0;j<info[i].folderCount;j++){
			getline(fin,info[i].gitHubFolders[j]);
		}

		cout<<"Name is "<< info[i].firstName<<endl;
		cout<<"UserName is "<< info[i].userName<<endl;
		cout<<"email is "<< info[i].email<<endl;
		cout<<"Number of folder are:"<< info[i].folderCount<<endl;
		for(int z=0;z<info[i].folderCount;z++){
			cout<<"Name of folder "<<z+1<<":"<<info[i].gitHubFolders[z]<<endl;		
		}
	}
}
}

void setinfo(githubuser *&info,int user){
	for(int i=0;i<user;i++){
	cout<<info[i].firstName<<" enter your institute name"<<endl;
	info[i].institutename=0;
	string *institutename=new string;
	cin>> *institutename;
	info[i].institutename=institutename;
	cout<<info[i].firstName<<" enter your qualification level"<<endl;
	info[i].qualification=0;
	string *qualification=new string;
	cin>>*qualification;
	info[i].qualification=qualification;//problem here i could not point my struct pointer to these string which is also affecting over all result
}
}
void printinfo(githubuser *&info,int user){
	for(int i=0;i<user;i++){
if(info[i].institutename==0){
	cout<<"No institute name is provided ";
}
else{
	cout<<info[i].institutename<<endl;
}
if(info[i].qualification==0){
	cout<<"No qualifictaion is provided ";
}
else{
	cout<<info[i].qualification<<endl;
}
}
}

int main(){
	string filepath;
	filepath="Folder.txt";
	int user=0;
	githubuser *info=0;
	readDataFromFile(info,filepath,user);
	setinfo(info,user);
	printinfo(info,user);
}

