#include<iostream>
using namespace std;
int main(){
    int n, max;
    double a[1000], sum=0;
    cin >> n;
    for(int i=0; i<n; i++){
        if(i == 0){
            max = a[i];
        }
        cin >> a[i];
        if(max < a[i]){
            max = a[i];
        }
    }
    for(int i=0; i<n; i++){
        sum += a[i]/max*100;
    }
    cout << sum/n;
}