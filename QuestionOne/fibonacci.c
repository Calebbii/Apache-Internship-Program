#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    enum TypeTag {
        ADD,
        SUB,
        MUL,
        DIV,
        FIB
    } type;
    int value;
    struct Node* left;
    struct Node* right;
} Node;

Node* makeFunc(enum TypeTag type) {
    Node* node = malloc(sizeof(Node));
    node->type = type;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int fibonacci(int n);

int calc(Node* node) {
    if (node == NULL)
        return 0;

    if (node->type == ADD)
        return calc(node->left) + calc(node->right);
    else if (node->type == SUB)
        return calc(node->left) - calc(node->right);
    else if (node->type == MUL)
        return calc(node->left) * calc(node->right);
    else if (node->type == DIV)
        return calc(node->left) / calc(node->right);
    else if (node->type == FIB)
        return fibonacci(node->value);
    else
        return node->value;
}

int fibonacci(int n) {
    if (n <= 1)
        return n;

    int a = 0;
    int b = 1;
    int fib = 0;

    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib;
}

int main() {
    Node* add = makeFunc(ADD);
    add->left = makeFunc(FIB);
    add->left->value = 10;
    add->right = makeFunc(FIB);
    add->right->value = 6;

    Node* mul = makeFunc(MUL);
    mul->left = makeFunc(FIB);
    mul->left->value = 5;
    mul->right = makeFunc(FIB);
    mul->right->value = 4;

    Node* sub = makeFunc(SUB);
    sub->left = mul;
    sub->right = add;

    Node* fibo = makeFunc(SUB);
    fibo->left = sub;
    fibo->right = NULL;

    calc(add);
    calc(mul);
    calc(sub);
    int result_fibo = calc(fibo);

    printf("add: %d\n", add->value);
    printf("mul: %d\n", mul->value);
    printf("sub: %d\n", sub->value);
    printf("fibo: %d\n", result_fibo);

    return 0;
}
