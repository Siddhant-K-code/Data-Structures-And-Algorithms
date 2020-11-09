#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int item;
    struct list* next;
} list;

void insert_list(list** l, int x)
{
    list* p;
    p = malloc(sizeof(list));
    p->item = x;
    p->next = *l;
    *l = p;
}

void insert_AtEnd(list* l, int x)
{
    struct list *ptr, *temp;
    ptr = l;
    temp = (struct list*)malloc(sizeof(struct list));

    temp->item = x;
    temp->next = NULL;

    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

    ptr->next = temp;
}

list* search_list(list* l, int x)
{
    if (l == NULL)
        return NULL;

    if (l->item == x)
        return (l);
    else
        return (search_list(l->next, x));
}

list* predecessor_list(list* l, int x)
{
    if ((l == NULL) || (l->next == NULL)) {
        printf("Error: it sought on null list\n");
        return (NULL);
    }

    if ((l->next)->item == x)
        return (l);
    else
        return (predecessor_list(l->next, x));
}

void delete_list(list** l, int x)
{
    list* p;    /* item Pointer */
    list* pred; /* predecessor Pointer */
    list *search_list(), *predecessor_list();

    p = search_list(*l, x);
    if (p != NULL) {
        pred = predecessor_list(*l, x);
        if (pred == NULL) /* splice out out list */
            *l = p->next;
        else
            pred->next = p->next;

        free(p); /* free memory used by node */
    }
}

void show_list(list* l)
{
    while (l != NULL) {
        printf("%d\n", l->item);
        l = l->next;
    }
}

int main()
{
    list* head = NULL;
    int x = 10;
    insert_list(&head, 26);
    insert_list(&head, 562);
    insert_list(&head, x);
    printf("Its Memory:\n%d\n", search_list(head, 562)); // ? printf("Yes") : printf("No");
    search_list(head, 562) ? printf("Yes\n") : printf("No\n");
    search_list(head, 24) ? printf("Yes\n") : printf("No\n");

    show_list(head);

    printf("---------------\n");

    // delete_list(&head, 562);
    insert_AtEnd(head, 6369);
    show_list(head);
}
