#include<iostream>
using namespace std;
int main(){
	int arr[]={1,3,4,2,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int flag=0,f=0,c=0;
	for(int i=0;i<n;i++){
		if(flag==1){
			break;
		}
		else if(flag==0){
			for(int k=i+1;k<n;k++){
				if(arr[i]==arr[k]){
					f = arr[i];
					flag=1;
				}
			}
		}
	}
	cout << f;
}
