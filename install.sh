#!/bin/bash

echo -e "CPv2 install script\n"
echo -e -n "Where would you like to create your project?\nEnter absolute path (without trailing /): "

read abs_path
path="${abs_path}/CPv2"

echo -n "Create new project under this path? $path [y/n]:"

read ans
if [[ "$ans" == "n" ]]; then
    echo "Aborting"
    exit 0
fi

mkdir -p "$path"
mkdir "$path/bin"

mkdir "$path/bits"
cp src/bits/stdc++.h "$path/bits/stdc++.h"
true > "$path/bits/last"
mkdir "$path/bits/precompiled"

mkdir "$path/data"
mkdir "$path/libs"

mkdir "$path/files"
touch "$path/files/input.txt"
touch "$path/files/output.txt"

mkdir "$path/modes"
cp src/modes/* "$path/modes"

mkdir "$path/scripts"
cp src/scripts/* "$path/scripts"

mkdir "$path/templates"
cp src/templates/* "$path/templates"

cp src/main.cpp "$path/main.cpp"

cp src/cpe "$path/cpe"
sed -i "s/REPLACE_ME_WITH_THE_REAL_PATH/\"$abs_path\"/g" "$path/cpe"

echo "If no messages popped up over this one, then CPv2 has been installed successfully!"
echo "You may want to link cpe to /bin/cpe to use it easier"

