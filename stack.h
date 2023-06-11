#pragma once

#include <stddef.h> /* size_t */

typedef struct stack stack_t; 

stack_t *StackCreate(size_t element_size, size_t num_of_elements);

void StackDestroy(stack_t *stack);

void StackPush(stack_t *stack, const void *data);

void StackPop(stack_t *stack);

void *StackPeek(const stack_t *stack);

int StackIsEmpty(const stack_t *stack);

size_t StackSize(const stack_t *stack);

size_t StackCapacity(const stack_t *stack);





