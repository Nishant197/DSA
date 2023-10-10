## **[Linked List](README.md)**
A linked list is a collection of nodes innon-contiguousmemory locations where every node contains some data and 
a pointer to the next node of the same data type. In other words, the node stores the address of the next node
in the sequence.A singly linked list allows traversal of data only in one way.

**Properties of Linked Lists :**

●A linked list is a dynamic data structure, which meansthe list can grow or shrink easily as the nodes are stored in memory in a non-contiguous fashion.

●The size of a linked list is limited to the size of memory, and the size need not be declared in advance. 

●Note:We must never lose the address of the head pointeras it references the starting address of the linked list and if lost, would lead to loss of the list.


**There are 3 types of linked list :** 
1. [Sinlge Linked List](Singly.cpp)
2. [Doubly Linked List](DoublyLinkedlist.cpp)
3. [circular Linked List](CircularLinkedlist.cpp)

Singly Linked List : Contain Address of next node

Doubly Linked List : Contain Address of both prev and next node.

Cricular Linked List : Last node is connect to the head node (last node is null but contain address of head node).

