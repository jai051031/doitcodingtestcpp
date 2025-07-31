#include<iostream>
using namespace std;
int main(){
    /*내가 짠 코드
    int n, cnt=0, sum=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            sum += j;
            if(sum == n){
                cnt++;
                sum = 0;
                j = n+1;
            }
            else if(sum > n){
                sum = 0;
                j = n+1;
            }
        }
        
    }
    cout << cnt;*/

    /*정답 예제 코드*/
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
    int count = 1;
    int start_index = 1;
    int end_index = 1;
    int sum = 1;
    while (end_index != N) {
        if (sum == N) {         //  답을 찾은 경우
            count++;
            end_index++;
            sum = sum + end_index;
        }
        else if (sum > N) {   // 현재 합이 답보다 큰 경우
            sum = sum - start_index;
            start_index++;
        }
        else {                // 현재 합이 답보다 작은 경우
            end_index++;
            sum = sum + end_index;
        }
    }
	cout << count << "\n";
    /*내가 푼 코드는 처음부터 하나하나 계산했기에 백준에서는 맞았지만 데이터가 더 커지면 틀릴듯
    예제 처럼 하나씩 뒤로 미루면서 풀면 더욱 빠름
    예를 들어서 1+2+3을 계산하고 다시 2+3+4를 계산하는 것이 아닌 1+2+3에서 1을 빼고 4를 더하는 식으로*/
}