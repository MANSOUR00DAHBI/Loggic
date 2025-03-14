#makefile
.PHONY: All clean 
# Name My Program 
EXE= Setup.exe 
EXE1= Truth.exe
# Add files objecte 

OBJC= logic.o 
OBJC1= truth.o
# compiler 

CC= gcc -g

CFLAGS= -Wall -Wextra -g

#link Flags 

DCFLAGS= -lm 

# Default Target 

All: $(EXE) $(EXE1)

# Link Executable 

$(EXE): $(OBJC)
	$(CC) $(CFLAGS) -o $@  $^ $(DCFLAGS)
$(EXE1): $(OBJC1)
	$(CC) $(CFLAGS) -o $@  $^ $(DCFLAGS)

# Compiler Source Files 

%.o: %.c
	$(CC) $(CFLAGS) -c  $< -o $@


clean:
	rm -rfv $(EXE) $(OBJC) $(EXE1) $(OBJC1)