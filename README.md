
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

