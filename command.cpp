#include <bits/stdc++.h> 
#include <cstdio>
#include <windows.h>
using namespace std;

int functions(int ret){
	if(ret==0){
		cout<<"Bring-Console v0.2.3 Preview"<<endl;
		return 0;
	}
	else if(ret==1){
		exit(0);
	}
	else if(ret==2){
		system("start https://www.bilibili.com/video/BV1GJ411x7h7?t=0.0"); 
	}
	else if(ret==3){
		system("start https://www.bilibili.com/video/BV1qU4y1F73A?t=0.0");
	}
	else if(ret==4){
		cout<<"Command not found."<<endl;
	}
	else if(ret==5){
		system("start https://bilibili.com/");
	}
	else if(ret==6){
		system("start https://space.bilibili.com/3546560300321230");
	}
	else if(ret==7){
		system("cmd");
	}
	else if(ret==8){
		cout<<"exit:quit this program."<<endl<<"ver:show the version info."<<endl<<"seeyouagain:play see you again"<<endl<<"nevergonnagiveyouup:I Dont Know(doge)"<<endl<<"help:This Help."<<endl<<"bilibili:open bilibili"<<endl<<"follow:Follow Me"<<endl;
	}
	else{
		cout<<"command is not define"<<endl;
	}
}
int commandparse(string str)
{
	if(str=="exit"){
		functions(1);
	}
	else if(str==""){
		return 0;
	}
	else if(str=="ver"){
		functions(0);
	}
	else if(str=="nevergonnagiveyouup"){
		functions(2);
	}
	else if(str=="seeyouagain") {
		functions(3);
	}
	else if(str=="bilibili"){
		functions(5);
	}
	else if(str=="follow"){
		functions(6);
	}
	else if(str=="cmd"){
		functions(7);
	}
	else if(str=="help"){
		functions(8);
	}
	else{
		functions(4);
	}
}
int main()
{
	string str;
	for(;;){
		cout<<">";
		getline(cin,str);
		commandparse(str);
	}
}

