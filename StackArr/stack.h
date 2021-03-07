#define ARR_STACK
#ifdef ARR_STACK

#define MAXSTACK 100

typedef void *StackEntry;

typedef struct stack {
  int top;
  StackEntry entry[MAXSTACK];

} Stack;

#endif

void CreateStack(Stack *);
void Push(Stack *, StackEntry);
void Pop(Stack *, StackEntry *);
int StackEmpty(Stack *);
int StackFull(Stack *);
void StackTop(Stack *, StackEntry *);
int StackSize(Stack *);
void ClearStack(Stack *);
void TraverseStack(Stack *, void (*)(StackEntry));
