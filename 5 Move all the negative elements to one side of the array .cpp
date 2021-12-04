#include<iostream>
using namespace std;
int main(){
	int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
	int j=0;
	for(int i=0;i<9;i++){
		if(arr[i]<0){
			if(i!=j){
				swap(arr[i],arr[j]);
			}
			j++;
		}
		
	}
//	Printing The Array
	for(int i=0;i<9;i++){
		cout << arr[i]<<" ";
	}
}
