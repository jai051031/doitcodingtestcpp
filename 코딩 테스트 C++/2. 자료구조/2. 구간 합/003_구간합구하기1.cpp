#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, s[100001]={0};
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        int t;
        cin >> t;
        s[i] = s[i-1] + t;
    }
    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        cout << s[y] - s[x-1] << "\n";
    }
}