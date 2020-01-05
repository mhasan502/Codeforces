#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1;
    cin >> x1 >> y1;
    int x2,y2;
    cin >> x2 >> y2;
    int x,y,ans;
    if(x1 > x2)
        x = x1 - x2;
    else
        x = x2 - x1;

    if(y1 > y2)
        y = y1 - y2;
    else
        y = y2 - y1;
    ans = max(x,y);
    cout << ans << endl;

    return 0;
}
