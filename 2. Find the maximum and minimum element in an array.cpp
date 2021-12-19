#include<iostream>
using namespace std;
int minmax(int a[],int n){
	int min=a[0];
	int max=a[0];
	
 	for(int i=0;i<=n;i++){
		if(a[i]>max){
			
			max=a[i];
		}
		else if(a[i]<min){
			min=a[i];
		}
	}
	cout << "MAX\t" << max << "\n";
	cout << "MIN\t" << min << "\n";
}

int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(a)/sizeof(a[0])-1;
	minmax(a,n);
}
