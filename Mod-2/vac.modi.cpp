#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {10, 20, 30, 40};
   /*  vec.insert(vec.end(), 100);
    vec.insert(vec.begin() + 2, 50000); */
    // for multiple value - eg, v2 will insert at pos 1 of vec;
    vector<int> vec2 = {22, 33, 44};
    vec.insert(vec.begin() + 1, vec2.begin(), vec2.end());
    for (int x : vec)
    {
        cout << x << " ";
    }
    return 0;
}