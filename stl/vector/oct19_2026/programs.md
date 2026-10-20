Part 1: 10 basic vector programs
Focus on how vectors store elements, grow, access data, and modify their contents. Try these without using advanced STL algorithms initially.

1

Create and display a vector
Create a vector of integers, insert 5 numbers using push_back(), and display them using a normal for loop.
Learn: vector, push_back(), size(), indexing



2

Insert elements at a specific position
Start with {10, 20, 40, 50} and insert 30 at index 2.
Expected: {10, 20, 30, 40, 50}.
Learn: begin(), iterators, insert()



3

Delete an element
Start with {10, 20, 30, 40, 50} and remove the element at index 2.
Expected: {10, 20, 40, 50}.
Learn: erase(), iterator positions



4

Access and update elements
Create {10, 20, 30, 40}. Update the element at index 1 to 99 and print the first and last elements.
Learn: [], at(), front(), back()



5

Traverse using different loops
Display the same vector using an index-based loop, an iterator, and a range-based for loop.
Learn: iterators, begin(), end(), auto



6

Find vector size and capacity
Create an empty vector, insert elements one by one, and print size() and capacity() after each insertion.
Learn: size(), capacity(), reserve(), clear()



7

Copy one vector into another
Copy {1, 2, 3, 4} into another vector. Modify the copy and verify 
that the original remains unchanged.
Learn: copy construction, assignment, independent storage



8

Reverse a vector manually
Reverse {1, 2, 3, 4, 5} without using std::reverse().
Learn: index manipulation, swapping, two pointers



9

Merge two vectors manually
Combine {1, 2, 3} and {4, 5, 6} into one vector using loops and push_back().
Learn: multiple vectors, traversal, insertion



10

Split even and odd numbers
Given {1, 2, 3, 4, 5, 6}, create two vectors: one containing even numbers and the other containing odd numbers.
Learn: conditions, traversal, multiple output vectors



Part 2: 10 algorithm-based vector programs
Now solve similar problems using STL algorithms. First attempt each problem with loops, then solve it with the suggested algorithm.
1

Sort in ascending and descending order
Input: {5, 2, 8, 1, 3}.
Expected ascending: {1, 2, 3, 5, 8}.
Algorithms: std::sort(), std::greater<int>()



2

Find maximum and minimum
Input: {12, 5, 30, 7, 2}.
Expected minimum: 2, maximum: 30.
Algorithms: std::min_element(), std::max_element()



3

Count occurrences of an element
Input: {1, 2, 2, 3, 2, 4}. Count occurrences of 2.
Expected: 3.
Algorithm: std::count()



4

Find an element and its index
Search for 30 in {10, 20, 30, 40}. Print its index, or report that it was not found.
Algorithms: std::find(), iterator subtraction



5

Find the first element matching a condition
Find the first even number in {1, 3, 7, 8, 10}.
Expected: 8.
Algorithm: std::find_if() with a lambda



6

Remove duplicate elements
Input: {1, 2, 2, 3, 3, 4}.
Expected: {1, 2, 3, 4}.
Algorithms: std::sort(), std::unique(), erase()



7

Remove elements using a condition
Remove all even numbers from {1, 2, 3, 4, 5, 6}.
Expected: {1, 3, 5}.
Algorithms: std::remove_if(), erase()



8

Binary search in a sorted vector
Check whether 7 exists in {1, 3, 5, 7, 9}.
Algorithm: std::binary_search(); data must be sorted.



9

Find lower and upper bounds
For sorted vector {10, 20, 20, 20, 30, 40}, find the range of 20.
Expected: first position 1, one-past-last position 4.
Algorithms: std::lower_bound(), std::upper_bound()



10

Transform every element
Double every value in {1, 2, 3, 4, 5}.
Expected: {2, 4, 6, 8, 10}.
Algorithm: std::transform() with a lambda