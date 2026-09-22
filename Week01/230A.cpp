#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int power, n;
    // vector<pair<int, int>>를 사용하여 dragon_power와 bonus를 저장
    vector<pair<int, int>> power_bonus;
    cin >> power >> n;

    for(int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y;
        power_bonus.push_back(make_pair(x, y));
    }
    sort(power_bonus.begin(), power_bonus.end());

    for(int i=0; i<n; i++) {
        // first, second로 vector pair 접근 가능
        if(power > power_bonus[i].first) {
            power += power_bonus[i].second;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}