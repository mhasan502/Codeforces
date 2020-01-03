#include <bits/stdc++.h>
using namespace std;

int main(){

    int friends, bottle, b_amount, lime, piece_lime, salt;
    int drink, needOfSalt;
    cin >> friends >> bottle >> b_amount >> lime >> piece_lime >> salt;
    cin >> drink >> needOfSalt;

    int totalDrink = bottle*b_amount;

    int drinkToast = drink*friends;
    int saltToast = needOfSalt*friends;

    int d_Toast = totalDrink/drinkToast;
    int s_Toast = salt/saltToast;
    int l_Toast = (lime*piece_lime)/friends;
    int array[] = {d_Toast,s_Toast,l_Toast};
    sort(array,array+3);

    cout << array[0] << endl;

    return 0;
}
