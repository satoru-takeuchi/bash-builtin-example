# bash-builtin-example

A simple example of bash builtin command

# environment

I tested this program on the letest debian/testing(stretch) at Jan 17 2017.

# Required packages

bash-builtins

# How to use

```
$ make 
cc     hello.c   -o hello
cc -L myhello -I/usr/include/bash/ -I/usr/include/bash/include -fpic -shared -o myhello.so myhello.c
$ ./benchmark 
run hello world command 10000 times

real    0m3.760s
user    0m0.152s
sys     0m0.524s
run hello world builtin command 10000 times

real    0m0.087s 
user    0m0.068s 
sys     0m0.016s
$ 
```

Builtin command version is 97.7% faster than executable command version.
