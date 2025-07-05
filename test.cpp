#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int ver(){
	cout<<"v0.2.1 Preview\n";
	return 0;
}
int commandparse(string str)
{
	if(str=="exit"){
		exit(0);
	}
	else if(str==""){
		return 0;
	}
	else if(str=="ver"){
		cout<<"Bring-Console ";
		ver();
	}
	else if(str=="nevergonnagiveyouup"){
		system("start https://www.bilibili.com/video/BV1GJ411x7h7?t=0.0"); 
	}
	else if(str=="seeyouagain") {
		system("start https://www.bilibili.com/video/BV1qU4y1F73A?t=0.0");
	else{
		cout<<"Command not found."<<endl;
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

