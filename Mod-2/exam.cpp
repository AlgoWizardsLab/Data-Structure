#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }

    for (int i = 0; i < vec.size() / 2; i++)
    {
        int temp = vec[i];
        vec[i] = vec[n - 1 - i];
        vec[n - 1 - i] = temp;
    }

    for (int x : vec)
    {
        cout << x << " ";
    }

    return 0;
}