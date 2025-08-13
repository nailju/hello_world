# hello_world
* This is a test project
* [Link](./README.md) to nowhere 

zTo make a text box showing some commandlines, please use the following format. 
```
$ add your command here
```

# exec() functions
* List type functions

|          |      Function                                            |  Remark                   |
|:--------:|:---------------------------------------------------------|:--------------------------|
|          | int execl (const char *path, const char *arg, ...)       | Execute PATH with all arguments after PATH until a NULL pointer and environment from `environ'. |
|   List   | int execlp (const char *file, const char *arg, ...)      | ...                       |
|          | int execle (const char *path, const char *arg, ...)      | ...                       |

* vector type functions

|          |      Function                                            |  Remark                   |
|:--------:|:---------------------------------------------------------|:--------------------------|
|          | int execv (const char *path, char *const argv[])         | ...                       |
|  Vector  | int execvp (const char *file, char *const argv[])        | ...                       |
|          | int execve (const char *path, char *const argv[], char *const __envp[])  | ...                       |
