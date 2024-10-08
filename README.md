README for Linked List Operations in C++ Program

Project Title: Linked List Operations in C++

This C++ program demonstrates fundamental operations on a singly linked list data structure. It includes functionalities to add elements to the front and back of the list, insert elements at a specific position, search for a value within the list, and traverse the list to display its contents.

Program Features:

	1.	Push Front Operation:
	•	Function: void push_front(Node*& head, Node*& tail, int data)
	•	Adds a new node to the front of the linked list.
	•	If the list is empty, both the head and tail pointers are updated to point to the new node.
	2.	Push Back Operation:
	•	Function: void push_back(Node*& head, Node*& tail, int data)
	•	Adds a new node to the end of the linked list.
	•	If the list is empty, the function ensures that the new node becomes both the head and tail.
	3.	Insert at Specific Position:
	•	Function: void insert(Node*& head, Node*& tail, int data, int position)
	•	Allows inserting a new node at any specific position in the list.
	•	Handles three cases:
	1.	Inserting at the front (position 0).
	2.	Inserting at the end of the list.
	3.	Inserting in the middle of the list.
	4.	Search for an Element:
	•	Function: int search(Node*& head, int value)
	•	Searches for a specified value within the list.
	•	Returns 1 if the value is found and -1 if the value is not present.
	5.	List Traversal:
	•	The program traverses and prints the elements in the list after each operation to visually display the state of the linked list.

How to Run the Program:

	1.	Compile the program:
	•	Use a C++ compiler (such as g++) to compile the code:

g++ -o linked_list linked_list.cpp


	2.	Run the compiled executable:
	•	After compiling, you can run the program:

./linked_list


	3.	Program Output:
	•	The program will display the original list, followed by the list after each operation (push front, push back, insert), and finally indicate whether a searched value was found in the list.

Example Output:

Original List:
1 2 3 
List after push front:
42 1 2 3 
List after push back:
42 1 2 3 77 
List after insert:
42 1 33 2 3 77 
Value 33 found in the list.

Data Structures Used:

	•	Linked List: A dynamic data structure made up of nodes, where each node contains:
	•	data: The value stored in the node.
	•	next: A pointer to the next node in the sequence.

This program showcases the fundamental operations of a linked list using basic pointer manipulation techniques in C++.

Future Improvements:

	•	Implement more complex operations such as delete (removing a node from the list), reverse (reversing the entire list), and sorting the list.
	•	Add error handling for invalid positions in the insert function.
	•	Implement a user-friendly menu-based system to allow for interactive testing of linked list operations.

This project is one of many C++ implementations that focus on data structures and algorithms.
