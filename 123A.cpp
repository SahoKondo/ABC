#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,e,k;
    cin >> a >> b >> c >> d >> e >> k;

    if (e-a>k){
        cout << ":(";
    } else if (e-b>k){
        cout << ":(";
    }else if (d-a>k){
        cout << ":(";
    }else if (e-c>k){
        cout << ":(";
    }else if (c-a>k){
        cout << ":(";
    }else if (e-d>k){
        cout << ":(";
    }else if (b-a>k){
        cout << ":(";
    }else{
        cout << "Yay!";
    };
    cout << endl;
    return 0;

}
