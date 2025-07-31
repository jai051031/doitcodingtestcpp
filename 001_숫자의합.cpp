#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    string m;
    cin >> n;
    cin >> m;
    for(int i=0; i<n; i++){
        sum = sum + m[i] - 48;
    }
    cout << sum;
}