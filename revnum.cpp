#include<iostream>
using namespace std;
int main(){
	int rem,res,num;
	cout<<"enter a number";
	cin>>num;
	while(num!=0){
		rem=num%10;
		res=res*10+rem;
		num/=10;
	}
	cout<<"reversed number ="<<res;
	return 0;
}