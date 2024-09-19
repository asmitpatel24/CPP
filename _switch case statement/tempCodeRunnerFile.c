#include <stdio.h>
#include <stdlib.h>
typedef struct TreeNode {
 int value;
 struct TreeNode* left;
 struct TreeNode* right;
} TreeNode;
TreeNode* createNode(int value) {
 TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
 newNode->value = value;
 newNode->left = NULL;
 newNode->right = NULL;
 return newNode;
}
void preorderTraversal(TreeNode* node) {
 if (node != NULL) {
 printf("%d ", node->value);
 preorderTraversal(node->left);
 preorderTraversal(node->right);
 }
}
void inorderTraversal(TreeNode* node) {
 if (node != NULL) {
 inorderTraversal(node->left);
 printf("%d ", node->value);
 inorderTraversal(node->right);
 }
}
void postorderTraversal(TreeNode* node) {
 if (node != NULL) {
 postorderTraversal(node->left);
 postorderTraversal(node->right);
 printf("%d ", node->value);
 }
}
int main() {
 TreeNode* root = createNode(1);
 root->left = createNode(2);

 root->right = createNode(3);
 root->left->left = createNode(4);
 root->left->right = createNode(5);
 root->right->left = createNode(6);
 root->right->right = createNode(7);
 printf("Preorder Traversal: ");
 preorderTraversal(root);
 printf("\n");
 printf("Inorder Traversal: ");
 inorderTraversal(root);
 printf("\n");
 printf("Postorder Traversal: ");
 postorderTraversal(root);
 printf("\n");
 return 0;
}