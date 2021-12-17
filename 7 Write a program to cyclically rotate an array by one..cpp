#include<iostream>
using namespace std;
int main(){
	int A[] = {9, 8, 7, 6, 4, 2, 1, 3};
	int n=sizeof(A)/sizeof(A[0]);
	int temp[n];
	temp[0]=A[n-1]; // storing the last element of array A
	for(int i=0;i<n;i++){
		temp[i+1]=A[i]; // only getting the elements from i+1 index 
	}
	for(int i=0;i<n;i++){
		cout << temp[i] << " ";
	}
}
