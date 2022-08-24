#include <stdio.h>
#include <stdlib.h>
#define STACK_MAX_SIZE 10000
#define STACK_OVERFLOW -100
#define STACK_UNDERFLOW -101


typedef struct {
    int data[30000];
    int min_data[30000];
    size_t size;
} MinStack;


MinStack* minStackCreate() {
    MinStack* stack;
    stack->size = 0;
    printf("as");
    return stack;
}

void minStackPush(MinStack* obj, int val) {
  obj->data[obj->size] = val;
//   if (obj->size) {
//         if (val >= obj->min_data[obj->size - 1]) 
//             obj->min_data[obj->size] = obj->min_data[obj->size - 1];
//         else   
//             obj->min_data[obj->size] = val;
//   } else 
//     obj->min_data[obj->size] = val;
  obj->size++;
}

void minStackPop(MinStack* obj) {
  obj->size--;
}

int minStackTop(MinStack* obj) {
  return obj->data[obj->size - 1];
}

// int minStackGetMin(MinStack* obj) {
//   return obj->min_data[obj->size - 1];
// }

// void minStackFree(MinStack* obj) {
//     obj->size = 0;
// }

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/

int main() {
    MinStack* obj = minStackCreate();
    minStackPush(obj, 2);
    minStackPush(obj, -1);
    minStackPush(obj, 5);
    // printf("%d", minStackGetMin(obj));
    printf("%d", minStackTop(obj));
}