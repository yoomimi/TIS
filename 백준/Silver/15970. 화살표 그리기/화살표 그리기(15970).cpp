#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, x;
    cin >> N;
    int sum=0;
    vector<vector<int>> v;
    for (int i=0; i<N; i++){
        vector<int> v2;
        cin >> x;
        v2.push_back(x);
        cin >> x;
        v2.push_back(x);
        v.push_back(v2);
    }
    for (int i=0; i<N; i++){
        vector<int> check;
        for (int j=0; j<N; j++){
            if ((i!=j)&(v[i][1]==v[j][1])){
                check.push_back(abs(v[i][0]-v[j][0]));
            }
        }
        if (!check.empty()){sum = sum + *min_element(check.begin(),check.end());}
    }
    cout << sum;
}
