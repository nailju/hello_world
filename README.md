# hello_world #
* This is a test project
* [Link](./README.md) to nowhere 

To make a text box showing some commandlines, please use the following format. 
```
$ add your command here
```

# fork() functions #
```
#include <unistd.h>

pid_t fork(void);
```

# exec() functions #
```
#include <unistd.h>

extern char **environ;

int execl(const char *path, const char *arg, ...);
int execlp(const char *file, const char *arg, ...);
int execle(const char *path, const char *arg, ..., char *const envp[]);

int execv(const char *path, char *const argv[]);
int execvp(const char *file, char *const argv[]);
int execvpe(const char *file, char *const argv[], char *const envp[]);
```
The `exec()` family of functions (i.e., `execl()`, `execlp`, `execle()`) replaces the current process image with a new process image.
The first argument, by convention, should point to the filename associated with the file being executed.
The list of arguments must be terminated by a NULL pointer, and, since these are variadic functions, this pointer must be `cast (char *) NULL`.
The `const char *arg` and subsequent ellipses in the `execl()`, `execlp()`, and `execle()` functions can be thought of as `arg0`, `arg1`, ..., `argn`. They together describe a list of one or more pointers to null-terminated strings that represent the argument list available to the executed program.

* Examples (List type)
- `execl("/bin/ls", "ls", "-al", NULL);`
- `execlp("ls", "ls", "-al", NULL);`

* Examples (Vector type)
- `char *argv_exec[] = {"ls", "-al", NULL};` `execv("/binl/ls", argv_exec);`
- `char *argv_exec[] = {"ls", "-al", NULL};` `execvp("ls", argv_exec);`


|      Function ( #include <unistd.h> )                                    |  Example                                   |
|:-------------------------------------------------------------------------|:-------------------------------------------|
| int execl(const char *path, const char *arg, ...)                        | `execl("/bin/ls", "ls", "-al", NULL);`     |
| int execlp(const char *file, const char *arg, ...)                       | `execlp("ls", "ls", "-al", NULL);`         |
| int execle(const char *path, const char *arg, ..., char *const envp[])   |   |

* Vector type functions

|      Function ( #include <unistd.h> )                                    |  Example                                   |
|:-------------------------------------------------------------------------|:-------------------------------------------|
| int execv(const char *path, char *const argv[])                          | `char *argv_exec[] = {"ls", "-al", NULL};` `execv("/binl/ls", argv_exec);` |
| int execvp(const char *file, char *const argv[])                         | `char *argv_exec[] = {"ls", "-al", NULL};` `execvp("ls", argv_exec);` |
| int execve(const char *path, char *const argv[], char *const envp[])     |   |
