#include <bits/stdc++.h>
using namespace std;

string copiar(string a,string b){
	
	int as;
	if(size(a)>size(b)){
		as = size(b);
	}
	else as = size(a);
	
	for(int i=0;i<as;i++){
		b[i]=a[i];
	}
	return a;
	
}

int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);

	string sda = copiar(a,b);
	cout<<sda<<'\n';
	return 0;
}



