# hello_world
* This is a test project
* [Link](./README.md) to nowhere 

To make a text box showing some commandlines, please use the following format. 
```
$ add your command here
```

# fork() functions


# exec() functions
The `exec()` family of functions (i.e., `execl()`, `execlp`, `execle()`) replaces the current process image with a new process image.
The first argument, by convention, should point to the filename associated with the file being executed.
The list of arguments must be terminated by a NULL pointer, and, since these are variadic functions, this pointer must be cast (char *) `NULL`.
The `const char *arg` and subsequent ellipses in the `execl()`, `execlp()`, and `execle()` functions can be thought of as `arg0`, `arg1`, ..., `argn`. They together describe a list of one or more pointers to null-terminated strings that represent the argument list available to the executed program.

* List type functions

|      Function ( #include <unistd.h> )                    |  Example                  |
|:---------------------------------------------------------|:--------------------------|
| int execl (const char *path, const char *arg, ...)       | execl("bin/ls", "ls", "-al", NULL); |
| int execlp (const char *file, const char *arg, ...)      | execl("ls", "ls", "-al", NULL); |
| int execle (const char *path, const char *arg, ...)      | Execute PATH with all arguments after PATH until a NULL pointer, and the argument after that for environment. |

* Vector type functions

|      Function ( #include <unistd.h> )                    |  Remark                   |
|:---------------------------------------------------------|:--------------------------|
| int execv (const char *path, char *const argv[])         | ...                       |
| int execvp (const char *file, char *const argv[])        | ...                       |
| int execve (const char *path, char *const argv[], char *const __envp[])  | ...                       |
