#include<iostream>
using namespace std;
//function signature
int factorial(int n) {

//function body
    int fact = 1;

    for(int i = 1; i<=n; i++ ) {
        fact = fact * i;
    }

    return fact;
}
 //function signature
int nCr(int n, int r) {
        //function body
    int num = factorial(n);
                //function call
    int denom = factorial(r) * factorial(n-r);

    return num/denom;
}

int main( ) {
    int n, r;
    cin>> n >> r ;
         //function call
    cout <<" Answer is " << nCr(n,r) << endl;
    return 0;
}