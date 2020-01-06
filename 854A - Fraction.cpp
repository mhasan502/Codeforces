#include<bits/stdc++.h>
using namespace std;
int main() {

    int input,a,b;
    cin >> input;

    if(input%2==1){
        a = input/2;
        b = input/2+1;
    }
    else{
        if(input%4==0){
            a = input/2-1;
            b = input/2+1;
        }
        else{
            a = input/2-2;
            b = input/2+2;
        }
    }
    cout << a <<" "<< b << endl;

    return 0;
}
