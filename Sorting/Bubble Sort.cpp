#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int arr[]={4,3,2,1,5,9,8,7,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < n-1; i++)    
	    for (int j = 0; j < n-1-i; j++)
	        if (arr[j] > arr[j+1])
	            swap(&arr[j], &arr[j+1]);
	
	for(int k=0;k<n;k++){
		cout << arr[k] << " ";
	}
}
