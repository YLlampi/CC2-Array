#include <bits/stdc++.h>
using namespace std;

int *iterativa(int array[],int n){
	int *t = new int[n];
	for(int i=0;i<n;i++){
		t[i]=array[n-i-1];
	}
	return t;
}

void recursiva(int array[],int n,int as[],int g){	
	
	if(n!=0){
		as[g]=array[n-1];
		recursiva(array,n-1,as,g+1);
	}
	else{
		as[g]=array[n];
	}
}

int main(){
	srand(time(NULL));
	int n=10;
	int array[n];
	for(int i=0;i<n;i++){
		array[i]=rand()%20;
		cout<<array[i]<<" ";
	}
	//iterativa
	cout<<'\n';
	int *s=iterativa(array,n);
	for(int i=0;i<n;i++){
		cout<<s[i]<<" ";
	}
	
	//recursiva
	cout<<'\n';
	int as[n],g=0;
	recursiva(array,n,as,g);
	for(int i=0;i<n;i++){
		cout<<as[i]<<" ";
	}
	
	
	return 0;
}
