#include <bits/stdc++.h> 
#include <cstdio>
#include <windows.h>
using namespace std;

bool check(string passwd){
	if(passwd=="test"){
		return true;
	}
	else{
		return false;
	}
}
int error(int er){
	if(er==0x00000001){
		cout<<"Error:0x00000001 ���ʹ���򳬳����ޡ�"<<endl;
		exit(1); 
	}
	else{
		cout<<"δ����Ĵ���"<<endl;
	}
}
int functions(int ret){
	if(ret==0){
		cout<<"Bring-Console v0.2.3 Preview"<<endl;
		return 0;
		//�汾��Ϣ 
	}
	else if(ret==1){
		exit(0);
		//�˳� 
	}
	else if(ret==2){
		system("start https://www.bilibili.com/video/BV1GJ411x7h7?t=0.0"); 
		//Never Gonna Give You Up
	}
	else if(ret==3){
		system("start https://www.bilibili.com/video/BV1qU4y1F73A?t=0.0");
		//See You Again 
	}
	else if(ret==4){
		cout<<"����δ�ҵ�"<<endl;
		//����δ�ҵ� 
	}
	else if(ret==5){
		system("start https://bilibili.com/");
		//��bilibili 
	}
	else if(ret==6){
		system("start https://space.bilibili.com/3546560300321230");
		//��ע�� 
	}
	else if(ret==7){
		system("cmd");
		//��cmd 
	}
	else if(ret==8){
		cout<<"exit:�˳�"<<endl<<"ver:��ʾ�汾��Ϣ"<<endl<<"seeyouagain:����See you again"<<endl<<"nevergonnagiveyouup:���(doge)"<<endl<<"help:�������"<<endl<<"bilibili:����������"<<endl<<"follow:��ע��"<<endl<<"listnumber:���1~�û��������������"<<"cmd:��cmd"<<endl;
		//������Ϣ 
	}
	else if(ret==9){
		cout<<"Enter a number:";
		int userinput;
		cin>>userinput;
		if(userinput>=1&&userinput<=2147483647){
			for(int i = 1;i<=userinput;i++){
				cout<<i<<endl;
				//���1-userinput���������� 
			}
		}
		else{
			error(0x00000001);
			//������ 
		}
	}
	else if(ret==10){
		#ifdef _WIN32
			system("cls");
		#else
			system("clear");
		#endif	
	}

	else{
		cout<<"command is not define"<<endl;
		//δ���� 
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
	else if(str=="listnumber"){
		functions(9);
	}
	else if(str=="cs"){
		functions(10);
	}
	else if(str=="sudo"){
		functions(11);
	}
	else{
		functions(4);
	}
}
int main()
{
	string str;
	for(;;){
		cout<<"Bring-Console>";
		getline(cin,str);
		commandparse(str);
		//�����û����� 
	}
}

