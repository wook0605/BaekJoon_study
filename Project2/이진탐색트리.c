//201823801 김지희
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 20000
#define MAX 20000


typedef struct TreeNode {
    int data;
    struct TreeNode* left_child;
    struct TreeNode* right_child;
}TreeNode;

typedef TreeNode* tree_ptr;   //Treenode를 포인터 tree_ptr로 재정의

tree_ptr stack[MAX_STACK_SIZE];               //stack 선언
tree_ptr insert(tree_ptr head, int number, int* count);         //insert 함수 선언

//inorder 함수
void inter_inorder(tree_ptr node);
void recur_inorder(tree_ptr node);

//stack 관련 함수
void stack_full();
int stack_empty();
void push(int* top, int node);
int pop(int* top);

void main() {
    int data[MAX];
    int n;
    int i;
    int *count = 0;
    tree_ptr root = NULL;

    FILE* fp = fopen("input6.txt", "r");
    if (fp == NULL)
        perror("Error opening file");

    fscanf(fp, "%d", &n);
    int cnt = n;
    count = &cnt;
    for (i = 0; i < n; i++)
        fscanf(fp, "%d", &data[i]);

    for (i = 0; i < n; i++)
        root = insert(root, data[i], &count);
    
    printf("%d\n", cnt);
    inter_inorder(root);
    recur_inorder(root);

    fclose(fp);
    return;
}


tree_ptr insert(tree_ptr head, int number, int* count) { // 삽입 연산으로 이진 탐색 트리를 생성

    tree_ptr temp = NULL;
    tree_ptr n = NULL;
    tree_ptr t;
    t = head;
    int cnt = *count;

    if (t == NULL)
    {
        temp = (tree_ptr)malloc(sizeof(TreeNode));
        temp->data = number;
        temp->left_child = temp->right_child = NULL;
        return temp;
        free(temp);
    }
    else
    {
        n = head;
        while (1)
        {
            if ((n->data > number) && (n->left_child != NULL))
                n = n->left_child;

            else if (n->data == number)
            {
                cnt--;
                return head;
            }
                

            else if ((n->data < number) && (n->right_child != NULL))
                n = n->right_child;
            else break;
        }
        temp = (tree_ptr)malloc(sizeof(TreeNode));
        temp->data = number;
        temp->left_child = temp->right_child = NULL;
        if (n->data < number)
            n->right_child = temp;
        else
            n->left_child = temp;
        return head;
        free(temp);
    }
}


void inter_inorder(tree_ptr node) { // 중위 순회 방식으로 트리를 순회
    tree_ptr p;
    int top = -1;
    p = node;
    while (1)
    {
        while (p != NULL)
        {
            push(&top, p);
            p = p->left_child;
        }
        p = pop(&top);
        if (p == NULL)
            break;
        if (p->data < 500)
        {
            printf("%d ", p->data);
        }
        p = p->right_child;
    }
}


void recur_inorder(tree_ptr node) {
    if (node)
    {
        recur_inorder(node->left_child);

        if (node->data < 500)
            printf("%d ", node->data);
        recur_inorder(node->right_child);
    }

}

void stack_full() {
    exit(1);
}

int stack_empty() {
    exit(1);
}

void push(int* top, int node) {
    if (*top >= MAX_STACK_SIZE - 1) {
        stack_full();
        return;
    }
    stack[++ * top] = node;
}

int pop(int* top) {
    if (*top == -1)
        return stack_empty();
    return stack[(*top)--];
}