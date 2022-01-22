/*
Can we reverse a linked list in less than O(n) ?

-> A single linked list cannot be reversed in less than O(n) as the full list must be traversed to performed the operations(it is neither possible by iterative way nor recursive way. Both take O(n)).
-> A double linked list though can be reversed in O(1) if the head and tail pointers are reversed (head pointer is moved to the last node and tail pointer to the 1st node is not taken in consideration)

*/