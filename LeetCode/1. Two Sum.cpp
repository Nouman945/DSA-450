#include<iostream>
using namespace std;
int main(){
	int arr[]={3,3,3,1,1,8,-8,2};
	int target=5,a1,a2;
	int n=sizeof(arr)/sizeof(arr[0]);
	int c=0;
	for(int i=0;i<n;i++){
		for(int k=i+1;k<n;k++){
			c++;
			if(arr[i]+arr[k]==target){
				a1=i;
				a2=k;
				break;
			}
		}
	}
	cout << a1 << " " << a2 << " " << c;
}
