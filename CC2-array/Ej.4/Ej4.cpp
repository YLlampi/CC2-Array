#include <bits/stdc++.h>
using namespace std;

int iterativa(string s){
	int i=0;
	while(s[i]!='\0')
		i++;
	return i;
}

int recursiva(string s,int i){
	if(s[i]=='\0') return i;
	else return recursiva(s,i+1);
}

int main(){
	string s;
	getline(cin,s);
	
	int i = iterativa(s);
	printf("%d",i);
	cout<<'\n';
	int j=0;
	cout<<recursiva(s,j);
	return 0;
}
