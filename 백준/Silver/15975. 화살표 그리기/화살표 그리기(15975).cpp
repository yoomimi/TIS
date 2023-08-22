#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    iostream::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N;
    cin >> N;
    long long int sum = 0;
    unordered_map<int, vector<int>> v;

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        v[y].push_back(x);
    }

    for (auto& entry : v) {
        vector<int>& xValues = entry.second;
        sort(xValues.begin(), xValues.end());
        if (xValues.size() > 1) {
            for (vector<int>::size_type i = 1; i < xValues.size() - 1; i++) {sum += min(xValues[i] - xValues[i - 1], xValues[i + 1] - xValues[i]);}
            sum += xValues[1] - xValues[0] + xValues[xValues.size() - 1] - xValues[xValues.size() - 2];
        }
    }

    cout << sum;
}
