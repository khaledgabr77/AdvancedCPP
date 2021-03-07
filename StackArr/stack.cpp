
#include "stack.h"
#include <iostream>

#define IMPLEMENTATION

void CreateStack(Stack *ps) { ps->top = 0; }
void Display(StackEntry e) { std::cout << e << std::endl; }

void Push(Stack *ps, StackEntry item) { ps->entry[ps->top] = item; }
void Pop(Stack *ps, StackEntry *item) { ps->entry[--ps->top] = *item; }
int StackEmpty(Stack *ps) { return ps->top == 0; }
int StackFull(Stack *ps) { return ps->top == MAXSTACK; }
void StackTop(Stack *ps, StackEntry *item) { ps->entry[ps->top - 1] = *item; }
int StackSize(Stack *ps) { return ps->top; }
void ClearStack(Stack *ps) { ps->top = 0; }
void TraverseStack(Stack *ps, void (*pvisit)(StackEntry)) {
  for (int i = ps->top; i > 0; i--) {
    (*pvisit)(ps->entry[i - 1]);
  }
}
