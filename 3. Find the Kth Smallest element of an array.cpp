#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n;
	cin>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
//	Sorting the array
//3,5,1,6,8
	int min,loc,temp;
	for(int s=0;s<n-1;s++){
		min = arr[s];
		loc = s;
		for(int j=s+1;j<n;j++){
			if(arr[s]>arr[j]){
				min = arr[j];
				loc = j;
			}
		}
		temp = arr[s];
		arr[s] = min;
		arr[loc] = temp;
	}
	
	for(int a=0;a<n;a++){
		cout << arr[a];
	}
	
	cout<<"\nkth smallest element is " << arr[k];
	
}


