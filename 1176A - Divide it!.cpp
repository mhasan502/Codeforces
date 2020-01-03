#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,move;
    long long n;
    cin >> t;
    while(t--){
        cin >> n;
        move=0;
        while(n>1){
            if(n%2==0)
                n /= 2;
            else if(n%3==0){
                n*=2;
                n/=3;
            }
            else if(n%5==0){
                n*=4;
                n/=5;
            }
            else{
                move = -1;
                break;
            }
            ++move;
        }
            cout << move << endl;
    }
    return 0;
}
