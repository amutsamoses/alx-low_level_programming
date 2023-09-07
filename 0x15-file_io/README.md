0x15. C - File I/O

File descriptor is simply an index into the file descriptor table. For each process in our operating system, there is a process control block(PCB). PCB keeps track of the context of the process. So one of the fields within this is an array called file descriptor table.

This array keeps track of all the resources that the process owns and can operate on. The file descriptor table holds pointers to the resources. Resources could be

File
Terminal I/O
Pipes
Socket for the communication channel between machines
Any devices
So if any process opens or uses any resources will have an entry in the file descriptor table. Any process when it first starts is given access to three resources. These resources are:

stdin
stdout
stderr


A file descriptor is an unsigned integer used by a process to identify an open file.

The number of file descriptors available to a process is limited by the /OPEN_MAX control in the sys/limits.h file. The number of file descriptors is also controlled by the ulimit -n flag. The open, pipe, creat, and fcntl subroutines all generate file descriptors. File descriptors are generally unique to each process, but they can be shared by child processes created with a fork subroutine or copied by the fcntl, dup, and dup2 subroutines.

File descriptors are indexes to the file descriptor table in the u_block area maintained by the kernel for each process. The most common ways for processes to obtain file descriptors are through open or creat operations or through inheritance from a parent process. When a fork operation occurs, the descriptor table is copied for the child process, which allows the child process equal access to the files used by the parent process.
