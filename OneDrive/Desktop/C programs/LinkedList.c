#include <stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
}*head=NULL;

void append(int num){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        struct node *lastnode=head;
        while(lastnode->next!=NULL){
            lastnode=lastnode->next;
        }
        lastnode->next=newnode;
    }
}

void display(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void deleteAt(int val){
    struct node *temp=head;
    struct node *prev=NULL;
    if(temp->data==val){
        head=temp->next;
    }
    while(temp!=NULL&&temp->data!=val){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("%d not found\n",val);
        return;
    }
    prev->next=temp->next;
    free(temp);
}

void insertAtFirst(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    while (curr != NULL) {
        struct ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* temp = head;
    struct ListNode* prev = NULL;

    while (temp != NULL) {
        if (temp->val == val) {
            if (prev == NULL) {
                // deleting head
                head = temp->next;
                free(temp);
                temp = head;
            } else {
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
}

int main()
{
    int n,val;
    printf("Enter number of values:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        append(num);
    }
    display();
    printf("Enter value to remove:");
    scanf("%d",&val);
    deleteAt(val);
    printf("After deleting %d in list..\n",val);
    display();
    printf("Enter value to insert at first:");
    scanf("%d",&val);
    removeElements(head,val);
    insertAtFirst(&head,val);
    printf("After inserting %d at first in list..\n",val);
    display();
    reverseList(head);
    printf("After reversing the list..\n"); 
    display();
    return 0;
}
