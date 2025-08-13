# hello_world
* This is a test project
* [Link](./README.md) to nowhere 

To make a text box showing some commandlines, please use the following format. 
```
$ add your command here
```

# fork() functions


# exec() functions
The exec() family of functions (execl(), execlp, execle()) replaces the current process image with a new process image.
The initial argument for these functions is the name of a file that is to be executed.


* List type functions

|      Function                                            |  Remark                   |
|:---------------------------------------------------------|:--------------------------|
| int execl (const char *path, const char *arg, ...)       | Execute PATH with all arguments after PATH until a NULL pointer and environment from `environ'. |
| int execlp (const char *file, const char *arg, ...)      | Execute FILE, searching in the PATH environment variable if it contains no slashes, with all arguments after FILE until a NULL pointer and environment from `environ'. |
| int execle (const char *path, const char *arg, ...)      | Execute PATH with all arguments after PATH until a NULL pointer, and the argument after that for environment. |

* Vector type functions

|      Function                                            |  Remark                   |
|:---------------------------------------------------------|:--------------------------|
| int execv (const char *path, char *const argv[])         | ...                       |
| int execvp (const char *file, char *const argv[])        | ...                       |
| int execve (const char *path, char *const argv[], char *const __envp[])  | ...                       |
