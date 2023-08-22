#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    iostream::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, K, x;
    cin >> N >> K;
    vector<int> v;
    for (int i=0; i<N; i++) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    int sum = 0;
    for (int i=0; i<K; i++) {sum += v[i] - i;}
    cout << sum;
}
