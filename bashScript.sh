#build Number static library
g++ -c -o Number/build/number.o Number/number.cpp
ar r Number/build/libNumber.a Number/build/number.o
#build Vector dynamic library and link Number to Vector 
g++ -c -o Vector/build/vector.o Vector/vector.cpp -I../Number
g++ -shared -o Vector/build/libVector.so Vector/build/vector.o
#link Vector and Number to main
g++ -o main/main.out main/main.cpp -LNumber/build -LVector/build -lNumber -lVector -IVector -INumber
./main/main.out
