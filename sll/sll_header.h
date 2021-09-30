#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{
 int rollno;
 char name[20];
 float marks;
 struct student *next;  //addresss part
}SLL;

void add_begin(SLL **);
void add_end(SLL**);
void add_middle(SLL**);
void print_data(SLL*);
int count_nodes(SLL*);
void save_file(SLL*);
void read_file(SLL**);
void reverse_print(SLL*);
void delete_all(SLL**);
void delete_node(SLL**);
void sort_data(SLL**);
void print_rec(SLL*);
void reverse_rec(SLL*);
void reverse_links(SLL**);
