#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<unordered_set<int>> social(N + 1);
    for (int i=0 ; i<M ; i++){
        int A, B;
        cin >> A >> B;
        social[A].insert(B);
        social[B].insert(A);
    }

    vector<int> day;
    int check = M*2;

    while (check < (N * (N - 1)) -1) {
        int tmp =0;
        vector<unordered_set<int>> m = social;
        for (int i = 1; i <= N; i++) {
            for (int z : social[i]) {
                for (int k : social[z]) {
                    if ((i != k) && (social[i].find(k) == social[i].end()) && (m[i].find(k)==m[i].end())){
                        m[i].insert(k);
                        tmp += 1;
                        check += 1;
                    }
                }
            }
        }
        for (int j=1 ; j<=N;j++)social[j].insert(m[j].begin(),m[j].end());
        day.push_back(tmp/2);
    }


    cout << day.size() << endl;
    for (int value : day) cout << value << endl;
    return 0;

}
