#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

   int stat = 1 ;
  while (stat) {
	  // Flush after every printf
	  setbuf(stdout, NULL);

	  // Uncomment this block to pass the first stage
	  printf("$ ");
	  fflush(stdout);
	  // Wait for user input
	  char input[100];
	  fgets(input, 100, stdin);
	  input[strcspn(input, "\n")] = 0;
	  if (!strcmp(input, "exit 0"))
		  exit(0);
	  else if (strncmp(input, "echo", strlen("echo")) == 0) {
		  printf("%s\n", input + 5);
		  continue;
	  }else 

	  printf("%s: command not found\n", input);
  }
  
  return 0;
}
