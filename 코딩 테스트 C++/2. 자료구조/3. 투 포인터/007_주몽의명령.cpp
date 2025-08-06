#include<iostream>
using namespace std;
int swap(int *x, int*y){
    int t = *x;
    *x = *y;
    *y = t;
}
int main(){
    int n, m, a[15000];
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(a[j] > a[j+1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
    int start=0;
    int end=start+1;
    int cnt=0;
    while(start < n){
        if(a[start] + a[end] == m && (a[start] != 0 && a[end] != 0)){
            a[start] = 0;
            a[end] = 0;
            cnt++;
            start++;
            end++;
        }
        else if(a[start] + a[end] > m && (a[start] != 0 && a[end] != 0)){
            start++;
            end = start;
        }
        else{
            end++;
        }
        if(a[start] == 0){
            start++;
        }
        if(a[end] == 0){
            end++;
        }
    }
    cout << cnt;
}