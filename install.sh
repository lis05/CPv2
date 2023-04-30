#!/bin/bash

echo -e "CPv2 install script\n"
echo -e -n "Where would you like to create your project?\nEnter path: "

read path
path="${path}/CPv2"

echo -n "Create new project under this path? $path [y/n]:"

read ans
if [[ "$ans" == "n" ]]; then
    echo "Aborting"
    exit 0
fi

mkdir -p "$path"
mkdir "$path/bin"

mkdir "$path/bits"
cp bits/stdc++.h "$path/bits/stdc++.h"
true > "$path/bits/last"
mkdir "$path/bits/precompiled"

mkdir "$path/data"
mkdir "$path/libs"

mkdir "$path/files"
touch "$path/files/input.txt"
touch "$path/files/output.txt"

mkdir "$path/modes"
cp modes/* "$path/modes"

mkdir "$path/scripts"
cp scripts/* "$path/scripts"

mkdir "$path/templates"
cp templates/* "$path/templates"

cp main.cpp "$path/main.cpp"
cp cpe "$path/cpe"

echo "If no messages popped up over this one, then CPv2 has been installed successfully!"
echo "You may want to link cpe to /bin/cpe to use it easier"

