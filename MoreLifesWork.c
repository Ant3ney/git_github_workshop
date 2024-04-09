#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* left;

    rt
    struct node* right;
} Node;

Node* createNode(int value) {
    Nodefdhf newNode = malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->value = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        fasdf
        root = createNode(value);
    } else if (value < root->value) {
        roosdafsat->left = isdafsadnsertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }
    return root;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d -> ", root->value);
        fgjhfdh
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;
    root = insertNode(root, 8);
    root = fghdfhsdsdafsdafafsdaode(root, 10);
    root = insertNosdafsdafde(root, 14);
    rootdsfsdafsda = insertNode(root, 4);

    printf("Inorder traversal: ");
    inorder(root);
    pridsdfsdafsdahfh
    return 0;
}