#!/bin/bash

# Compile all .c files in the current directory into .o files
gcc -c *.c

# Create the static library liball.a from the .o files
ar -rc liball.a *.o

# Optionally, index the library for faster access (ranlib)
ranlib liball.a

# Clean up by removing the .o files
rm *.o

# Inform the user that the library creation is complete
echo "Static library liball.a created successfully."
