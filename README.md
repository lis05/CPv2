
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
Clone the repository, cd and run `./install.sh`

Please also install `python3` and `time` packages, as CPv2 depends on them. Note that the default `time` package may not be the right one.

## Usage
CPv2 was developed to use on Linux or any other Unix-like operation systems. Windows is not supported. CPv2 was only tested on Linux operation systems.

Interaction with the environment works though command `cpe`. I recommend you to link it to `/bin/cpe` for easier usage.

You code is in file `main.cpp` in the project directory, and IO is done through `files/input.txt` and `files/output.txt`.

In CPv2 there are running modes. They are just files in `modes/` which contain compilation command with flags. For example, to run the code with debug mode you need to run `./cpe debug`. There is a lot of modes by default that are useful in competitive programmint (like `online` mode to simulate online judges).

You can have multiple code templates. They are stored in `templates/` directory and you can load them and replace code in `main.cpp` with `./cpe done TEMPLATE_NAME` command. If you want to load the `default.cpp` template you can run just `./cpe done`.



