# Dynamic Arrays

Simply use the vector data structure.

### Initialisation:

vector<int> vec(10)
vector<int> vec(10, 5)

### Operations:

vec.back()
vec.pop_back()
vec.size()

# Strings

Very standard, but there is an equivalent of slicing:

string sub = word.substr(3, 5);

# Set

Operations work in O(n) time, useful for storing occurrences of a unique element.

### Operations:

s.insert(3)
count = s.count(3)
size = s.size()

# Multiset

Set, but it is possible to have multiple occurrences.

### Operations:

s.insert(3)
s.count(3)
s.erase(3) — erases all occurrences.
s.erase(s.find(5)) — erases one occurrence.

# Bitset

An array, whose each value is either 0 or 1. By default, each value is 1.

### Operations

s.count() — returns the number of 1s.
a&b — bitset where both align at 1
a|b — bitset where either is 1
a^b — exclusive or

# Deque

A deque is a dynamic array whose size can be efficiently changed at both ends of the array.

### Operations

d.push_back(5)
d.pop_back()
d.push_front(5)
d.pop_front()

# Stack

A stack is a data structure that provides two O(1) time operations: adding an element to the top, and removing an element from the top.

### Operations

s.push(1)
s.top()
s.pop()

# Queue

A queue also provides two O(1) time operations: adding an element to the end of the queue, and removing the first element in the queue. It is only possible to access the first and last element of a queue.

### Operations

q.push(1)
q.front()
q.pop()

# Priority Queue

A priority queue is a type of queue that arranges elements based on their priority values. By default, they prioritise higher values.

### Operations

q.push(1)
q.top()
q.pop()

### Changing prioritites

priority_queue<int,vector<int> greater<int>> q;
