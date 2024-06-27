#include<iostream>
using namespace std;
int main(){
	int b=1000;
	int k=1;
	int sum=0;
	while(b!=0){
		int rem=b%10;
		sum+=rem*k;
		b/=10;
		k*=2;
	}
	cout<<sum;
	return 0;
}
