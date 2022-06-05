typedef int entry ;
typedef struct node{
    struct node *next;
     entry data;

}Node;

typedef struct linked_list{
int lsize ;
Node head;
}Linked
void create_linkedList(Linked *pl);
void add_nodeFirst(Linked * , entry e);
void add_nodeLast(Linked * , entry e);
void add_nodeIndex(Linked * , entry e, int index);
void remove_first(Linked * ,entry *e);
void remove_last(Linked * ,entry *e);
void remove_nodeData(Linked * ,entry *e);
void remove_nodeIndex(Linked * ,entry *e,int index);
void printall();
