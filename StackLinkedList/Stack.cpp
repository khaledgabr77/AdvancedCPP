#include "Stack.h"
#include <cstdlib>
#include <iostream>

void CreateStack(Stack *ps) { ps->top = NULL; }
void Push(Stack *ps, StackEntry e) {
  StackNode *pn = (StackNode *)std::malloc(sizeof(StackNode));
  pn->entry = e;
  pn->next = ps->top;
  ps->top = pn;
}
void Pop(Stack *ps, StackEntry *e) { StackNode *pn; }