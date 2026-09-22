#include <iostream>
// vector and algorithm libraries are included for using vector and sort functions
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}