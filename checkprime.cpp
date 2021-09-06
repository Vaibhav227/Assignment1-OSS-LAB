#include<iostream>
using namespace std;
int main(){
	cout<<"Enter a Number:";
	int n;
	cin>>n;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			cout<<"Number is not Prime.";
			exit(0);
		}
	}
	cout<<"Number is Prime.";
}
