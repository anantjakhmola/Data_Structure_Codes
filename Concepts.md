# Data Structures Using C
## Array
Arrays
An Array is a variable that can store multiple values of the same datatype. Array is a contiguous memory segment.

Example:

If you want to store 100 integers, you can use one array instead of using 100 different integer variables.

Syntax for declaration of array:

data_type   array_name[array_size];
Amount of space allocated = sizeof(data_type) * array_size
## Structures

Structure is a collection of variables(can be of different data types), under a single name.
It is also a contiguous memory segment like array, but it allows data members of different data types.
Example:

struct student
{
   int roll_number;
   char name[20];
};
## Syntax for variable declaration:

struct structure_name variable_name;
## Pointers
Pointers are the special type of variables that stores the address, rather than the value of the variable.
They are used for indirect access of variables.
If var is the name of variable, then &var gives the address of var.

scanf(“%d”, &var);

We are not interested in addresses, but the values stored at that address.

Syntax for declaration of pointer:

data_type* pointer_name; // (* = asterisk)   

Example:

int* ptr;
Pointer may point to any datatype
It can hold address of any variable of the datatype it is pointing to.
An uninitialized pointer variable has NULL value.
## Pointer to the Structure
Pointer to the structure can be declared as normal variable.
Example:

struct student *p;
Here,  p is pointer and *p is the structure

## Dynamic Memory Allocation
As you know, an array is a collection of a fixed number of values. Once the size of an array is declared, you cannot change it.

Sometimes the size of an array you declare may be insufficient. To solve this issue, you can allocate memory dynamically at runtime. This is known as dynamic memory allocation.

Predefined functions used in dynamic memory allocation:

1. malloc()
malloc stands for memory allocation.
The malloc() function reserves a block of memory of the specified number of bytes and void* which can be casted into pointers of any form.
Syntax of malloc():

pointer_name = (cast_datatype*)malloc(size);
2. free()
Dynamically allocated memory using malloc() doesn’t get freed on its own. You must explicitly use free() to release this space.
Syntax for free:

free(pointer_name);
Note: These functions are declared in header file stdlib.h. To use these functions, you must first include this header.

### Minimum number of queues needed to implement the priority queue?
Ans: Two. One queue is used for actual storing of data and another for storing
priorities.
### .What is the data structures used to perform recursion?
Ans: Stack. Because of its LIFO (Last In First Out) property it remembers its 'caller' so
knows whom to return when the function has to return. Recursion makes use of system
stack for storing the return addresses of the function calls.
Every recursive function has its equivalent iterative (non-recursive) function. Even when
such equivalent iterative procedures are written, explicit stack is to be used.
### Q7. How many null nodes will a binary tree with 20 nodes
have? Ans: 21
[Hint: Let us take a tree with 5 nodes (n=5)
It will have only 6 (ie,5+1) null branches.
A binary tree with n nodes has exactly n+1 null nodes.

### 8. What are the methods available in storing sequential
files?
Ans: The methods available in storing sequential files are:
•Straight merging,
•Natural merging,
•Polyphase sort,
•Distribution of Initial runs

### In tree construction which is the suitable efficient data
structure?
Ans: Linked list is the efficient data structure
### .There are 8, 15, 13, 14 nodes were there in 4 different trees. Which of them could
have formed a full binary tree?
Ans: 15
[Hint : In general:There are 2n-1 nodes in a full binary tree.
By the method of elimination:Full binary trees contain odd number of nodes. So there
cannot be full binary trees with 8 or 14 nodes, so rejected. With 13 nodes you can form a
complete binary tree but not a full binary tree. So the correct answer is 15. ] 

### What is a spanning Tree?
Ans: A spanning tree is a tree associated with a network. All the nodes of the graph
appear on the tree once. A minimum spanning tree is a spanning tree organized so that
the total edge weight between nodes is minimized.

### What is the difference between a queue and a stack?
Ans: A queue is typically FIFO (priority queues don't quite follow that) while a stack is
LIFO. Elements get inserted at one end of a queue and retrieved from the other, while
the insertion and removal operations for a stack are done at the same end.

 ### What is the difference between storing data on the heap vs. on the stack?
Ans: The stack is smaller, but quicker for creating variables, while the heap is limited in
size only by how much memory can be allocated. Stack would include most compile
time variables, while heap would include anything created with malloc or new. (This is
for C/C++, and not strictly the case.)

###  List out few of the Application of tree data structure?
Ans: The list is as follows:
•The manipulation of Arithmetic
expression,
•Symbol Table construction,
•Syntax analysis.
### What are priority queues?
Ans: A priority queue is a collection of elements such that each element has been
assigned a priority
 
 ### What is the condition to be checked for the multiplication of two matrices?
Ans :If matrices are to be multiplied, the number of columns of first matrix should be
equal to the number of rows of second matrix.

### 4.What is a string?
Ans:A sequential array of characters is called a string.

### What is use terminating null character?
Ans :Null character is used to check the end of string.

### What is an empty string?
Ans :A string with zero character is called an empty string.

### What are the operations that can be performed on a string?
Ans:The following are the operations that can be performed on a string: finding the
length of string, copying string, string comparison, string concatenation, finding
substring etc.

### .What are the limitations of arrays?
Ans :The following are the limitations of arrays:
Arrays are of fixed size.
Data elements are stored in continuous memory locations which may not be available
always.
Adding and removing of elements is problematic because of shifting the locations.


### How can you overcome the limitations of arrays?
Ans :Limitations of arrays can be solved by using the linked list.

### What is a linked list?
Ans :Linked list is a data structure which store same kind of data elements but not in
continuous memory locations and size is not fixed. The linked lists are related logically.

### What is the difference between an array and a linked list?
Ans :The size of an array is fixed whereas size of linked list is variable.
In array the data elements are stored in continuous memory locations but in linked list
it is non continuous memory locations.
Addition, removal of data is easy in linked list whereas in arrays it is complicated.

### What is a node?
Ans :The data element of a linked list is called a node.

### What does node consist of?
Ans :Node consists of two fields:
data field to store the element and link field to store the address of the next node

### .What is sorting?
Ans : Sorting is the process of arranging elements in some logical order.Sorting
methods are classified into the following categories: External sorting: This deals with
sorting of data stored in external files. This method is used when the volume of data
is very large and cannot be held in a computer’s RAM . Internal sorting: This deals
with sorting of data held in the RAM of a computer.

### List some popular sorting methods.
Ans: Popular sorting methods:
 Bubble sort
 Bucket sort
 Insertion sort
 Merge sort
 Quick sort
 Selection sort
 Shell sort

### Explain bubble sort.
Ans : It requires n-1 passes to sort an array.
 In each pass every element a[i] is compared with a[i+1], for i=0 to (n-k-1), where
k is the pass number and if they are out of order i.e. if a[i]>a[i+1], they are
swapped.
 This will cause the largest element to move up or bubble up.
 Thus after the end of the first pass the largest element in the array will be
placed in the last or nth position and on the next pass, the next largest element
will be placed at position (n-1). This continues for each successive pass until
the last or (n-1)th pass when the second smallest element will be placed at the
second position. 

### What is insertion sort?
Ans : This algorithm is very popular with bridge players when they sort their cards. In this
procedure, we pick up a particular value and then insert it at the appropriate place in the
sorted sub list.

### What is merge sort?
Ans: Merging means combining elements of two arrays to form a new array. The
simplest way of merging two arrays is to first copy all the elements of one array into a
new array and then append all the elements of the second array to the new array. If you
want the resultant array to be sorted, you can sort it by any of the sorting techniques. If
the arrays are originally in sorted order, they can be merged in such a way as to ensure
that the combined array is also sorted. This technique is known as merge sort.

### Name some operations on Linked Lists.
The main operations that are performed on a linked list are the following:
 Traversing and searching
 Inserting
 Deleting

### What is a heap?
Ans: A binary tree has the heap property iff
a. it is empty or
b. the key in the root is larger than that in either child and both subtrees have the
heap property.
A heap can be used as a priority queue: the highest priority item is at the root and is
trivially extracted. But if the root is deleted, we are left with two sub-trees and we
must efficiently re-create a single tree with the heap property.
The value of the heap structure is that we can both extract the highest priority item
and insert a new one in O(logn) time.

### Define AVL trees.
Ans : An AVL tree is a binary search tree which has the following properties:
1. The sub-trees of every node differ in height by at most one.
2. Every sub-tree is an AVL tree.

### Explain Djiksatras algorithm.
Answer: Djikstra's algorithm (named after its discover, E.W. Dijkstra) solves the problem
of finding the shortest path from a point in a graph (the source) to a destination. It turns
out that one can find the shortest paths from a given source to all points in a graph in the
same time, hence this problem is sometimes called the single-source shortest paths
problem.

### What are partitions?
Ans: A partitions is a set of sets of elements of a set.
 Every element of the set belong to one of the sets in the partition.
 No element of the set belong to more than one of the sub-sets.

### What are spanning trees?
Ans: A spanning tree of a graph, G, is a set of |V|-1 edges that connect all vertices of the
graph.

### What is a minimum spanning tree?
Ans: If a cost, cij, is associated with each edge, eij = (vi
,vj
), then the minimum
spanning tree is the set of edges, Espan, forming a spanning tree, such that:
C = sum( cij | all eij in Espan )
is a minimum.

### What does Kruskals’s algorithm do?
Ans: This algorithm creates a forest of trees. Initially the forest consists of n single node
trees (and no edges). At each step, we add one (the cheapest one) edge so that it joins two
trees together. If it were to form a cycle, it would simply link two nodes that were already
part of a single connected tree, so that this edge would not be needed.
