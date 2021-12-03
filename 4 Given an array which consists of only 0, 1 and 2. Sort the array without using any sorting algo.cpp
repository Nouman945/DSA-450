#include<iostream>
using namespace std;
int main(){
	int n=5;
	int arr[n]={0,2, 1, 2, 1};
	
//	First Approach
//	int zero=0,one=0,two=0;
//	int temp[5];
	
//	for(int i=0;i<5;i++){
//		if(arr[i]==0){
//			zero++;
//		}
//		else if(arr[i]==1){
//			one++;
//		}
//		else{
//			two++;
//		}
//	}
//	
//	for(int i=0;i<zero;i++){
//		temp[i]=0;
//	}
//	for(int i=zero;i<zero+one;i++){
//		temp[i]=1;
//	}
//	for(int i=zero+one;i<zero+one+two;i++){
//		temp[i]=2;
//	}
//	
//	for(int i=0;i<5;i++){
//		cout << temp[i];
//	}

//Second Approach
	int l=0;
	int m=0;
	int h=n-1;
	
	while(m<=h){
		int x=arr[m];
		
		if(x==0){
			int temp;
			temp=arr[l];
			arr[l]=arr[m];
			arr[m]=temp;
			l++;
			m++;
		}
		else if(x==1){
			m++;
		}
		else{
			int temp;
			temp=arr[h];
			arr[h]=arr[m];
			arr[m]=temp;
			h--;
		}
	}
	
	for(int i=0;i<5;i++){
		cout << arr[i];
	}

	
}
