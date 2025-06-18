#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector: Capacity function
    vector<int> vec;

    // Size
    cout << "Size: " << vec.size() << endl;

    // Capacity
    cout << "Capacity: " << vec.capacity() << endl; // Initially: 0

    // Maximum possible size
    cout << "Max_size: " << vec.max_size() << endl;

    // Add some elements to see changes
    vec.push_back(10);
    vec.push_back(20);

    cout << "After inserting elements:" << endl;
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;

    // Clear the vector
    vec.clear(); // This does not return anything.

    cout << "After clear:" << endl;
    cout << "Size: " << vec.size() << endl;      // Size becomes 0
    cout << "Capacity: " << vec.capacity() << endl; // Capacity remains same

    return 0;
}
