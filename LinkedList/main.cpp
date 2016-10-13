#include <stddef.h>
#include <stdio.h>
typedef struct Nodes{
  int data;
  struct Nodes* next;
  struct Nodes* pre; 
}Node;

Node* create_node(int data){
    Node* a = new Node();
    a->data = data;
    a->next = NULL;
    a->pre = NULL;
    return a;
}

Node* insert_node(Node* a, Node* b){
    if(b->next == NULL){
      b->next = a->next;
      a->next = b;
    }else{
      printf("the node b have link to do this function");
    }
}

void print_nodelist(Node* a){
    Node* tmp = a;
    while(NULL!=tmp){
        printf("%d, ",tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

int main(){
  Node* a = create_node(50);
  Node* b = create_node(10);
  Node* c = create_node(5);
  insert_node(a,b);
  insert_node(b,c);
  print_nodelist(a);

}
