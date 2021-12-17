#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,3,4,5};
	int b[]={1,2,3};	
	//Finding the same elements in arrays
	int un=0,un1=0;
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
//		cout << a[i];
		un++;
	}
	for(int i=0;i<=2;i++){
		int flag=0;
		for(int j=0;j<=4;j++){
			if(a[i]==b[j]){
				flag=1;
				break;
			}
		}
		if(flag!=1){
//			cout << b[i];
			un1++;
		}
	}
	cout << un+un1;
}

