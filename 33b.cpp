#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> P(N);
    
    int sum = 0;
    rep(i,N){
        cin >> S[i] >> P[i];
        sum = sum + P[i];
    }

    bool kan = false;
    string ans;
    rep(i,N){
        if(P[i] > sum/2){
            kan = true;
            ans = S[i];
        }
    }
cout << (kan ? ans : "atcoder") << endl;
return 0;

}
