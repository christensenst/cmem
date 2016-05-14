# cmem
analyze memory usage in c

## Compile and run a program in C

1. Change directory to the directory with your program

    `cd /opt/cmem/prog01`

2. Compile the program with gcc and give it a proper name

    `gcc -o prog01 firstprog.c`

3. Run the program and view the output

    `./prog01`

## Compile and rn with the gdb debugger

1. Change directory to the directory with your program

    `cd /opt/cmem/pointers`

2. Compile the program with debugging support and give it a proper name.  This causes the output program to become larger

    `gcc -g -o pointers01 pointers_01.c`

3. Start the interactive debugger

    `gdb pointers01`

4. Set a breakpoint on the first line - specify the source file name

    `break pointers_01.c:5`

## View the opcodes of a program

1. Compile the program with gcc and give it a proper name

    `gcc basic_function.c`

2. Use objdump to view the opcodes

    `objdump -D a.out`

You can also call `disassemble` from gdb
