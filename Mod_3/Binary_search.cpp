#include <bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int> &vec, int target)
{
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (vec[mid] == target)
        {
            return true;
        }
        else if (vec[mid] > target)
        {
            right = mid - 1;
        }
        else if (vec[mid] < target)
        {
            left = mid + 1;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    int target;
    cin >> target;

    if (binarySearch(vec, target))
    {
        cout << "Found ";
    }
    else
    {
        cout << "Not Found ";
    }

    // binary search :
    // check - vec is sort ?
    //  if sort : mid = l+r/2; ( find the mid element of the vector )
    //  left index will start form vec[0] and right index wii start form the end of vector ( vec(n-1));
    //  if mid == target element , return the value and break loop
    //  if mid is not == target :
    //  compare the value - value > mid  - left = mid+1;
    //  or value < mid  - right = mid -1;
    // if found the value - flag true

    return 0;
}