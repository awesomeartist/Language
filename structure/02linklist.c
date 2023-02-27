#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
    int data;
    struct Node *next;
}Node, *LinkList;

LinkList LinkListCreate(void);
void ShowLinkList(Node *L);

int main(void)
{
    Node *L;
    L = LinkListCreate();
    ShowLinkList(L);
    return 0;
}

LinkList LinkListCreate(void)
{
    Node *L;
    L = (Node*)malloc(sizeof(Node));
    if(L==NULL)
        {
            printf("failure to malloc space!");
            exit(0);
        }
    L->next = NULL;

    int x;
    while((scanf("%d", &x) != EOF) && (x!=-1))
        {
            Node *p;
            p = (Node*)malloc(sizeof(Node));
            p->data = x;
            p->next = L->next;
            L->next = p;
        }
    return L;
}

void ShowLinkList(Node *L)
{   
    if(L->next != NULL)
        {   
            Node *p;
            p = L;
            int index = 0;
            printf("The data of LinkList  L are belows:\n");
            while(L->next)
                {   
                    L = L->next;
                    printf("%d:%d\n", index, L->data);                
                    index++;
                }
        }
    else
        {
            printf("Empty LinkList!\n");
        }
}