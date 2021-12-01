#include<iostream>
using namespace std;
int main(){
    int n=5;
	int arr[n]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        cout << arr[i];
    }
	int s=0;
	int end=n-1;
	while(s<=end){
		int temp;
		temp = arr[s];
		arr[s]=arr[end];
		arr[end]=temp;
		s++;
		end--;
	}
	cout << "Reversed Array";
	for(int i=0;i<n;i++){
		cout << arr[i];
	}
	return 0;
}


