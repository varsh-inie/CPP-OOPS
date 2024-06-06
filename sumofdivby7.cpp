#include <iostream>
int main(){
	int i,sum=0;
	for(i=50; i<=100;i++){
		if(i%7==0){
			sum=sum+i;
		}
	}
	std::cout<<"sum="<<sum;
	return 0;
}