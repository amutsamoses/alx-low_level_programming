0x15. C - File I/O

FILE DESCRIPTOR

The file descriptor is an integer that uniquely identifies an open file of the process.

File Descriptor table: A file descriptor table is the collection of integer array indices that are file descriptors in which elements are pointers to file table entries. One unique file descriptors table is provided in the operating system for each process.

File Table Entry: File table entries are a structure In-memory surrogate for an open file, which is created when processing a request to open the file and these entries maintain file position.


A single C file can read, write, move, and create files in our computer easily using a few functions and elements included in the C File I/O system. We can easily manipulate data in a file regardless of whether the file is a text file or a binary file using functions like fopen(), fclose(), fprintf(), fscanf(), getc(), putc(), getw(), fseek(), etc.

What are files in C?
A file is used to store huge data. C provides multiple file management functions like file creation, opening and reading files, Writing to the file, and closing a file. The file is used to store relevant data and file handling in C is used to manipulate the data.

Types of Files in C
There are mainly two types of files that can be handled using File Handling in C as mentioned below:

Text Files
Binary Files
1. Text Files
 These are simple text files that are saved by the (.txt) extension and can be created or modified by any text editor. Text file stores data in the form of ASCII characters and is used to store a stream of characters.
2. Binary Files
 It is stored in binary format instead of ASCII characters. Binary files are normally used to store numeric Information (int, float, double). Here data is stored in binary form i.e, (0’s and 1’s).
