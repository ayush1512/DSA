// ============================================================================
// Standard Template Library (STL) & C++ DSA Comprehensive Reference
// ============================================================================

// ──────────────────────────────────────────────────────────────────────────────
// 1. PAIR
// ──────────────────────────────────────────────────────────────────────────────
// Header: <utility>
// Stores two values (possibly of different types).
// Access with .first and .second.
// Pairs are compared lexicographically (first, then second).

// Creation:
//   pair<int, char> p1;               // default
//   pair<int, char> p2(10, 'a');      // parameterized
//   pair<int, char> p3 = {10, 'a'};   // brace init (C++11)
//   auto p4 = make_pair(10, 'a');     // make_pair

// Access:
//   p1.first = 10;
//   p1.second = 'a';

// Nested Pair:
//   pair<int, pair<int, int>> np = {1, {2, 3}};
//   // np.first = 1, np.second.first = 2, np.second.second = 3

// Comparison (lexicographic):
//   pair<int,int> a = {1,2}, b = {1,3};
//   // a < b  → true  (compares first, then second)

// Common Use: return multiple values, store edges {weight, {u, v}}

// ──────────────────────────────────────────────────────────────────────────────
// 2. VECTOR
// ──────────────────────────────────────────────────────────────────────────────
// Header: <vector>
// Dynamic array, contiguous memory, auto-resizes (doubles capacity).
// Random access: O(1). Insert/delete at end: O(1) amortized. Middle: O(n).

// Declaration:
//   vector<int> v;                    // empty
//   vector<int> v(5);                 // 5 elements, default 0
//   vector<int> v(5, 10);            // 5 elements, all 10
//   vector<int> v = {1, 2, 3, 4};   // initializer list
//   vector<int> v2(v);               // copy constructor
//   vector<int> v3(v.begin(), v.end()); // range constructor

// 2D Vector:
//   vector<vector<int>> mat(n, vector<int>(m, 0)); // n×m matrix of 0s

// Capacity:
//   v.size()           // O(1) — number of elements
//   v.capacity()       // O(1) — allocated capacity
//   v.empty()          // O(1) — true if empty
//   v.resize(n)        // O(n) — resize to n elements
//   v.resize(n, val)   // O(n) — resize, fill new with val
//   v.reserve(n)       // O(n) — pre-allocate capacity (avoids reallocations)
//   v.shrink_to_fit()  // O(n) — reduce capacity to size

// Access:
//   v[i]               // O(1) — no bounds checking
//   v.at(i)            // O(1) — throws out_of_range
//   v.front()          // O(1) — first element
//   v.back()           // O(1) — last element
//   v.data()           // O(1) — pointer to underlying array

// Modifiers:
//   v.push_back(x)     // O(1) amortized — add to end
//   v.emplace_back(x)  // O(1) amortized — construct in-place (faster)
//   v.pop_back()       // O(1) — remove last element
//   v.insert(it, x)    // O(n) — insert before iterator
//   v.insert(it, n, x) // O(n+k) — insert n copies of x
//   v.erase(it)        // O(n) — remove element at iterator
//   v.erase(it1, it2)  // O(n) — remove range [it1, it2)
//   v.clear()          // O(n) — remove all elements
//   v.swap(v2)         // O(1) — swap contents with v2
//   v.assign(n, x)     // O(n) — replace with n copies of x

// Iterators:
//   v.begin()          // iterator to first element
//   v.end()            // iterator past last element
//   v.rbegin()         // reverse iterator to last element
//   v.rend()           // reverse iterator before first element

// Common Operations:
//   sort(v.begin(), v.end());
//   reverse(v.begin(), v.end());
//   int mx = *max_element(v.begin(), v.end());
//   int mn = *min_element(v.begin(), v.end());
//   int sum = accumulate(v.begin(), v.end(), 0);  // <numeric>

// ──────────────────────────────────────────────────────────────────────────────
// 3. STRING
// ──────────────────────────────────────────────────────────────────────────────
// Header: <string>
// Dynamic character array. Mutable unlike Java/Python.

// Declaration:
//   string s = "hello";
//   string s(5, 'a');    // "aaaaa"
//   string s2 = s;       // copy

// Access:
//   s[i]               // O(1) — no bounds check
//   s.at(i)            // O(1) — throws out_of_range
//   s.front()          // O(1) — first char
//   s.back()           // O(1) — last char

// Capacity:
//   s.size()           // O(1) — same as s.length()
//   s.empty()          // O(1)
//   s.clear()          // O(n)

// Modifiers:
//   s.push_back('c')   // O(1) amortized — append char
//   s.pop_back()       // O(1) — remove last char
//   s.append("world")  // O(k) — append string
//   s += "world"       // O(k) — same as append
//   s.insert(pos, "x") // O(n) — insert at position
//   s.erase(pos, len)  // O(n) — erase len chars from pos
//   s.replace(pos, len, "new") // O(n) — replace substr

// Search:
//   s.find("sub")      // O(n*m) — returns index or string::npos
//   s.find("sub", pos) // search from pos
//   s.rfind("sub")     // reverse find (last occurrence)
//   s.find_first_of("abc")   // first occurrence of any char
//   s.find_last_of("abc")    // last occurrence of any char
//   s.find_first_not_of("abc")

// Substring & Compare:
//   s.substr(pos, len) // O(len) — extract substring
//   s.compare(s2)      // O(n) — 0 if equal, <0 or >0 otherwise

// Conversion:
//   stoi(s)            // string to int
//   stol(s)            // string to long
//   stoll(s)           // string to long long
//   stof(s)            // string to float
//   stod(s)            // string to double
//   to_string(42)      // int/float to string

// getline:
//   getline(cin, s);   // read entire line including spaces

// ──────────────────────────────────────────────────────────────────────────────
// 4. LIST (Doubly Linked List)
// ──────────────────────────────────────────────────────────────────────────────
// Header: <list>
// Doubly linked list. No random access. O(1) insert/delete anywhere with iterator.

//   list<int> l = {1, 2, 3, 4};
//   l.push_back(x)     // O(1)
//   l.push_front(x)    // O(1)
//   l.emplace_back(x)  // O(1)
//   l.emplace_front(x) // O(1)
//   l.pop_back()       // O(1)
//   l.pop_front()      // O(1)
//   l.insert(it, x)    // O(1) — insert before iterator
//   l.erase(it)        // O(1) — remove at iterator
//   l.remove(val)      // O(n) — remove all occurrences of val
//   l.remove_if(pred)  // O(n) — remove if predicate true
//   l.unique()         // O(n) — remove consecutive duplicates
//   l.sort()           // O(n log n) — merge sort (stable)
//   l.merge(l2)        // O(n+m) — merge sorted lists
//   l.reverse()        // O(n)
//   l.splice(it, l2)   // O(1) — transfer l2 into l before it
//   l.front()          // O(1) — first element
//   l.back()           // O(1) — last element
//   l.size()           // O(1) in C++11+

// ──────────────────────────────────────────────────────────────────────────────
// 5. DEQUE (Double-Ended Queue)
// ──────────────────────────────────────────────────────────────────────────────
// Header: <deque>
// Dynamic array with O(1) push/pop at both ends. Random access O(1).

//   deque<int> dq = {1, 2, 3};
//   dq.push_back(x)    // O(1) amortized
//   dq.push_front(x)   // O(1) amortized
//   dq.emplace_back(x) // O(1) amortized
//   dq.emplace_front(x)// O(1) amortized
//   dq.pop_back()      // O(1)
//   dq.pop_front()     // O(1)
//   dq[i]              // O(1) — random access
//   dq.at(i)           // O(1) — bounds checked
//   dq.front()         // O(1)
//   dq.back()          // O(1)
//   dq.insert(it, x)   // O(n)
//   dq.erase(it)       // O(n)
//   dq.size()          // O(1)
//   dq.empty()         // O(1)
//   dq.clear()         // O(n)

// ──────────────────────────────────────────────────────────────────────────────
// 6. STACK (LIFO)
// ──────────────────────────────────────────────────────────────────────────────
// Header: <stack>
// Last In First Out. Adapter over deque by default.

//   stack<int> st;
//   st.push(x)         // O(1) — push to top
//   st.emplace(x)      // O(1) — construct at top
//   st.pop()           // O(1) — remove top (void, does NOT return)
//   st.top()           // O(1) — access top element
//   st.size()          // O(1)
//   st.empty()         // O(1)
//   st.swap(st2)       // O(1)

// Applications: expression evaluation, parentheses matching,
//   next greater element, monotonic stack, undo operations, DFS

// ──────────────────────────────────────────────────────────────────────────────
// 7. QUEUE (FIFO)
// ──────────────────────────────────────────────────────────────────────────────
// Header: <queue>
// First In First Out. Adapter over deque by default.

//   queue<int> q;
//   q.push(x)          // O(1) — enqueue
//   q.emplace(x)       // O(1) — construct at back
//   q.pop()            // O(1) — dequeue from front (void)
//   q.front()          // O(1) — access front
//   q.back()           // O(1) — access back
//   q.size()           // O(1)
//   q.empty()          // O(1)
//   q.swap(q2)         // O(1)

// Applications: BFS, level order traversal, scheduling

// ──────────────────────────────────────────────────────────────────────────────
// 8. PRIORITY QUEUE (Heap)
// ──────────────────────────────────────────────────────────────────────────────
// Header: <queue>
// Binary heap. Default: max-heap. O(log n) push/pop. O(1) top.

//   // Max-heap (default):
//   priority_queue<int> pq;
//
//   // Min-heap:
//   priority_queue<int, vector<int>, greater<int>> minpq;
//
//   pq.push(x)         // O(log n) — insert
//   pq.emplace(x)      // O(log n) — construct in-place
//   pq.pop()           // O(log n) — remove top (void)
//   pq.top()           // O(1) — access max/min element
//   pq.size()          // O(1)
//   pq.empty()         // O(1)
//
//   // With pairs (sorted by first, then second):
//   priority_queue<pair<int,int>> pq_pair;
//   pq_pair.push({dist, node}); // Dijkstra pattern
//
//   // Custom comparator:
//   auto cmp = [](const pair<int,int>& a, const pair<int,int>& b) {
//       return a.second > b.second; // min-heap on second element
//   };
//   priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> pq(cmp);

// Applications: Dijkstra, Kruskal, K largest/smallest, median finding,
//   huffman coding, merge K sorted lists

// ──────────────────────────────────────────────────────────────────────────────
// 9. SET (Ordered, Unique)
// ──────────────────────────────────────────────────────────────────────────────
// Header: <set>
// Balanced BST (Red-Black Tree). Sorted, unique elements.
// All operations: O(log n).

//   set<int> s = {3, 1, 4, 1, 5}; // {1, 3, 4, 5} — duplicates removed
//   s.insert(x)        // O(log n)
//   s.emplace(x)       // O(log n)
//   s.erase(x)         // O(log n) — erase by value
//   s.erase(it)        // O(1) amortized — erase by iterator
//   s.erase(it1, it2)  // O(n) — erase range
//   s.find(x)          // O(log n) — returns iterator (or s.end())
//   s.count(x)         // O(log n) — 0 or 1
//   s.contains(x)      // O(log n) — C++20, returns bool
//   s.lower_bound(x)   // O(log n) — iterator to first ≥ x
//   s.upper_bound(x)   // O(log n) — iterator to first > x
//   s.equal_range(x)   // O(log n) — pair of {lower_bound, upper_bound}
//   s.size()           // O(1)
//   s.empty()          // O(1)
//   s.clear()          // O(n)
//   s.begin()          // iterator to smallest
//   s.rbegin()         // reverse iterator to largest
//
//   // Descending order set:
//   set<int, greater<int>> desc_set;

// ──────────────────────────────────────────────────────────────────────────────
// 10. MULTISET (Ordered, Allows Duplicates)
// ──────────────────────────────────────────────────────────────────────────────
// Header: <set>
// Like set but allows duplicate elements.

//   multiset<int> ms;
//   ms.insert(5); ms.insert(5); ms.insert(3);
//   // ms = {3, 5, 5}
//   ms.count(5)         // O(log n + count)
//   ms.erase(5)         // ⚠ removes ALL occurrences of 5
//   ms.erase(ms.find(5))// removes only ONE occurrence

// ──────────────────────────────────────────────────────────────────────────────
// 11. UNORDERED SET (Hash Set)
// ──────────────────────────────────────────────────────────────────────────────
// Header: <unordered_set>
// Hash table. Unique elements, no order.
// Average: O(1). Worst: O(n).

//   unordered_set<int> us;
//   us.insert(x)       // O(1) average
//   us.erase(x)        // O(1) average
//   us.find(x)         // O(1) average
//   us.count(x)        // O(1) average — 0 or 1
//   us.contains(x)     // O(1) average — C++20
//   us.bucket_count()  // number of buckets
//   us.load_factor()   // elements / buckets

// ──────────────────────────────────────────────────────────────────────────────
// 12. MAP (Ordered Key-Value)
// ──────────────────────────────────────────────────────────────────────────────
// Header: <map>
// Balanced BST (Red-Black Tree). Sorted by key. Unique keys.
// All operations: O(log n).

//   map<string, int> mp;
//   map<int, int> mp = {{1, 10}, {2, 20}, {3, 30}};
//
//   mp[key]             // O(log n) — access/create (creates if missing!)
//   mp[key] = val       // O(log n) — insert or update
//   mp.at(key)          // O(log n) — throws out_of_range if missing
//   mp.insert({key,val})// O(log n) — insert only if key doesn't exist
//   mp.emplace(key,val) // O(log n) — construct in-place
//   mp.erase(key)       // O(log n)
//   mp.erase(it)        // O(1) amortized
//   mp.find(key)        // O(log n) — iterator or mp.end()
//   mp.count(key)       // O(log n) — 0 or 1
//   mp.contains(key)    // O(log n) — C++20
//   mp.lower_bound(key) // O(log n)
//   mp.upper_bound(key) // O(log n)
//
//   // Iteration:
//   for (auto& [key, val] : mp) { /* structured bindings C++17 */ }

// ──────────────────────────────────────────────────────────────────────────────
// 13. MULTIMAP (Ordered, Duplicate Keys)
// ──────────────────────────────────────────────────────────────────────────────
// Header: <map>
// Like map but allows duplicate keys. No operator[].

//   multimap<int, string> mm;
//   mm.insert({1, "a"});
//   mm.insert({1, "b"});  // allowed!
//   mm.count(1)           // → 2
//   mm.equal_range(key)   // pair of iterators for all entries with key

// ──────────────────────────────────────────────────────────────────────────────
// 14. UNORDERED MAP (Hash Map)
// ──────────────────────────────────────────────────────────────────────────────
// Header: <unordered_map>
// Hash table. Unique keys, no order. Average O(1), worst O(n).

//   unordered_map<string, int> um;
//   um[key]             // O(1) avg — access/create
//   um[key] = val       // O(1) avg — insert/update
//   um.insert({k, v})   // O(1) avg
//   um.erase(key)       // O(1) avg
//   um.find(key)        // O(1) avg
//   um.count(key)       // O(1) avg — 0 or 1

// ──────────────────────────────────────────────────────────────────────────────
// 15. ITERATORS
// ──────────────────────────────────────────────────────────────────────────────
// Categories (weakest to strongest):
//   Input → Forward → Bidirectional → Random Access
// Input:        read, ++             (istream_iterator)
// Forward:      read/write, ++       (forward_list, unordered_set/map)
// Bidirectional: read/write, ++, --  (list, set, map)
// Random Access: read/write, ++, --, +n, -n, []  (vector, deque, array)

//   advance(it, n)      // move it n positions — O(1) random, O(n) others
//   next(it, n)         // iterator n ahead
//   prev(it, n)         // iterator n back
//   distance(it1, it2)  // count between — O(1) random, O(n) others

// ──────────────────────────────────────────────────────────────────────────────
// 16. ALGORITHMS (<algorithm>)
// ──────────────────────────────────────────────────────────────────────────────

// ── Sorting ──
//   sort(v.begin(), v.end());                    // O(n log n) — introsort
//   sort(v.begin(), v.end(), greater<int>());    // descending
//   sort(v.begin(), v.end(), [](int a, int b) { return a > b; }); // custom
//   stable_sort(v.begin(), v.end());             // O(n log n) — preserves order
//   partial_sort(v.begin(), v.begin()+k, v.end()); // O(n log k) — first k sorted
//   nth_element(v.begin(), v.begin()+k, v.end());  // O(n) avg — kth in place
//   is_sorted(v.begin(), v.end());               // O(n)

// ── Searching ──  (⚠ Binary search requires sorted range!)
//   binary_search(v.begin(), v.end(), x);        // O(log n) — true/false
//   lower_bound(v.begin(), v.end(), x);          // O(log n) — first ≥ x
//   upper_bound(v.begin(), v.end(), x);          // O(log n) — first > x
//   equal_range(v.begin(), v.end(), x);          // O(log n) — {lower,upper}
//   find(v.begin(), v.end(), x);                 // O(n) — linear search
//   find_if(v.begin(), v.end(), pred);           // O(n)
//   count(v.begin(), v.end(), x);                // O(n)
//   count_if(v.begin(), v.end(), pred);          // O(n)

// ── Permutations ──
//   next_permutation(v.begin(), v.end());        // O(n) — next lexicographic
//   prev_permutation(v.begin(), v.end());        // O(n) — previous
//   // Returns false when wrapping around

// ── Modifying ──
//   reverse(v.begin(), v.end());                 // O(n)
//   rotate(v.begin(), v.begin()+k, v.end());     // O(n) — left rotate by k
//   unique(v.begin(), v.end());                  // O(n) — remove consecutive dups
//   // ⚠ unique + erase: v.erase(unique(v.begin(), v.end()), v.end());
//   fill(v.begin(), v.end(), val);               // O(n)
//   swap(a, b);                                  // O(1)
//   replace(v.begin(), v.end(), old_val, new_val);// O(n)
//   transform(v.begin(), v.end(), v.begin(), func);// O(n)

// ── Min/Max ──
//   *min_element(v.begin(), v.end());            // O(n)
//   *max_element(v.begin(), v.end());            // O(n)
//   auto [mn, mx] = minmax_element(v.begin(), v.end()); // O(n) both
//   min(a, b); max(a, b);                        // O(1)
//   min({a, b, c, d});                           // initializer list
//   clamp(val, lo, hi);                          // C++17

// ── Set Operations (sorted ranges) ──
//   merge(v1.begin(), v1.end(), v2.begin(), v2.end(), out.begin());
//   set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), out);
//   set_intersection(...);  set_difference(...);
//   includes(v1.begin(), v1.end(), v2.begin(), v2.end()); // subset check

// ── Partition ──
//   partition(v.begin(), v.end(), pred);         // O(n)
//   stable_partition(v.begin(), v.end(), pred);  // O(n)
//   partition_point(v.begin(), v.end(), pred);   // O(log n)

// ── Heap Operations ──
//   make_heap(v.begin(), v.end());               // O(n)
//   push_heap(v.begin(), v.end());               // O(log n) — after push_back
//   pop_heap(v.begin(), v.end());                // O(log n) — move max to end
//   sort_heap(v.begin(), v.end());               // O(n log n)

// ── Other ──
//   copy(v.begin(), v.end(), out.begin());       // O(n)
//   copy_if(v.begin(), v.end(), back_inserter(out), pred); // O(n)
//   for_each(v.begin(), v.end(), func);          // O(n)
//   all_of(v.begin(), v.end(), pred);            // O(n)
//   any_of(v.begin(), v.end(), pred);            // O(n)
//   none_of(v.begin(), v.end(), pred);           // O(n)

// ──────────────────────────────────────────────────────────────────────────────
// 17. NUMERIC (<numeric>)
// ──────────────────────────────────────────────────────────────────────────────

//   #include <numeric>
//   accumulate(v.begin(), v.end(), init);        // O(n) — sum
//   accumulate(v.begin(), v.end(), 1, multiplies<int>()); // product
//   partial_sum(v.begin(), v.end(), out.begin()); // O(n) — prefix sums
//   // [1,2,3,4] → [1,3,6,10]
//   adjacent_difference(v.begin(), v.end(), out); // O(n)
//   // [1,3,6,10] → [1,2,3,4]
//   inner_product(v1.begin(), v1.end(), v2.begin(), init); // dot product
//   iota(v.begin(), v.end(), start);             // O(n) — fill start, start+1...
//   gcd(a, b);  // C++17 — greatest common divisor
//   lcm(a, b);  // C++17 — least common multiple

// ──────────────────────────────────────────────────────────────────────────────
// 18. BIT MANIPULATION
// ──────────────────────────────────────────────────────────────────────────────

// Operators:
//   a & b   AND    a | b   OR     a ^ b   XOR
//   ~a      NOT    a << n  Left   a >> n  Right

// GCC Built-ins:
//   __builtin_popcount(x)        // count set bits (int)
//   __builtin_popcountll(x)      // count set bits (long long)
//   __builtin_clz(x)             // count leading zeros
//   __builtin_ctz(x)             // count trailing zeros
//   __builtin_parity(x)          // 1 if odd number of set bits
//   __lg(x)                      // floor(log2(x)) for x > 0

// Common Tricks:
//   x & (x - 1)     // turn off rightmost set bit
//   x & (-x)        // isolate rightmost set bit
//   (1 << k)        // 2^k
//   x & (1 << k)    // check if kth bit set
//   x | (1 << k)    // set kth bit
//   x & ~(1 << k)   // clear kth bit
//   x ^ (1 << k)    // toggle kth bit
//   (x >> k) & 1    // get kth bit (0 or 1)
//   (1 << n) - 1    // n ones: 0..0111..1

// Check power of 2:  (x & (x - 1)) == 0 && x > 0

// Iterate submasks:
//   for (int sub = mask; sub > 0; sub = (sub - 1) & mask) { }

// ──────────────────────────────────────────────────────────────────────────────
// 19. LAMBDA & COMPARATORS
// ──────────────────────────────────────────────────────────────────────────────

// Lambda: [capture](params) -> return_type { body }
//   auto add = [](int a, int b) { return a + b; };
//   [x]()     // capture x by value
//   [&x]()    // capture x by reference
//   [=]()     // capture all by value
//   [&]()     // capture all by reference

// Custom comparator for sort:
//   sort(v.begin(), v.end(), [](auto& a, auto& b) { return a.second < b.second; });

// Comparator for priority_queue (reversed logic!):
//   auto cmp = [](int a, int b) { return a > b; }; // min-heap

// Comparator struct for set/map:
//   struct Cmp { bool operator()(int a, int b) const { return a > b; } };
//   set<int, Cmp> s;  // descending set

// ──────────────────────────────────────────────────────────────────────────────
// 20. COMPETITIVE PROGRAMMING SHORTCUTS
// ──────────────────────────────────────────────────────────────────────────────

//   #include <bits/stdc++.h>  // includes everything (CP only!)
//   using namespace std;
//   typedef long long ll;
//   typedef pair<int,int> pii;
//   typedef vector<int> vi;
//   #define pb push_back
//   #define all(x) (x).begin(), (x).end()
//   #define sz(x) (int)(x).size()
//   const int MOD = 1e9 + 7;
//   const int INF = 1e9;
//   const ll LLINF = 1e18;
//
//   // Fast I/O:
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

// ──────────────────────────────────────────────────────────────────────────────
// 21. COMMON DSA PATTERNS
// ──────────────────────────────────────────────────────────────────────────────

// ── Two Pointers ──
// Use: sorted arrays, pair sum, remove duplicates, container with water
// Time: O(n)
//   // Example: Two Sum in sorted array — find pair summing to target
//   int left = 0, right = n - 1;
//   while (left < right) {
//       int sum = arr[left] + arr[right];
//       if (sum == target) { /* found */ break; }
//       else if (sum < target) left++;
//       else right--;
//   }

// ── Sliding Window ──
// Use: subarray problems — max/min sum of size k, longest substring without repeats
// Time: O(n)
//   // Example: Maximum sum subarray of size k
//   int maxSum = 0, windowSum = 0;
//   for (int i = 0; i < n; i++) {
//       windowSum += arr[i];
//       if (i >= k) windowSum -= arr[i - k];
//       if (i >= k - 1) maxSum = max(maxSum, windowSum);
//   }

// ── Kadane's Algorithm ──
// Use: maximum subarray sum (contiguous), can extend to max product, circular arrays
// Time: O(n)  Space: O(1)
//   // Example: Maximum subarray sum
//   int maxSum = arr[0], curSum = arr[0];
//   for (int i = 1; i < n; i++) {
//       curSum = max(arr[i], curSum + arr[i]);  // extend or restart
//       maxSum = max(maxSum, curSum);
//   }
//   // Variation: track indices
//   int start = 0, end = 0, tempStart = 0;
//   int maxSum = arr[0], curSum = arr[0];
//   for (int i = 1; i < n; i++) {
//       if (arr[i] > curSum + arr[i]) {
//           curSum = arr[i]; tempStart = i;
//       } else { curSum += arr[i]; }
//       if (curSum > maxSum) { maxSum = curSum; start = tempStart; end = i; }
//   }

// ── Binary Search ──
// Use: sorted data, search space reduction, answer on monotonic function
// Time: O(log n)
//   // Example: Find first occurrence of target in sorted array
//   int lo = 0, hi = n - 1, ans = -1;
//   while (lo <= hi) {
//       int mid = lo + (hi - lo) / 2;
//       if (arr[mid] == target) { ans = mid; hi = mid - 1; } // go left for first
//       else if (arr[mid] < target) lo = mid + 1;
//       else hi = mid - 1;
//   }

// ── Prefix Sum ──
// Use: range sum queries O(1) after O(n) preprocess, subarray sum equals k
// Time: O(n) build, O(1) query
//   // Example: Range sum query [l, r]
//   vector<int> prefix(n + 1, 0);
//   for (int i = 0; i < n; i++) prefix[i + 1] = prefix[i] + arr[i];
//   int rangeSum = prefix[r + 1] - prefix[l]; // sum of arr[l..r]
//   // Example: Count subarrays with sum = k (using hash map)
//   unordered_map<int,int> prefCount; prefCount[0] = 1;
//   int sum = 0, count = 0;
//   for (int x : arr) {
//       sum += x;
//       if (prefCount.count(sum - k)) count += prefCount[sum - k];
//       prefCount[sum]++;
//   }

// ── Monotonic Stack ──
// Use: next greater/smaller element, largest rectangle in histogram, stock span
// Time: O(n)
//   // Example: Next Greater Element for each index
//   vector<int> nge(n, -1);
//   stack<int> st; // stores indices
//   for (int i = 0; i < n; i++) {
//       while (!st.empty() && arr[st.top()] < arr[i]) {
//           nge[st.top()] = arr[i];
//           st.pop();
//       }
//       st.push(i);
//   }

// ── BFS / DFS ──
// Use: graph traversal, connected components, shortest path (unweighted), cycle detection
// Time: O(V + E)
//   // Example: BFS — shortest path in unweighted graph
//   vector<int> dist(V, -1);
//   queue<int> q;
//   dist[src] = 0; q.push(src);
//   while (!q.empty()) {
//       int u = q.front(); q.pop();
//       for (int v : adj[u]) {
//           if (dist[v] == -1) { dist[v] = dist[u] + 1; q.push(v); }
//       }
//   }
//   // Example: DFS — recursive
//   vector<bool> visited(V, false);
//   void dfs(int u) {
//       visited[u] = true;
//       for (int v : adj[u]) if (!visited[v]) dfs(v);
//   }

// ── Dijkstra ──
// Use: shortest path in weighted graph (non-negative weights)
// Time: O((V + E) log V) with priority_queue
//   // Example: Single-source shortest path
//   vector<int> dist(V, INT_MAX);
//   priority_queue<pii, vector<pii>, greater<pii>> pq; // {dist, node}
//   dist[src] = 0; pq.push({0, src});
//   while (!pq.empty()) {
//       auto [d, u] = pq.top(); pq.pop();
//       if (d > dist[u]) continue; // stale entry
//       for (auto [v, w] : adj[u]) {
//           if (dist[u] + w < dist[v]) {
//               dist[v] = dist[u] + w;
//               pq.push({dist[v], v});
//           }
//       }
//   }

// ── Union-Find (Disjoint Set Union) ──
// Use: connected components, cycle detection, Kruskal's MST
// Time: O(α(n)) ≈ O(1) per operation with path compression + union by rank
//   // Example:
//   vector<int> parent(n), rank_(n, 0);
//   iota(parent.begin(), parent.end(), 0); // parent[i] = i
//   int find(int x) {
//       if (parent[x] != x) parent[x] = find(parent[x]); // path compression
//       return parent[x];
//   }
//   void unite(int a, int b) {
//       a = find(a); b = find(b);
//       if (a == b) return;
//       if (rank_[a] < rank_[b]) swap(a, b);
//       parent[b] = a;
//       if (rank_[a] == rank_[b]) rank_[a]++;
//   }

// ── Dynamic Programming (DP) ──
// Use: overlapping subproblems + optimal substructure (knapsack, LIS, LCS, coin change)
// Time: varies, typically O(n²) or O(n * capacity)
//   // Example: 0/1 Knapsack
//   vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
//   for (int i = 1; i <= n; i++)
//       for (int w = 0; w <= W; w++) {
//           dp[i][w] = dp[i-1][w]; // don't take
//           if (wt[i-1] <= w)
//               dp[i][w] = max(dp[i][w], dp[i-1][w - wt[i-1]] + val[i-1]);
//       }
//   // Answer: dp[n][W]
//   // Example: Longest Increasing Subsequence O(n log n)
//   vector<int> tails;
//   for (int x : arr) {
//       auto it = lower_bound(tails.begin(), tails.end(), x);
//       if (it == tails.end()) tails.push_back(x);
//       else *it = x;
//   }
//   int LIS_length = tails.size();

// ── Bit Masking ──
// Use: subset enumeration, DP on subsets (TSP, assignment), power set
// Time: O(2^n * n) typically
//   // Example: Iterate all subsets of a set of n elements
//   for (int mask = 0; mask < (1 << n); mask++) {
//       for (int i = 0; i < n; i++) {
//           if (mask & (1 << i)) { /* element i is in subset */ }
//       }
//   }

// ── Divide and Conquer ──
// Use: merge sort, quick select (kth smallest), closest pair of points
// Time: O(n log n) typically
//   // Example: Merge Sort
//   void mergeSort(vector<int>& arr, int l, int r) {
//       if (l >= r) return;
//       int mid = l + (r - l) / 2;
//       mergeSort(arr, l, mid);
//       mergeSort(arr, mid + 1, r);
//       // merge two sorted halves arr[l..mid] and arr[mid+1..r]
//       vector<int> tmp;
//       int i = l, j = mid + 1;
//       while (i <= mid && j <= r)
//           tmp.push_back(arr[i] <= arr[j] ? arr[i++] : arr[j++]);
//       while (i <= mid) tmp.push_back(arr[i++]);
//       while (j <= r) tmp.push_back(arr[j++]);
//       for (int k = l; k <= r; k++) arr[k] = tmp[k - l];
//   }

// ── Greedy ──
// Use: local optimal → global optimal (activity selection, fractional knapsack, Huffman)
// Time: O(n log n) typically (due to sorting)
//   // Example: Activity Selection — max non-overlapping intervals
//   // intervals sorted by end time
//   sort(intervals.begin(), intervals.end(),
//        [](auto& a, auto& b) { return a.second < b.second; });
//   int count = 1, lastEnd = intervals[0].second;
//   for (int i = 1; i < n; i++) {
//       if (intervals[i].first >= lastEnd) {
//           count++;
//           lastEnd = intervals[i].second;
//       }
//   }

// ── Backtracking ──
// Use: constraint satisfaction, permutations, N-Queens, Sudoku solver, combinations
// Time: O(n!) or O(2^n) depending on problem
//   // Example: Generate all permutations
//   void permute(vector<int>& arr, int idx, vector<vector<int>>& result) {
//       if (idx == arr.size()) { result.push_back(arr); return; }
//       for (int i = idx; i < arr.size(); i++) {
//           swap(arr[idx], arr[i]);
//           permute(arr, idx + 1, result);
//           swap(arr[idx], arr[i]); // backtrack
//       }
//   }

// ──────────────────────────────────────────────────────────────────────────────
// TIME COMPLEXITY SUMMARY
// ──────────────────────────────────────────────────────────────────────────────
//
// Container        Access   Insert    Delete    Search    Ordered?
// ─────────────────────────────────────────────────────────────────
// vector           O(1)     O(n)*     O(n)*     O(n)      No
// list             O(n)     O(1)      O(1)      O(n)      No
// deque            O(1)     O(1)**    O(1)**    O(n)      No
// set              O(log n) O(log n)  O(log n)  O(log n)  Yes
// multiset         O(log n) O(log n)  O(log n)  O(log n)  Yes
// unordered_set    O(1)     O(1)      O(1)      O(1)      No
// map              O(log n) O(log n)  O(log n)  O(log n)  Yes
// multimap         O(log n) O(log n)  O(log n)  O(log n)  Yes
// unordered_map    O(1)     O(1)      O(1)      O(1)      No
// stack            O(1)     O(1)      O(1)      N/A       N/A
// queue            O(1)     O(1)      O(1)      N/A       N/A
// priority_queue   O(1)     O(log n)  O(log n)  N/A       N/A
//
// * vector: O(1) amortized at end
// ** deque: O(1) at both ends, O(n) in middle
// unordered: O(1) average, O(n) worst case

