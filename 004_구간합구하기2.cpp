#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n+1, vector<int>(n+1, 0));
    vector<vector<int>> s(n+1, vector<int>(n+1, 0));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int t;
            cin >> t;
            s[i][j] = s[i][j-1] + s[i-1][j] - s[i-1][j-1] + t;
        }
    }
    for(int i=0; i<m; i++){
        int x1, y1, x2, y2, sum=0;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << s[x1-1][y1-1] + s[x2][y2] - s[x1-1][y2] - s[x2][y1-1] << "\n";
    }
}