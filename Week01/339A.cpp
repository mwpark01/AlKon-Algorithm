#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string input;
    vector<int> arr;
    cin >> input;
    for (int i = 0; i < int(input.size()); i++)
    {
        if (input[i] == '+')
        {
            continue;
        }
        else
        {
            arr.push_back(int(input[i]));
        }
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < int(arr.size()); i++)
    {
        cout << char(arr[i]);
        if (i != int(arr.size()) - 1)
        {
            cout << "+";
        }
    }
}