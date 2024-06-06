#include<iostream>
using namespace std;
class matrix{
	public:
		int row,col;
	int a[10][10];
	int b[10][10];
	int c[10][10];
	void madd(int row,int col){
		for(int i=0;i<row;i++){
			for (int j=0;j<col;j++){
			cout<<c[i][j]=a[i][j]+b[i][j];
			}
		}		
	}
};
int main(){
	int row=2,col=2;
    int a[10][10]={2,2,2,2};
    int b[10][10]={2,2,2,2};
    matrix m;
	m.madd(int row,int col);
}