#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // TODO: Allocate memory to store the string "hello"
  // You may use your solution from a previous exercise;
  ______ message[______];
  ______ = 'h';
  ______ = 'e';
  ______ = 'l';
  ______ = 'l';
  ______ = 'o';
  ______ = ______;

  // Print out the value before we change message
  printf("Before copying: %s\n", message);

  // Creates another_string that contains a longer string
  char* long_message = "Here's a really long string";

  // TODO: Copy the string in long_message to message using strncpy
  strncpy(______, ______, ______);

  // Print out the value after we change message
  printf("After copying: %s\n", message);

  return 0;
}
