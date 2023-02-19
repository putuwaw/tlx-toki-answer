#include <bits/stdc++.h>
using namespace std;
int main(){
    string S;
    int K;
    cin >> S >> K;
    for (int i = 0; i < S.length(); i++){
        cout << char((S[i] - 'a' + K) % 26 + 'a');
    }
    cout << endl;
    return 0;
}
