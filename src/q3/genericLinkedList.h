#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST

typedef struct listElementStruct listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(char* data, size_t size);

//Print out Char
void printChar(void* data);

//Print out String
void printString(void* data);

//Print out Int
void printInt(void* data);

//Print out Long
void printLong(void* data);

//Print out Double
void printDouble(void* data);

//Print out Float
void printFloat(void* data);

//Prints out each element in the list
void traverse(listElement* start);

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* after, char* data, size_t size);

//Delete the element after the given el
void deleteAfter(listElement* after);

//Returns the number of elements in a linked list
int length(listElement* list);

//Push a new element onto the head of a list.
void push(listElement** list, char* data, size_t size);

//Pop an element from the head of a list
listElement* pop(listElement** list);

//Enqueue a new element onto the head of the list
void enqueue(listElement** list, char* data, size_t size);

//Dequeue an element from the tail of the list
listElement* dequeue(listElement* list);

#endif
