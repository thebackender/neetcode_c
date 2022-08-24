#include <stdio.h>
#include <stdlib.h>
#define STACK_MAX_SIZE 10000
#define STACK_OVERFLOW -100
#define STACK_UNDERFLOW -101

typedef int T;
typedef struct Stack_tag {
    T data[STACK_MAX_SIZE];
    size_t size;
} Stack_t;

void push(Stack_t *stack, T value){
    if(stack->size >= STACK_MAX_SIZE)
        exit(STACK_OVERFLOW);
    stack->data[stack->size] = value;
    stack->size++;
}

T pop(Stack_t *stack){
    if(stack->size == 0)
        exit(STACK_UNDERFLOW);
    stack->size--;
    return stack->data[stack->size];
}

T peek(Stack_t *stack){
    if(stack->size <= 0)
        exit(STACK_UNDERFLOW);
    return stack->data[stack->size - 1];
}

void printStackValue(T value){
    printf("%d ", value);
}

void printStack(Stack_t *stack, void (*printStackValue)(T)){
    for(int i = 0; i < stack->size; i++)
        printStackValue(stack->data[i]);
    printf("\n");
}


int main(){
    Stack_t stack;
    stack.size = 0;
    push(&stack, 2);
    printStack(&stack, printStackValue);
    push(&stack, 7);
    push(&stack, 4);
    printf("%d\n", peek(&stack));
    printf("%d\n", pop(&stack));
    printf("%d\n", peek(&stack));
    printStack(&stack, printStackValue);
    push(&stack, 3);
    printf("%d\n", peek(&stack));
    push(&stack, 1);
    printf("%d\n", peek(&stack));
    printf("%d\n", pop(&stack));
    printf("%d\n", peek(&stack));
    return 0;
}
