#include<iostream>
using namespace std;
string a;
int main(){
    int n, m;
    cin >> n >> m;
    cin >> a;
    int b[4], c[4]={0};
    for(int i=0; i<4; i++){
        cin >> b[i];
    }
    int i = 0;
    int j = m-1;
    int cnt = 0, count = 0;
    for(int k=i; k<=j; k++){
        if(a[k] == 'A'){
            c[0]++;
        }
        else if(a[k] == 'C'){
            c[1]++;
        }
        else if(a[k] == 'G'){
            c[2]++;
        }
        else if(a[k] == 'T'){
            c[3]++;
        }
        else{
            count++;
        }
    }
    
    while(j < n){
        if(count == 0){
            if(b[0] <= c[0] && b[1] <= c[1] && b[2] <= c[2] && b[3] <= c[3]){
                cnt++;
            }
        }
        count = 0;
        i++;
        j++;
        if(a[i-1] == 'A'){
            c[0]--;
        }
        else if(a[i-1] == 'C'){
            c[1]--;
        }
        else if(a[i-1] == 'G'){
            c[2]--;
        }
        else if(a[i-1] == 'T'){
            c[3]--;
        }
        if(a[j] == 'A'){
            c[0]++;
        }
        else if(a[j] == 'C'){
            c[1]++;
        }
        else if(a[j] == 'G'){
            c[2]++;
        }
        else if(a[j] == 'T'){
            c[3]++;
        }
    }
    cout << cnt;
}