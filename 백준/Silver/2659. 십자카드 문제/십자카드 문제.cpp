#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int a, b, c, d, m;
    vector<int> v, clock;
    cin >> a >> b >> c >> d;
    v.push_back(1000*a + 100*b + 10*c +d);
    v.push_back(1000*b + 100*c + 10*d +a);
    v.push_back(1000*c + 100*d + 10*a +b);
    v.push_back(1000*d + 100*a + 10*b +c);
    m = *min_element(v.begin(), v.end());
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            for (int k=0; k<9; k++){
                for (int l=0; l<9; l++){
                    if ((i<=j)&(i<=k)&(i<=l)&(((i+1)*10+j+1)<=((k+1)*10+l+1))&((l+1 + (k+1)*10 + (j+1)*100 + (i+1)*1000)<=(k+1 + (j+1)*10 + (i+1)*100 + (l+1)*1000))){
                        clock.push_back(l+1 + (k+1)*10 + (j+1)*100 + (i+1)*1000);
                    }
                }
            }
        }
    }

    cout << find(clock.begin(), clock.end(), m) - clock.begin() + 1;
}
