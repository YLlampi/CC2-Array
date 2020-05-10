#include <bits/stdc++.h> 
using namespace std; 

void swap(int* a, int* b){ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int separar(int arr[], int a, int z){ 
	int pivot = arr[z];
	int i = (a - 1);
		
	for (int j = a; j <= z - 1; j++){ 
		if (arr[j] < pivot) { 
			i++;
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[z]); 
	return (i + 1); 
} 

void quickSort(int arr[], int a, int z){ 
	if (a < z){ 
		int ab = separar(arr, a, z); 
		quickSort(arr, a, ab - 1); 
		quickSort(arr, ab + 1, z); 
	} 
} 

void imprimir(int arr[], int n) { 
	int i; 
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

int main() { 
	int arr[] = {10, 7, 8, 9, 1, 5}; 
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1); 
	cout << "Array Ordenado: \n"; 
	imprimir(arr, n); 
	return 0; 
} 
