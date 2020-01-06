#include <bits/stdc++.h>
using namespace std;

int main(){
    int c,total=0;
    cin >> c;
    int array[c];
    for(int i=0; i<c; i++){
        cin >> array[i];
        total+=array[i];
    }
    int m = *std::max_element(array, array + c);
    int target = c*m;
    cout << target-total << endl;

    return 0;
}
