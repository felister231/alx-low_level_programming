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




Tasks 📃
* 0. Print list
    * 0-print_list.c: C function that prints all the elements of a list_t list.
        * If str is NULL, the function prints [0] (nil).
* 1. List length
    * 1-list_len.c: C function that returns the number of elements in a linked list_t list.
* 2. Add node
    * 2-add_node.c: C function that adds a new node at the beginning a of a list_t list.
        * If the function fails - returns NULL.
        * Otherwise - returns the address of the new element.
* 3. Add node at the end
    * 3-add_node_end.c: C function that adds a new node at the end of a linked list_t list.
        * If the function fails - returns NULL.
        * Otherwise - returns the address of the new element.
* 4. Free list
    * 4-free_list.c: C function that frees a list_t list.
* 5. The Hare and the Tortoise
    * 100-first.c: C function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
* 6. Real programmers can write assembly code in any language
    * 101-hello_holberton.asm: 64-but assembly program that prints Hello, Holberton followed by a new line using only the printf function witout interrupts.

