Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
Don’t forget to push your header file
All your header files should be include guarded    

*******FILE PROTOTYPES ******

File Prototype struct listint_s int n struct listint_s *next typedef listint_t struct listint_s 0-print_listint.c size_t print_listint(const listint_t *h); 1-listint_len.c size_t listint_len(const listint_t *h); 2-add_nodeint.c listint_t *add_nodeint(listint_t **head, const int n); 3-add_nodeint_end.c listint_t *add_nodeint_end(listint_t **head, const int n); 4-free_listint.c void free_listint(listint_t *head); 5-free_listint2.c void free_listint2(listint_t **head); 6-pop_listint.c int pop_listint(listint_t **head); 7-get_nodeint.c listint_t *get_nodeint_at_index(listint_t *head, unsigned int index); 8-sum_listint.c int sum_listint(listint_t *head); 9-insert_nodeint.c listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n); 10-delete_nodeint.c int delete_nodeint_at_index(listint_t **head, unsigned int index); 100-reverse_listint.c listint_t *reverse_listint(listint_t **head); 101-print_listint_safe.c size_t print_listint_safe(const listint_t *head); 102-free_listint_safe.c size_t free_listint_safe(listint_t **h); 103-find_loop.c listint_t *find_listint_loop(listint_t *head); Tasks 📃 0. Print list




List length
1-listint_len.c: C function that returns the number of elements in a listint_t linked list.

 2. Add node
2-add_nodeint.c: C function that adds a new node at the beginning of a listint_t linked list. If the function fails - returns NULL. Otherwise - returns the address of the new element. 

3. Add node at the end
3-add_nodeint_end.c: C function that adds a new node at the end of a listint_t linked list. If the function fails - returns NULL. Otherwise - returns the address of the new element.

 4. Free list
4-free_listint.c: C function that frees a listint_t linked list. 

5. Free
5-free_listint2.c: C function that frees a listint_t linked list. Sets the head to NULL. 6. Pop


6-pop_listint.c: C function that deletes the head node of a listint_t linked list. If the linked list is empty - returns 0. Otherwise - returns the head node's data (n). 7. Get node at index


7-get_nodeint.c: C function that locates a given node of a listint_t linked list. If the node does not exist - returns NULL. Otherwise - returns the located node. 8. Sum list


8-sum_listint.c: C function that returns the sum of all the data (n) of a listint_t linked list. If the linked list is empty - returns 0. Otherwise - returns the sum of all the data (n). 9. Insert


9-insert_nodeint.c: C function that inserts a new node to a listint_t linked list at a given position. If it is not possible to add the new node at index idx, or the function fails - returns NULL. Otherwise - returns the address of the new node. 10. Delete at index


10-delete_nodeint.c: C function that deletes the node at a given index of a listint_t linked list. If the function succeeds - returns 1. If the function fails - returns -1. 11. Reverse list


100-reverse_listint.c: C function that reverses a listint_t linked list using a maximum of one loop and two variables. Returns a pointer to the first node of the reversed list. 12. Print (safe version)


101-print_listint_safe.c: C function that prints a listint_t linked list safely (ie. can free lists containing loops). Returns the number of nodes in the listint_t list. 13. Free (safe version)


102-free_listint_safe.c: C function that frees a listint_t linked list safely (ie. can free lists containing loops). Returns the size of the list that was freed. Sets the head to NULL. 14. Find the loop


103-find_loop.c: C function that finds the loop contained in a listint_t linked list using a maximum of two variables. If no loop is found - returns NULL. Otherwise - returns the address of the node where the loop starts.

