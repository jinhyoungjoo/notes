# Bash

## Shebang
- Use /usr/bin/env so that the interpreter can locate the program.
```bash
#!/usr/bin/env bash

#!/bin/bash # -> Less portable, system may not have bash at /bin
```

## Subshell
- Commands executed inside () only happen inside the scope.
```bash
foo=$(cd ../; pwd) # -> cd is done in the subshell and does not affect anything outside of it.
diff <(ls ./foo) <(ls ./bar) # -> Process substitution, use the output of program like a file
$(( 3 + 4 )) # -> Arithmetic expansion
```

## Command Line Arguments
- Command line arguments can be expressed by $N.
```bash
./hello.sh a.txt b.txt
HELLO_SH=$0
A_TXT=$1
B_TXT=$2
```

## Strict Mode
- Bash does not operate like you would expect when encountering errors.
- Certain flags have to be set to make bash more predictable.
```bash
set -e # Exit on error
set -u # Exit on unset variable
set -o pipefail # Exit on pipe fail
```

## Language Syntax
### Variables
- Declare variables by name=value without spaces.
- Use variables using the dollar sign.
```bash
foo="bar"
echo "$foo" # -> Double quotes expand the variables. Single quotes will print $foo.
echo "${#foo}" # -> Use curly braces for additional operations on variables. #foo returns the length of foo.
echo "${foo:-"bar2"}" # -> Default value can be set by :-. To set it permanently, use :=.
```

### Conditionals
```bash
if [[ condition ]]; then
    do_something
elif [[ condition ]]; then
    do_something
else
    do_something
fi
```

- Comparison syntax
```bash
#String
[[ "$val" == "a" ]] # ==, !=
# Numerical
[[ "$num" -eq 1 ]] # -eq, -ne, -lt, -le, -gt, -ge
# Variable existence
[[ -z $val ]] # -z (empty/null), -n (not null)
# File checks
[[ -f $file]] # -f (file exists), -d (directory exists), -e (file/directory exists)
# Permission checks
[[ -r $file ]] # -r (readable), -w (writable), -x (executable)
# Combinations
[[ condition -a condition ]] # -a (and), -o (or)
[[ condition ]] && [[ condition ]] # &&, ||
```

### Arrays
```bash
foo=(1 2 3 4 5)
echo ${foo[0]}
echo ${foo[@]} # -> @ refers to all items.
```

### Loops
- For Loops
```bash
for item in $foo[@]; do
    echo $item
done

for ((i = 0; i < 10; i++)); do
    echo "$i"
done

for i in {1..10}; do
    echo "$i"
done

for item in ./*.md; do
    echo "$item"
done

for item in $(ls); do
    echo "$item"
done
```

- While Loop
```bash
while true; do
    if [[ "$status" == "running" ]]; then
        break
    else
        echo "status not running"
        sleep 1
    fi
done
```

## Useful Commands
- read
```bash
read -p "Do you want to continue? (y/n) " USER_RESPONSE 
if [[ $USER_RESPONSE != 'y' ]]; then
    exit 1
fi
```

- mktemp
```bash
TEMP_FILE=$(mktemp)
TEMP_DIRECTORY=$(mktemp -d)
```

## References
- https://www.youtube.com/watch?v=4ygaA_y1wvQ
