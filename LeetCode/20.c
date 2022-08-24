#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_MAX_SIZE 10000
#define STACK_OVERFLOW -100
#define STACK_UNDERFLOW -101

typedef char T;

typedef struct Stack_tag {
    T data[STACK_MAX_SIZE];
    size_t size;
} Stack_t;

void push(Stack_t *stack, T value) {
    if (stack->size >= STACK_MAX_SIZE)
        exit(STACK_OVERFLOW);
    stack->data[stack->size] = value;
    stack->size++;
}

T pop(Stack_t *stack){
    if (stack->size == 0)
        exit(STACK_UNDERFLOW);
    stack->size--;
    return stack->data[stack->size];
}

T peek(Stack_t *stack) {
    if (stack->size <= 0)
        exit(STACK_UNDERFLOW);
    return stack->data[stack->size - 1];
}

bool isValid(char *s) {
    int i = 0;
    Stack_t stack;
    stack.size = 0;
    while (s[i]) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            push(&stack, s[i]);
        } else {
            if (!stack.size)
                return false;
            if (s[i] == ')') {
                if (peek(&stack) == '(')
                    pop(&stack);
                else  
                    return false;
            }
            if (s[i] == '}') {
                if (peek(&stack) == '{')
                    pop(&stack);
                else  
                    return false;
            }
            if (s[i] == ']') {
                if (peek(&stack) == '[')
                    pop(&stack);
                else  
                    return false;
            }            
        }
        printf("%c\n", s[i]);
        i++;
    }
    if (stack.size)
        return false;
    return true;
}

int main() {
    char input[100000] = "()(";
    if (isValid(input))
        printf("YES");
    else   
        printf("NO");
    return 0;
}
