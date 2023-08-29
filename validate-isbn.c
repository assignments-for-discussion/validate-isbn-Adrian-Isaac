#include <stdio.h>
#include <assert.h>

int isValidISBN(const char* input_string) {
  return 1;
}

int main() {
  printf("Testing the validation function...\n");
  assert(isValidISBN("3-598-20608-8"));
  assert(!isValidISBN("abc"));
  assert(!isValidISBN("1-1-1-1"));
  return 0;
}
