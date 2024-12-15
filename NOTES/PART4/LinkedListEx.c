#include <stdio.h>
#include <stdlib.h>

typedef struct node {
// craete a structure for each node in the linked list
  int data; // to store the data in the node
  struct node * next; // define next to be a pointer to the next node
} Node; // rename structure to Node

Node * createLinkedList(int n) {
  int i = 0;
  Node * head = NULL; // to return the address of the first node
  Node * temp = NULL; // to create temporary nodes
  Node * p = NULL; // in order to iterate through the list, to add a node at the right position

  for (i=0; i<n; i++) {
    temp = (Node *) malloc(sizeof(Node)); // allocate memory for temporary node

    printf ("\nEnter the data for Node: ", i + 1);
    scanf("%d", &(temp->data)); // store the given data in the temporary node's data
    temp->next = NULL; // set temporary node's next node to be null

    if (head == NULL) { // if the first node is null, that means the list is empty
      head = temp; // the start of the list to be the temporary node
    } 

    else { // the list is not empty
      p = head; // start p at the start of the list
      while (p->next != NULL) { // if there is a next node
        p = p->next; // set p to be the next node
      }
      p->next = temp; // set the next node to be the temporary node
    }
  }

  return head; // return the address of the start of the list
}

void displayList(Node * head) {
  Node *p = head;
  while(p->next != NULL) {
    printf("\t%d->", p->data);
    p = p->next;
  }
}

Node * createLinkedList(int n); // function to create the linked list
void displayList(Node * head); // function to display the content

int main(void) {
  int n = 0; // the number of nodes
  Node *HEAD = NULL; // set the first node of the linked list to be null
  printf("\nHow many nodes: ");
  scanf("%d", &n); // get the # of nodes from the user
  HEAD = createLinkedList(n); // set HEAD to be the address of the created linkedin list
  displayList(HEAD); // display the linked list
  return 0;
}