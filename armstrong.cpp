#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, pow=0, temp, dig = 0,sum;
    cout<<"enter a number";
    cin>>num;
     temp=num;
	 while(temp!=0){
	 	int d=temp%10;
	 	pow=d*d*d;
	 	sum=sum+pow;
	 	temp/=10;
	 }
	 if(sum==num)
	 	cout<<num<<"is an armstrong number"<<endl;
	
	 else
	 	cout<<num<<"is not an armstrong number"<<endl;
	 
	 return 0;
}

