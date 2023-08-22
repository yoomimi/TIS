#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, x;
    cin >> N;
    int s = 0;
    vector<int> A, B, C;
    for (int i=0; i<N; i++) {
        cin >> x;
        A.push_back(x);
    }
    for (int i=0; i<N; i++) {
        cin >> x;
        B.push_back(x);
    }
    C = B;
    sort(A.begin(),A.end());
    sort(C.rbegin(),C.rend());
    for (int i=0; i<N; i++) {
        s = s + A[i]*C[i];
    }
    cout << s;
}
