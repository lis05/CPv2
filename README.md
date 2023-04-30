
# CPv2 - competitive programming environment for C++ to make life easier

This is a set of scripts created to help competitive programmers run their C++ code. 

The most important features are:
- fast compilation (with precompiled headers)
- time and memory measurements
- variety of run modes
- built in snippets support
- built in templates support
- file io
- ships with premade code template
- console interface with formatted output


## Installation
Clone the repository, cd and run 
```bash
./install.sh
```

Please also install `python3` and `time` packages, as CPv2 depends on them. Note that the default `time` package may not be the right one.

## Usage
CPv2 was developed to use on Linux or any other Unix-like operation systems. Windows is not supported. CPv2 was only tested on Linux operation systems.

Interaction with the environment works though command `cpe`. I recommend you to link it to `/bin/cpe` for easier usage.

You code is in file `main.cpp` in the project directory, and IO is done through `files/input.txt` and `files/output.txt`.

#### Running modes
In CPv2 there are running modes. They are just files in `modes/` which contain compilation command with flags. For example, to run the code with debug mode you need to run `./cpe debug`.
There is a lot of modes by default that are useful in competitive programming (like `online` mode to simulate online judges). You can run any mode with 
```bash
./cpe MODE_NAME
```

#### Code templates
You can have multiple code templates. They are stored in `templates/` directory and you can load them and replace code in `main.cpp` with 
```bash
./cpe done TEMPLATE_NAME
```
If you want to load the `default.cpp` template you can run just `./cpe done`.

#### Clean files
If something goes wrong, or some files get corrupted, or compilation is slow, you can clear all files with 
```bash
./cpe clean
```

#### Snippets
CPv2 also has built in support for snippets. There is a special line in your code where all snippets will be placed: `// #libs:libs`. You can move it to a better place. 

All snippets (I call them libraries, or simply libs) are stored in `libs/` directory. You can include a lib with this command: 
```bash
./cpe libs add LIB_NAME
```
You can remove a lib from your code with 
```bash
./cpe libs remove LIB_NAME
```
You can list all libs with 
```bash
./cpe libs list
```

#### bits/stdc++.h
CPv2 uses custom bits file. It's needed for fast compilation. You can modify content of `bits/stdc++.h` to add something you need, but I don't recommend doing that.


#### Fast compilation limitations
CPv2 makes fast compilation possible, but this comes at cost. Fast compilation only works if there is just one header file included - `bits/stdc++.h`. Also, if you use pragmas, you need to place them **UNDER** the line `#include "bits/stdc++.h"`.


#### default template
CPv2 ships with a custom default template. It has been tested in a lot of contests and has been proved extremely useful. 

The most importand thing is a complete replacement for cin/cout. 
There are 6 output objects and 1 input object to control IO. 

This is how you read from standard input
```C++
int a;
float b;
vector<int> c(3); // yeah, it can read resized vectors and arrays and even more
array<int,5> d;

rd(a,b,c,d); // cool, right?
```

There are 6 writing objects, each has a different writing style.

- wr(x,y,z) - writes space separated x y z in one line and ends with a newline character
- wrs(x,y,z) - writes space separated x y z in one line but doesn't put a newline character at the end
- wrr(x,y,z) - writes x y z without any spaces between them or newline characters at the end
- wrf(x,y,z) - acts like wr(x,y,z) but also flushes output at the end. this is useful in interactive problems
- wrt(x,y,z) - acts line wr(x,y,z) but adds type annotations to all data.
- wrn(x,y,z) - acts line wrt(x,y,z) but adds names of variables before their annotated data.

All object except for wrn(it's a macro) have set_precision(), set_fixed() and flush() methods.


All of these object can print pairs, arrays, sets, multitests, deques and vectors.

This is an example with output of these 6 wr objects

```C++
int a = 5;
float b = 3.141592;
vector<int>c = {1,2,3};

wr.set_precision(5); // default precision is big

wr(a,b,c); wr();
wrs(a,b,c); wr();
wrr(a,b,c); wr();
wrf(a,b,c); wr();
wrt(a,b,c); wr();
wrn(a,b,c); wr();

/*
Output:
5 3.1416 1 2 3 

5 3.1416 1 2 3 
53.1416123
5 3.1416 1 2 3 

5 3.1416f {1, 2, 3}

a=5 b=3.1416f c={1, 2, 3}
*/
```