#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    vector<string> arr;
    string arr2;

    for (int i = 0; i < N; i++) {
        cin >> arr2;
        for (int j = 0; j < N; j++) {
            if (arr2[j] == 'Y') {
                arr2[j] = 1;
            } else if (arr2[j] == 'N') {
                arr2[j] = 0;
            }
        }
        arr.push_back(arr2);
    }

    /*i번째 사람의 친구수를 구해서 친구수 벡터에 넣기*/

    vector<int> friends;

    for (int i=0; i<N ; i++){
        int sum = 0;
        sum = accumulate(arr[i].begin(), arr[i].end(), 0); // 자신의 직계 친구 수의 합

        /*직계 친구는 아니지만 겹지인이 있는 경우 체크*/
        for (int j=0; j<N; j++){
            if ((arr[i][j]==0)&(i!=j)){
                vector<int> result(N);

                /*AND 연산한 배열이 겹지인의 수니까 겹지인이 1명이라도 있으면 2-친구로 세어야 함*/
                transform(arr[i].begin(), arr[i].end(), arr[j].begin(), result.begin(), [](int a, int b) { return a & b; });
                if(accumulate(result.begin(), result.end(), 0) != 0) { sum += 1; }
            }
        }
        friends.push_back(sum); //자기 자신은 빼고 세어야 함
    }

    sort(friends.rbegin(),friends.rend());
    cout << friends[0] << endl ;
}
