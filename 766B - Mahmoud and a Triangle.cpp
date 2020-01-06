#include<bits/stdc++.h>
using namespace std;
int main() {
    int size,a,b,c,flag=0;
    cin >> size;
    int array[size];
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    sort(array,array+size);
    for(int i=0; i<size-2; i++){
        a=array[i];
        b=array[i+1];
        c=array[i+2];
		if(a+b>c){
			cout<<"YES"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
        cout<<"NO"<<endl;

    return 0;
}
