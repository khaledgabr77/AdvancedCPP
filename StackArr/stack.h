#ifndef STACK_H
#define STACK_H

typedef char StackEntry;

#define IMPLEMENTATION
#ifdef IMPLEMENTATION

#define MAXSTACK 100

typedef struct stack {
  int top;
  StackEntry entry[MAXSTACK];

} Stack;

#endif // IMPLEMENTATION

void CreateStack(Stack *);
void Push(Stack *, StackEntry);
void Pop(Stack *, StackEntry *);
int StackEmpty(Stack *);
int StackFull(Stack *);
void StackTop(Stack *, StackEntry *);
int StackSize(Stack *);
void ClearStack(Stack *);
void Display(StackEntry e);

void TraverseStack(Stack *, void (*)(StackEntry));
#endif // STACK_H