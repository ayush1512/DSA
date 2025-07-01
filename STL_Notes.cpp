Standard Template Library (STL) Functions in C++

1. Pair
- Defined in <utility>.
- Stores two values (possibly of different types).
- Access with .first and .second.
Example:
  pair<int, char> p;
  p.first = 10;
  p.second = 'a';

2. Vector
- Defined in <vector>.
- Dynamic array, resizes automatically.
- Functions: push_back, emplace_back, erase, insert, pop_back, clear, empty, size, swap.
- Access: v[index], v.at(index), v.front(), v.back().
- Iterators: begin(), end(), rbegin(), rend().

3. List
- Defined in <list>.
- Doubly linked list.
- Functions: push_back, emplace_back, iterators for traversal.

4. Deque
- Defined in <deque>.
- Double-ended queue.
- Functions: push_back, push_front, emplace_front, iterators for traversal.

5. Stack
- Defined in <stack>.
- LIFO structure.
- Functions: push, emplace, top, pop, empty.

6. Queue
- Defined in <queue>.
- FIFO structure.
- Functions: push, emplace, front, pop, empty.

7. Priority Queue
- Defined in <queue>.
- Stores elements in sorted order (by default, max-heap).
- Functions: push, emplace, top, pop, empty.

8. Set
- Defined in <set>.
- Stores unique, sorted elements.
- Functions: insert, emplace, iterators for traversal.

9. Unordered Set
- Defined in <unordered_set>.
- Stores unique, unordered elements.
- Functions: insert, emplace.

10. Multiset
- Defined in <set>.
- Stores duplicate, sorted elements.
- Functions: insert, emplace.

11. Map
- Defined in <map>.
- Stores key-value pairs, sorted by key.
- Functions: operator[], iterators for traversal.

12. Unordered Map
- Defined in <unordered_map>.
- Stores key-value pairs, unordered.
- Functions: operator[], iterators for traversal.

13. Multimap
- Defined in <map>.
- Stores duplicate key-value pairs, sorted by key.
- Functions: insert, iterators for traversal.

14. Algorithms
- Defined in <algorithm>.
- Functions: sort, reverse, max_element, next_permutation.
- Custom comparator can be used with sort.
Example:
  int a[] = {1, 5, 3, 2};
  sort(a, a + 4); // ascending
  sort(a, a + 4, greater<int>()); // descending
  reverse(a, a + 4);
  int max = *max_element(a, a + 4);

15. Bit Manipulation
- Functions: __builtin_popcount, __builtin_popcountll (count set bits).

