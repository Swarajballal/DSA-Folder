## Introduction to Programming

while converting decimal to binary or any other base, we use the following algorithm:
always divide the number by the base and store the remainder in an array. and that array is desired number in the desired base. let say if binary then base is 2, if octal then base is 8 if decimal then base is 10 and Hex then base is 16.

for converting binary  or ary other number system to decimal we use the following algorithm:

we multiply the number with the base and add the next digit and so on.
unit place = number at unit place * base ^ 0
tens place = number at tens place * base ^ 1
hundreds place = number at hundreds place * base ^ 2
and so on.

# vvimp 
Hex decimal  11 base 10 is 17 
because 1 * 16 ^ 1 + 1 * 16 ^ 0 = 17
11 are not two digits but one digit in hex decimal system.
11 is B in hex decimal system.
remember to see digit individually and not as a whole number in the base system.

# Moore law

Every two years the number of transistors in a dense integrated circuit doubles.
and their size is getting smaller and smaller.
Binary or Machine language is the only language that computer understands.

Languages were created to make it easier for humans to communicate with computers i.e. to convert(translate)(done by assembler) human language to machine language that is binary.
so first language was assembly language, but it was very difficult to learn and use. so high level languages were created. so for high level language the role that assembler played for assembly language is played by compiler and interpreter.

# vvimp 
Machine Coding -> Assembly Language -> High Level Language

machine coding is the fastest and most efficient ,but it is very difficult to learn and use. since it does not require any translation. so it is the fastest.

assembly language is the second fastest and efficient ,but it is very difficult to learn and use. since it requires translation .so it is slower than machine code.

high level language is the slowest and least efficient ,but it is very easy to learn and use. since it requires translation. so it is slower than assembly language.

Data needs to be stored and fetched at the same time it should take the least amount of space and also take less amount of time to store and fetch.

How to store and fetch is learnt in DSA.

Introduction To Programming (Home work)


Convert Decimal to Binary
37 : 100101
92 : 1011100
128 : 10000000
243 : 11110011

Convert Binary to Decimal
1011 : 11
111001 : 57
10011011 : 155
10100100 : 164

Convert Decimal to Octal
28 : 34
47 : 57
928 : 1640
1243 : 2333

Convert Octal to Decimal
41 : 33
207 : 135
124 : 84
311 : 201

Convert Decimal to HexaDecimal
317 : 13D
41 : 29
14 : E
845 : 34D

Convert HexaDecimal to Decimal
A11 : 2577
49 : 73
AE2F : 44623
D97 : 3487
