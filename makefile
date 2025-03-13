#makefile
.PHONY: All clean 
# Name My Program 
EXE= Setup.exe 

# Add files objecte 

OBJC= logic.o 

# compiler 

CC= gcc -g

CFLAGS= -Wall -Wextra -g

#link Flags 

DCFLAGS= -lm 

# Default Target 

All: $(EXE)

# Link Executable 

$(EXE): $(OBJC)
	$(CC) $(CFLAGS) -o $@  $^ $(DCFLAGS)

# Compiler Source Files 

%.o: %.c
	$(CC) $(CFLAGS) -c  $< -o $@


clean:
	rm -rfv $(EXE) $(OBJC)