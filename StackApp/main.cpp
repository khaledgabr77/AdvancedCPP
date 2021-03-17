#include "stack.h"
#include <iostream>

char IsDigit(char c) { return (c >= '0' && c <= '9'); }
int precedent(char op1, char op2) {
  if (op1 == '$') {
    return 1;
  }
  if ((op1 == '*') || (op1 == '/')) {
    return (op2 != '$');
  }
  if ((op1 == '+') || (op1 == '-')) {
    return ((op2 != '$') && (op2 != '*') && (op2 != '/'));
  }
  return 0;
}

void InfixToPostfix(char infix[], char postfix[]) {
  int i, j;
  char c, op;
  Stack s;
  InitializeStack(&s);
  for (i = 0, j = 0; (c = infix[i]) != '\0'; i++) {
    if (IsDigit(c)) {
      postfix[j++] = c;
    } else {
      if (!StackEmpty(&s)) {
        StackTop(&op, &s);
        while (!StackEmpty(&s) && precedent(op, c)) {
          pop(&op, &s);
          postfix[j++] = op;
          if (!StackEmpty(&s)) {
            StackTop(&op, &s);
          }
        }
      }
      push(c, &s);
    }
  }
  while (!StackEmpty(&s)) {
    pop(&op, &s);
    postfix[j++] = op;
  }
  postfix[j] = '\0';
}

int main() {
  char infix[] = "1+2*3$4/5+6";
  char postfix[80];
  InfixToPostfix(infix, postfix);
  std::cout << postfix << std::endl;
}
