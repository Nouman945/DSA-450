#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int getV(char a){
	if(a == 'I') return 1;
    if(a == 'V') return 5;
    if(a == 'X') return 10;
    if(a == 'L') return 50;
    if(a == 'C') return 100;
    if(a == 'D') return 500;
    if(a == 'M') return 1000;
    return 0;
}
int main(){
	string s;
	cin >> s;
	int r=0,n=s.length();
	for(int i=0;i<n;i++){
		if(i<(n-1) && getV(s[i]) < getV(s[i+1])){
			r -= getV(s[i]);
		}
		else{
			r+=getV(s[i]);
		}
	}
	cout << r;
}
