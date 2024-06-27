#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter the number of terms:";
    cin >> n;

    if (n<=0) {
        cout<<"enter a positive integer.";
    }else{
        int f=0, s=1,next;

        if(n==1) {
            cout<<"Fibonacci Series: " << first << endl;
        } else if (n == 2) {
            cout << "Fibonacci Series: " << first << " " << second << endl;
        } else {
            cout << "Fibonacci Series: " << first << " " << second << " ";
            for (int i = 3; i <= n; ++i) {
                next = first + second;
                cout << next << " ";
                first = second;
                second = next;
            }
            cout << endl;
        }
    }

    return 0;
}
