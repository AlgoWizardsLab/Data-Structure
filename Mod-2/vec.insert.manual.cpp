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

    cout << endl;

    // insert element at specific indices: if vec = {10,20,30,40,50} , int pos = 1; val = 333; now vector will : vec = {10,333,20,30,40,50}

    int pos, val;
    cin >> pos >> val;

    if (pos > n || pos < 0)
    {
        cout << "invalid pos" << endl;
    }
    vec.push_back(0); // add dummy element
    for (int i = vec.size() - 1; i > pos; i--)
    {
        /*
        Start at i = 5 → vec[5] = vec[4] → vector becomes: {10, 20, 30, 40, 50, 50}
        Next i = 4 → vec[4] = vec[3] → vector becomes: {10, 20, 30, 40, 40, 50}
        Next i = 3 → vec[3] = vec[2] → vector becomes: {10, 20, 30, 30, 40, 50}
        Next i = 2 → vec[2] = vec[1] → vector becomes: {10, 20, 20, 30, 40, 50}
        */
        vec[i] = vec[i - 1];
    }
    vec[pos] = val;

    // print the vector : ranged based for loop

    for (int x : vec)
    {
        cout << x << " ";
    }
    return 0;
}