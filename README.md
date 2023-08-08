<h1>C - Simple Shell</h1>

Description: This project is a basic implementation of a shell (command interpreter) in the C programming language. It allows users to execute system commands and perform some basic operations.

## Table of Contents

- [Installation](#installation)
- [Compilation](#compilation)
- [Usage](#usage)
- [Commands](#allowed commands)
- [Features](#features)


## Installation

Clone this repository to your local machine:

git clone https://github.com/jorge871/holbertonschool-simple_shell.git

Navigate to the project directory:

cd holbertonschool-simple_shell

## Compilation

Compile the program:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh


## Usage

<details open>
<summary> <strong> Examples </strong> </summary>
<br>

Your shell should work like this in interactive mode:
```shell
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
But also in non-interactive mode:
```shell
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
```
</details>

## Allowed Commands
<details open>
<summary> <strong> Commands</strong> </summary>

<br>
List of allowed functions and system calls:

all functions from strings.h
access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
_exit (man 2 _exit)
fflush (man 3 fflush)
fork (man 2 fork)
free (man 3 free)
getcwd (man 3 getcwd)
getline (man 3 getline)
getpid (man 2 getpid)
isatty (man 3 isatty)
kill (man 2 kill)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
printf (man 3 printf)
fprintf (man 3 fprintf)
vfprintf (man 3 vfprintf)
sprintf (man 3 sprintf)
putchar (man 3 putchar)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (__xstat) (man 2 stat)
lstat (__lxstat) (man 2 lstat)
fstat (__fxstat) (man 2 fstat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)

</details>

<footer>Maded by
    <a
    style="text-decoration: none;"
    href="github.com/jorge871">
    Jorge Gomez</a>
    &
    <a
    style="text-decoration: none;"
    href="github.com/cfranco87">
    Carlos Franco</a>
</footer>