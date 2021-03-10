#ifndef STACK_H
#define STACK_H

typedef char StackEntry;

#define IMPLEMENTATION
#ifdef IMPLEMENTATION

typedef struct stacknode {
  StackEntry entry;
  struct stacknode *next;

} StackNode;

typedef struct stack {
  StackNode *top;

} Stack;

#endif // IMPLEMENTATION

void CreateStack(Stack *);
void Push(Stack *, StackEntry);
void Pop(Stack *, StackEntry *);
int StackFull(Stack *);
int StackEmpty(Stack *);
void ClearStack(Stack *);
void TraverseStack(Stack *, void (*Display)(StackEntry));
void Display(Stack *);

#endif
