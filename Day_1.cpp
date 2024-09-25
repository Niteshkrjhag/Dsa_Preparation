/*

The erase() function is used to remove elements from a 
container (such as std::vector, std::list, std::deque, std::map, std::set, etc.).


### 1. **For `std::vector`, `std::deque`, and `std::string`**:

   - **Single Element Removal**:
     Removes the element at the given iterator position.
     ```cpp
     std::vector<int> v = {1, 2, 3, 4, 5};
     v.erase(v.begin() + 2);  // Removes the element at index 2 (i.e., '3')
     // Result: v = {1, 2, 4, 5}
     ```

   - **Range Removal**:
     Removes all elements within the range `[first, last)` (from `first` to `last-1`).
     ```cpp
     std::vector<int> v = {1, 2, 3, 4, 5};
     v.erase(v.begin() + 1, v.begin() + 4);  // Removes elements at index 1 to 3
     // Result: v = {1, 5}
     ```

### 2. **For `std::list`**:
   The behavior is similar to `std::vector`, but since `std::list` is a doubly linked list, removing elements is more efficient because it doesn’t require shifting the remaining elements.

   - **Single Element Removal**:
     ```cpp
     std::list<int> lst = {1, 2, 3, 4, 5};
     lst.erase(++lst.begin());  // Removes the second element (i.e., '2')
     // Result: lst = {1, 3, 4, 5}
     ```

   - **Range Removal**:
     ```cpp
     std::list<int> lst = {1, 2, 3, 4, 5};
     lst.erase(++lst.begin(), --lst.end());  // Removes from the second to the second-last element
     // Result: lst = {1, 5}
     ```

### 3. **For `std::set`, `std::map`, `std::unordered_set`, `std::unordered_map`**:
   These containers don’t have direct indexing, so `erase()` removes elements by key or iterator.

   - **Single Element Removal by Key**:
     For `std::set`, `std::map`, `std::unordered_set`, and `std::unordered_map`, you can erase elements by their key.
     ```cpp
     std::set<int> s = {1, 2, 3, 4, 5};
     s.erase(3);  // Removes the element '3'
     // Result: s = {1, 2, 4, 5}
     ```

   - **Single Element Removal by Iterator**:
     ```cpp
     std::set<int> s = {1, 2, 3, 4, 5};
     s.erase(s.find(2));  // Removes the element '2'
     // Result: s = {1, 3, 4, 5}
     ```

   - **Range Removal**:
     ```cpp
     std::set<int> s = {1, 2, 3, 4, 5};
     s.erase(s.begin(), s.find(4));  // Removes elements from 1 to 3
     // Result: s = {4, 5}
     ```

### Return Value
- In most cases, `erase()` returns an iterator pointing to the element immediately following the one that was removed, or `end()` if the erased element was the last one.
  
### Summary
The `erase()` function in C++ is used to remove elements (by position, key, or range) from various STL containers like `vector`, `list`, `map`, `set`, etc.


*/
#) solve using two pointer approach 
problem -> https://leetcode.com/problems/max-number-of-k-sum-pairs/description/?envType=study-plan-v2&envId=leetcode-75
solutin -> https://leetcode.com/problems/max-number-of-k-sum-pairs/solutions/5501578/simple-code-easy-to-understand-beats-100-beginner-friendly