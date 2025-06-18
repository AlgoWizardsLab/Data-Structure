#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++)
        cin >> vec[i];

    int pos;
    cin >> pos;
    if (pos > n || pos < 0)
    {
        cout << "Invalid Position" << endl;
    }
    else
    {
        vec.erase(vec.begin() + pos);
        for (int x : vec)
            cout << x << " ";
    }

    return 0;
}