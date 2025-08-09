#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, count=0, cnt=0;
    cin >> n;
    vector<int> a(n, 0);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    for(long long k=0; k<n; k++){
        long long i = 0, j = n-1;
        while(i < j){
            if(a[i] + a[j] == a[k]){
                if(i != k && j != k){
                    count++;
                    break;
                }
                else if(i == k){
                    i++;
                }
                else if(j == k){
                    j--;
                }
            }
            else if(a[i] + a[j] > a[k]){
                j--;
            }
            else{
                i++;
            }
        }
    }
    cout << count << "\n";
}