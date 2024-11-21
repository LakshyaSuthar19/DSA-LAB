#include<stdio.h>
#include<stdlib.h>

 void main(){ 

    struct node{
        int data;
        struct node*next;

    };
    struct node*head,*temp;
    
      {
    
        struct node*nextnode;
        int pos,i=1;
        temp=head;
        printf("enter position");
        scanf("%d",&pos);

        while(i<pos-1){
            temp=temp-> next;
            i++;
        }
        nextnode=temp->next;
temp->next= nextnode->next;
free(nextnode);

     }
}
int main() {
    struct Node* root = NULL;  // Start with an empty BST

    // Insert nodes into the BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    
    // Search for a value
    int value = 40;
    if (search(root, value)) {
        printf("Node with value %d found in the BST.\n", value);
    } else {
        printf("Node with value %d not found in the BST.\n", value);
    }

    return 0;
}
