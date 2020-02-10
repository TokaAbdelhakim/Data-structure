#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node * first ='/0';
struct Node * last ='/0';
void add (int x);
void retieve (void);
void print_Q (void);
int main()
{
    printf("Hello world!\n");
    add(5);
    add (10);
    add(20);
    retieve ();
    print_Q();

    return 0;
}
void add (int x)
{
    struct Node * ptr;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = x;
    ptr->next = '/0';
    if ((first == '/0') && (last == '/0'))
    {
        first = last = ptr;
        return;
    }

    last ->next =ptr;
    last = ptr;

}
void retieve (void)
{
    struct Node * temp;
    temp = first;
    if (first == '/0')
    {
        printf("Empty \n");
        return;
    }
    else if (first == last)
    {
        first ='/0';
        last = '/0';
    }
    else
    {
        first = first -> next;
    }
    free (temp);
}
void print_Q (void)
{
struct Node * ptr = first;
while (ptr != '/0')
{
      printf ("%d\n",ptr->data);
       ptr = ptr->next;
}
}
