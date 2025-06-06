    #include <bits/stdc++.h>
#include <utility>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
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

// void explainVector()
// {
//     // Vector is a dynamic array that can resize itself automatically when an element is added or removed.
//     // It is defined in the <vector> header file.
//     vector<int> v;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.emplace_back(40);
//     v.emplace_back(50);
//     cout << "Vector: ";
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     vector<pair<int, int>> vp;
//     vp.push_back({1, 2});
//     vp.emplace_back(3, 4);
//     cout << "Vector of Pairs: ";
//     for (const auto &p : vp)
//     {
//         cout << "(" << p.first << ", " << p.second << ") ";
//     }
//     cout << endl;

//     vector<int> v1(5, 10); // vector of size 5 with all elements initialized to 10
//     vector<int> v1(5);     // vector of size 5 with default values
//     vector<int> v2(v1);    // copy constructor

//     vector<int>::iterator it = v.begin(); // iterator to the first element
//     it++;                                 // increment iterator to point to the second element
//     cout << *it << endl;                  // dereference iterator to get the value

//     vector<int>::iterator it1 = v.end();    // iterator to the end of the vector
//     vector<int>::iterator it1 = v.rend();   // reverse iterator to the end of the vector
//     vector<int>::iterator it1 = v.rbegin(); // reverse iterator to the beginning of the vector

//     cout << v[0] << " " << v.at(0) << endl;       // accessing first element using both methods
//     cout << v.front() << " " << v.back() << endl; // accessing first and last element

//     for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << " "; // iterating through the vector using iterator
//     }

//     for (auto it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << " "; // iterating through the vector using auto keyword
//     }

//     for (auto it : v)
//     {
//         cout << it << " "; // iterating through the vector using range-based for loop
//     }

//     // {10,12,20,13}
//     v.erase(v.begin() + 1, v.begin() + 3); // erase elements from index 1 to 2
//     v.erase(v.begin() + 1);             // erase element at index 1

//     // Insert Function

//     v.insert(v.begin() + 1, 100); // insert 100 at index 1
//     v.insert(v.begin() + 1, 2, 100); // insert 100 at index 1, 2 times
//     v.insert(v.begin() + 1, v.begin(), v.end()); // insert elements from index 1 to end

//     v.pop_back(); // remove last element
//     v.clear();    // clear the vector
//     v.empty();   // check if vector is empty
//     v.size();    // get size of vector

//     //v1->swap(v2); // swap two vectors
//     v1.swap(v2); // swap two vectors
// }

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

void explainPriorityQueue()
{
    // Priority Queue is a data structure that can be used to store elements in a sorted order.
    // It is defined in the <queue> header file.
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.emplace(40);
    cout << "Priority Queue: ";
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

void explainSet()
{
    // Set is a data structure that can be used to store unique elements in a sorted order.
    // It is defined in the <set> header file.
    // Sorted, Unique
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.emplace(40);
    cout << "Set: ";
    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
}

void explainUnorderedSet()
{
    // Unordered Set is a data structure that can be used to store unique elements in an unordered manner.
    // It is defined in the <unordered_set> header file.
    unordered_set<int> us;
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.emplace(40);
    cout << "Unordered Set: ";
    for (auto it : us)
    {
        cout << it << " ";
    }
    cout << endl;
}

void explainMultiset()
{
    // Multiset is a data structure that can be used to store duplicate elements in a sorted order.
    // It is defined in the <set> header file.
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    ms.emplace(40);
    cout << "Multiset: ";
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
}

void explainMap()
{
    // Map is a data structure that can be used to store key-value pairs.
    // It is defined in the <map> header file.
    map<int, int> m;
    m[1] = 10;
    m[2] = 20;
    m[3] = 30;
    cout << "Map: ";
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
}

void explainUnorderedMap()
{
    // Unordered Map is a data structure that can be used to store key-value pairs in an unordered manner.
    // It is defined in the <unordered_map> header file.
    unordered_map<int, int> um;
    um[1] = 10;
    um[2] = 20;
    um[3] = 30;
    cout << "Unordered Map: ";
    for (auto it : um)
    {
        cout << it.first << " " << it.second << endl;
    }
}

void explainMultimap()
{
    // Multimap is a data structure that can be used to store duplicate key-value pairs in a sorted order.
    // It is defined in the <map> header file.
    multimap<int, int> mm;
    mm.insert({1, 10});
    mm.insert({1, 20});
    mm.insert({2, 30});
    cout << "Multimap: ";
    for (auto it : mm)
    {
        cout << it.first << " " << it.second << endl;
    }
}
bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}
void explainExtra()
{
    int a[] = {1, 5, 3, 2};
    sort(a, a + 4); // sort array in ascending order
    cout << "Sorted Array: ";
    for (auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;

    sort(a, a + 4, greater<int>()); // sort array in descending order
    cout << "Sorted Array in Descending Order: ";
    for (auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;

    reverse(a, a + 4); // reverse array
    cout << "Reversed Array: ";
    for (auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;

    pair<int, int> b[4] = {{1, 2}, {3, 2}, {3, 4}, {5, 6}};
    sort(b, b + 4, comp);
    cout << "Sorted Pair Array: ";
    for (auto it : b)
    {
        cout << "(" << it.first << ", " << it.second << ") ";
    }

    int num = 10;
    int cnt = _builtin_popcount(num); // count number of set bits in a number
    cout << "Number of Set Bits: " << cnt << endl;

    long long num = 1000000000;
    int cnt1 = __builtin_popcountll(num); // count number of set bits in a long long number
    cout << "Number of Set Bits in Long Long: " << cnt1 << endl;
    cout << "Size of int: " << sizeof(int) << endl;

    string s = "123";
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end())); // generate all permutations of a string

    int max = *max_element(a, a + 4); // find maximum element in array
}

int main()
{

    // explainPriorityQueue();
    explainExtra();
    return 0;
}