#include<iostream>
using namespace std;
int main(){
	int n=4,i,j;
	for(i=n;i>=1;i--){
		for(j=n-i;j>=1;j--){
		 cout<<"  ";	
		}
		for(j=i;j>=1;j--){
			cout<<j<<" ";
		}
		for(j=1;j<=i-1;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}

     
