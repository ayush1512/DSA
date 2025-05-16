#include <bits/stdc++.h>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

void explainPair()
{
    // Pair is a data structure that can store two values of different data types.
    // It is defined in the <utility> header file.
    // The first value is accessed using the first property and the second value is accessed using the second property.
    pair<int, char> p;
    p.first = 10;
    p.second = 'a';
    cout << "Pair: " << p.first << " " << p.second << endl;
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Pair Array: " << arr[0].first << " " << arr[0].second << endl;
}

void explainVector()
{
    // Vector is a dynamic array that can resize itself automatically when an element is added or removed.
    // It is defined in the <vector> header file.
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.emplace_back(40);
    v.emplace_back(50);
    cout << "Vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(3, 4);
    cout << "Vector of Pairs: ";
    for (const auto &p : vp)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    vector<int> v1(5, 10); // vector of size 5 with all elements initialized to 10
    vector<int> v1(5);     // vector of size 5 with default values
    vector<int> v2(v1);    // copy constructor

    vector<int>::iterator it = v.begin(); // iterator to the first element
    it++;                                 // increment iterator to point to the second element
    cout << *it << endl;                  // dereference iterator to get the value

    vector<int>::iterator it1 = v.end();    // iterator to the end of the vector
    vector<int>::iterator it1 = v.rend();   // reverse iterator to the end of the vector
    vector<int>::iterator it1 = v.rbegin(); // reverse iterator to the beginning of the vector

    cout << v[0] << " " << v.at(0) << endl;       // accessing first element using both methods
    cout << v.front() << " " << v.back() << endl; // accessing first and last element

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " "; // iterating through the vector using iterator
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " "; // iterating through the vector using auto keyword
    }

    for (auto it : v)
    {
        cout << it << " "; // iterating through the vector using range-based for loop
    }

    // {10,12,20,13}
    v.erase(v.begin() + 1, v.begin() + 3); // erase elements from index 1 to 2
    v.erase(v.begin() + 1);             // erase element at index 1

    // Insert Function

    v.insert(v.begin() + 1, 100); // insert 100 at index 1
    v.insert(v.begin() + 1, 2, 100); // insert 100 at index 1, 2 times
    v.insert(v.begin() + 1, v.begin(), v.end()); // insert elements from index 1 to end

    v.pop_back(); // remove last element
    v.clear();    // clear the vector
    v.empty();   // check if vector is empty
    v.size();    // get size of vector

    //v1->swap(v2); // swap two vectors
    v1.swap(v2); // swap two vectors
}

void explainList()
{
    // List is a doubly linked list that can be used to store elements.
    // It is defined in the <list> header file.
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.emplace_back(40);
    l.emplace_back(50);
    cout << "List: ";
    for (auto it : l)
    {
        cout << it << " ";
    }
    cout << endl;
}

void explainDeque()
{
    // Deque is a double-ended queue that can be used to store elements.
    // It is defined in the <deque> header file.
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(30);
    d.emplace_front(40);
    cout << "Deque: ";
    for (auto it : d)
    {
        cout << it << " ";
    }
    cout << endl;
}

void explainStack()
{
    // Stack is a LIFO (Last In First Out) data structure that can be used to store elements.
    // It is defined in the <stack> header file.
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.emplace(40);
    cout << "Stack: ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void explainQueue()
{
    // Queue is a FIFO (First In First Out) data structure that can be used to store elements.
    // It is defined in the <queue> header file.
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.emplace(40);
    cout << "Queue: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    // explainPair();
    explainVector();
    return 0;
}