### 0x1C. C - Makefiles

Learning Outcomes:
1. Understanding the role of make and Makefiles
2. Utilizing Makefiles for efficient project builds
3. Defining and using rules in Makefiles
4. Differentiating between explicit and implicit rules
5. Common and practical rules for Makefile usage
6. Managing variables within Makefiles
7. Project Requirements
8. Approved editors: vi, vim, emacs
9. Operating System: Ubuntu 14.04 LTS
10. gcc version: 4.8.4
11. make version: GNU Make 3.81
12. Ensure all files end with a newline
13. Inclusion of a README.md file in the project root is mandatory


0. Basic Makefile
Create your initial Makefile.
Specifications:

Executable name: holberton
Rules: all
		all: builds the executable
No variables used

$ make -f 0-Makefile
gcc main.c holberton.c -o holberton
$ ./holberton


# (output)
1. Simple Variables
Enhance your Makefile with variables.

Specifications:

Executable name: holberton
Rules: all
all: builds the executable
Variables: CC, SRC
		CC: the compiler to use
		SRC: source files


$ make -f 1-Makefile
gcc main.c holberton.c -o holberton
$ make -f 1-Makefile
gcc main.c holberton.c -o holberton
2. Useful Makefile
Expand the Makefile with more functionality.
Specifications:

Executable name: holberton
Rules: all
		all: builds the executable
Variables: CC, SRC, OBJ, NAME
		CC: the compiler to use
		SRC: source files
		OBJ: object files
		NAME: executable name
all should only recompile updated source files
No explicit list of .o files

$ make -f 2-Makefile
gcc -c -o main.o main.c
gcc -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
$ make -f 2-Makefile
gcc main.o holberton.o -o holberton
$ echo "/* Updated */" >> main.c
$ make -f 2-Makefile
gcc -c -o main.o main.c
gcc main.o holberton.o -o holberton


3. Cleaning Up
Add cleaning rules to your Makefile.
Specifications:

Executable name: holberton
Rules: all, clean, oclean, fclean, re
		all: builds the executable
		clean: deletes temporary files and the executable
		oclean: deletes object files
		fclean: deletes everything clean and oclean do
		re: forces recompilation of all source files
Variables: CC, SRC, OBJ, NAME, RM
		CC: compiler to use
		SRC: source files
		OBJ: object files
		NAME: executable name
		RM: program to delete files
all should only recompile updated source files
Cleaning rules should never fail
No explicit list of .o files

$ make -f 3-Makefile
gcc -c -o main.o main.c
gcc -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
$ make clean -f 3-Makefile
rm -f holberton
$ make oclean -f 3-Makefile
rm -f main.o holberton.o
$ make fclean -f 3-Makefile
rm -f holberton main.o holberton.o
$ make re -f 3-Makefile
rm -f main.o holberton.o
gcc -c -o main.o main.c
gcc -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
4. Complete Makefile
Create a fully-featured Makefile.


Specifications:

Executable name: holberton
Rules: all, clean, fclean, oclean, re
		all: builds the executable
		clean: deletes temporary files and the executable
		oclean: deletes object files
		fclean: deletes everything clean and oclean do
		re: forces recompilation of all source files
Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
		CC: compiler to use
		SRC: source files
		OBJ: object files
		NAME: executable name
		RM: program to delete files
		CFLAGS: compiler flags (-Wall -Werror -Wextra -pedantic)
all should only recompile updated source files
Cleaning rules should never fail
No explicit list of .o files

$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton


5. Island Perimeter
Prepare for technical interviews with this problem.
Task: Write a function def island_perimeter(grid): that calculates the perimeter of an island in a grid.
grid is a list of lists of integers:
	0: water
	1: land
	Cells are connected horizontally/vertically
	Grid is rectangular, max dimensions 100x100
The island is surrounded by water and contains no lakes.

Specifications:
First line: #!/usr/bin/python3
No modules can be imported
Function and module must be documented

# 5-island_perimeter.py
def island_perimeter(grid):
    """Calculate the perimeter of the island in grid"""
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2
    return perimeter


6. Advanced Makefile
Refine your Makefile with more constraints.

Specifications:

Executable name: holberton
Rules: all, clean, fclean, oclean, re
		all: builds the executable
		clean: deletes temporary files and the executable
		oclean: deletes object files
		fclean: deletes everything clean and oclean do
		re: forces recompilation of all source files
Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
		CC: compiler to use
		SRC: source files
		OBJ: object files
		NAME: executable name
		RM: program to delete files
		CFLAGS: compiler flags (-Wall -Werror -Wextra -pedantic)
all should only recompile updated source files
Cleaning rules should never fail
Use $(RM) for cleaning, but don't set RM
Limit use of $(CC) and $(RM)
Don't use $(CFLAGS) explicitly
Ensure Makefile works with conflicting file names
Compilation should fail if m.h is missing

$ make all -f 100-Makefile
gcc -Wall -Werror -Wextra -pedantic -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton