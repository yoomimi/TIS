#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, x;
    cin >> N;
    for (int i=0; i<N; i++){
        vector<int> v;
        for (int j=0; j<10; j++){
            cin >> x;
            v.push_back(x);
            }
        sort(v.rbegin(),v.rend());
        cout << v[2] << endl;
    }
}
