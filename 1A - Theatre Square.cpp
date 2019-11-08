#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,m,a;
    cin >> n >> m >> a;
    long long na,ma,sum;
    if(n%a)
        na = n/a+1;
    else
        na = n/a;

    if(m%a)
        ma = m/a+1;
    else
        ma = m/a;
        
    sum = na*ma;
    cout << sum << endl;

    return 0;
}
