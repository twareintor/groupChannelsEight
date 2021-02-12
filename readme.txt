demo program in C to assign channel number and address of an input device - just demo
deveopment in onllinegdb here: https://onlinegdb.com/BJC_U1NZO

To konw what it does:

if I have a list of channels assigned to some signals, let it be {1, 2, 3, 7, 8, 9, 12, 14, 16, 82, 83, 84, 86, 95,} to be assigned to, let's say, eight channel long data input (or output) device, the program is intended to group the signals like this:
Module 01: {1, 2, 3, 7} // assuming 0 is the first channnel
Module 02: {8, 9, 12, 14}
Module 03: {16,}
Module 04: {83, 83, 84, 86}
Module 05: {95}
Very useful in automatic design of automation systems. If you don't understand the utility of this program you don't need it.

