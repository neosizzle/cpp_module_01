make re
make clean
./sed tests/test0  "else if" "else if else if"
diff -y --suppress-common-lines tests/test0 tests/test0.replace