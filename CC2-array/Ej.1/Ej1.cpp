#include <bits/stdc++.h>
using namespace std;

int iterativa(int array[],int n){
	int s=0;
	for(int i=0;i<n;i++){
		s+=array[i];
	}
	return s;
}

int recursiva(int array[],int n){
	if(n==1) return array[0];
	else{
		return array[n-1] + recursiva(array,n-1);
	}
}

int main(){
	srand(time(NULL));
	int n=10;
	
	int array[n];
	for(int i=0;i<n;i++){
		
		array[i] = rand()%20;
		cout<<array[i]<<" ";
	}
	cout<<'\n';
	int s=iterativa(array,n);
	int p=recursiva(array,n);
	
	printf("iterativo: %d",s);
	cout<<'\n';
	printf("recursivo: %d",p);
	return 0;
}
