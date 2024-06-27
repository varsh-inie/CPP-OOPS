#include<iostream>
using namespace std;
int main(){
	int d=12;
	int i=0;
	char h[100];
	int t=d;
	
	while(t>0){
		int rem=t%16;
		if(rem<10){
			h[i]=rem+'0';
			
		}else{
			h[i]= rem-10 + 'A';
		}
		t/=16;
		i++;
	}

	for(int j=i-1;j>=0;j--){
		cout<<h[j];
	}
	cout<<endl;
	return 0;
}