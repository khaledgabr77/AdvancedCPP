#include "stack.h"
#include <iostream>

int main() {
  Stack s;
  CreateStack(&s);
  StackEntry entry;
  std::cout << "enter a char :" << std::endl;
  std::cin >> &entry;
  Push(&s, entry);
  std::cin >> &entry;
  TraverseStack(&s, Display);
  std::cout << "StackSize: " << StackSize(&s) << std::endl;
}