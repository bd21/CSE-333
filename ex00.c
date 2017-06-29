#include <stdio.h>
#include <stdlib.h>

// This is a very artificial example of a C program that
// tries to crack passwords by brute force.  The program
// "knows" that the password is 7 characters long and that
// all characters in the password are lower case letters.

// This method represents some unimplemented technique to determine
// whether or not the candidatePassword is the actual password.
// (This method always says it isn't.)
int check(char *candidatePassword) {
  return 0;
}

int main(int argc, char *argv[]) {
  char password[7];
  
  for (password[0]='a'; password[0]<='z'; password[0]++) {
    for (password[1]='a'; password[1]<='z'; password[1]++) {
      for (password[2]='a'; password[2]<='z'; password[2]++) {
	for (password[3]='a'; password[3]<='z'; password[3]++) {
	  for (password[4]='a'; password[4]<='z'; password[4]++) {
	    for (password[5]='a'; password[5]<='z'; password[5]++) {
	      for (password[6]='a'; password[6]<='z'; password[6]++) {
		check(password);
	      }
	    }
	  }
	}
      }
    }
  }
  
  return EXIT_SUCCESS;
}
