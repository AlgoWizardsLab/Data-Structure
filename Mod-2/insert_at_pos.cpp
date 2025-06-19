#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
    int pos, value;
    cin >> pos >> value;

    if (pos > n || pos < 0)
    {
        cout << "Invalid position" << endl;
    }
    else
    {
        vec.insert(vec.begin() + pos, value);
        for (int x : vec)
            cout << x << " ";
    }
    return 0;
}