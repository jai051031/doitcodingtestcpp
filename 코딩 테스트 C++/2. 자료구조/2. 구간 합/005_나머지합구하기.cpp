#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    long cnt=0;
    cin >> n >> m;
    vector<long> s(n, 0);
    vector<long> a(m, 0);
    cin >> s[0];
    for(int i=1; i<n; i++){
        int t;
        cin >> t;
        s[i] = s[i-1] + t;
    }
    for(int i=0; i<n; i++){
        int r = s[i] % m;
        if(r == 0) cnt++;
        a[r]++;
    }
    for(int i=0; i<m; i++){
        if(a[i] > 1)
            cnt = cnt + (a[i] * (a[i]-1) / 2);
    }
    cout << cnt;
}