#makefile
.PHONY: All clean 
# Name My Program 
EXE= Setup.exe 
EXE1= Truth.exe
EXE2= fgydjh.exe
EXE3= Rst.exe
# Add files objecte 

OBJC= logic.o 
OBJC1= truth.o
OBJC2= eds.o
OBJC3= br.o
# compiler 

CC= gcc -g

CFLAGS= -Wall -Wextra -g

#link Flags 

DCFLAGS= -lm 

# Default Target 

All: $(EXE) $(EXE1) $(EXE2) $(EXE3)

# Link Executable 

$(EXE): $(OBJC)
	$(CC) $(CFLAGS) -o $@  $^ $(DCFLAGS)
$(EXE1): $(OBJC1)
	$(CC) $(CFLAGS) -o $@  $^ $(DCFLAGS)
$(EXE2): $(OBJC2)
	$(CC) $(CFLAGS) -o $@  $^ $(DCFLAGS)

$(EXE3): $(OBJC3)
	$(CC) $(CFLAGS) -o $@  $^ $(DCFLAGS)


# Compiler Source Files 

%.o: %.c
	$(CC) $(CFLAGS) -c  $< -o $@


clean:
	rm -rfv $(EXE) $(OBJC) $(EXE1) $(OBJC1) $(EXE2) $(OBJC2)  $(EXE3) $(OBJC3)