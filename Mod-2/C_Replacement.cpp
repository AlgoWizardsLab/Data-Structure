#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++)
        cin >> vec[i];
    for (int &element : vec)
    {
        if (element > 0)
            element = 1;
        else if (element < 0)
            element = 2;
    }

    for(auto it = vec.begin(); it<vec.end(); it++) cout<<*it<<" ";

    return 0;
}