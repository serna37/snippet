#include <bits/stdc++.h>
using namespace std;
int main() {
    auto compress = []<class T>(vector<T> &vec) -> void {
        auto v = vec;
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        for (int i = 0; i < (int)vec.size(); i++) {
            vec[i] = lower_bound(v.begin(), v.end(), vec[i]) - v.begin();
        }
    };

    vector<int> test = {12, 13, 15, 14, 16};
    compress(test);
    cout << "compress chk" << endl;
    assert(test[0] == 0);
    assert(test[1] == 1);
    assert(test[2] == 3);
    assert(test[3] == 2);
    assert(test[4] == 4);
    cout << "OK" << endl;

    auto compress2 = []<class T>(vector<T> vec) -> vector<T> {
        auto v = vec;
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        for (int i = 0; i < (int)vec.size(); i++) {
            vec[i] = lower_bound(v.begin(), v.end(), vec[i]) - v.begin();
        }
        return vec;
    };
    vector<int> test2 = {32, 555, 100, 99, 10};
    vector<int> compressed = compress2(test2);
    for (int i = 0; i < (int)test2.size(); i++) {
        cout << test2[i] << " " << compressed[i] << endl;
    }
}
