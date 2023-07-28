#include <stdio.h>
#include <stdlib.h>

typedef enum TypeTag {
    VALUE,
    ADD,
    SUB,
    MUL,
    DIV
} TypeTag;

typedef struct Node {
    TypeTag type;
    union {
        int value;
        struct {
            struct Node *left;
            struct Node *right;
        } op;
    } data;
} Node;


Node *makeValue(int value) {
    Node *node = malloc(sizeof(Node));
    node->type = VALUE;
    node->data.value = value;
    return node;
}

Node *makeOpNode(TypeTag type, Node *left, Node *right) {
    Node *node = malloc(sizeof(Node));
    node->type = type;
    node->data.op.left = left;
    node->data.op.right = right;
    return node;
}

Node *fib(int n, Node **fib_values) {
    if (n == 0) {
        return makeValue(0);
    } else if (n == 1) {
        return makeValue(1);
    } else if (fib_values[n] != NULL) {
        return fib_values[n];
    } else {
        Node *left = fib(n-1, fib_values);
        Node *right = fib(n-2, fib_values);
        Node *result = makeOpNode(ADD, left, right);
        fib_values[n] = result;
        return result;
    }
}

int calc(Node *node) {
    if (node->type == VALUE) {
        return node->data.value;
    } else if (node->type == ADD) {
        int left_value = calc(node->data.op.left);
        int right_value = calc(node->data.op.right);
        return left_value + right_value;
    } else if (node->type == SUB) {
        int left_value = calc(node->data.op.left);
        int right_value = calc(node->data.op.right);
        return left_value - right_value;
    } else if (node->type == MUL) {
        int left_value = calc(node->data.op.left);
        int right_value = calc(node->data.op.right);
        return left_value * right_value;
    } else if (node->type == DIV) {
        int left_value = calc(node->data.op.left);
        int right_value = calc(node->data.op.right);
        return left_value / right_value;
    } else {
        return 0;
    }
}

int main() {
    Node *add = makeOpNode(ADD, makeValue(10), makeValue(6));
    Node *mul = makeOpNode(MUL, makeValue(5), makeValue(4));
    Node *sub = makeOpNode(SUB, mul, add);
    Node *div = makeOpNode(DIV, sub, makeValue(2));

    printf("add : %d\n", calc(add));
    printf("mul : %d\n", calc(mul));
    printf("sub : %d\n", calc(sub));
    printf("div : %d\n", calc(div));
    
    return 0;
}