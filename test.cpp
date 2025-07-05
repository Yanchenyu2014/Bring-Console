#include <bits/stdc++.h>
using namespace std;
int ver(){
	cout<<"v0.2 Preview"<<endl;
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

