#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=1;
    cin >> n;
    int array[8];
    for(int i=1; i<8; i++){
        cin >> array[i];
    }
    while(n>0){
        n = n - array[count];
        count++;
        if(count==8)
            count = 1;
    }
    if(count==1)
        cout<< "7" <<endl;
    else
        cout<< count-1 <<endl;

    return 0;
}
