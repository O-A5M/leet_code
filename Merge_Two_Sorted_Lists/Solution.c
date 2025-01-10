#include <stdlib.h>
#include <stddef.h>

struct ListNode    *new_node(int value)
{
    struct ListNode *new;

    new = malloc (sizeof(struct ListNode));
    new -> val = value;
    new -> next = NULL;
    return (new);
}

void    add_last(struct ListNode **head, struct ListNode *node)
{
    struct ListNode    *tmp;

    if (!*head)
    {
        *head = node;
        return ;
    }
    tmp = *head;
    while (tmp -> next != NULL)
    {
        tmp = tmp -> next;
    }
    tmp -> next = node;
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode    *head;
    struct ListNode    *ret;

    head = NULL;
    if (!list1 && !list2)
        return (list1);
    if (!list1 && list2)
        return (list2);
    if (!list2 && list1)
        return (list1);
    while (list1 && list2)
    {
        if (list1 -> val < list2 -> val)
        {
            add_last(&head, new_node(list1 -> val));
            list1 = list1 -> next;
        }
        else if (list1 -> val > list2 -> val)
        {
            add_last(&head, new_node(list2 -> val));
            list2 = list2 -> next;
        }
        else if (list1 -> val == list2 -> val)
        {
            add_last(&head, new_node(list1 -> val));
            add_last(&head, new_node(list2 -> val));
            list1 = list1 -> next;
            list2 = list2 -> next;
        }
    }
    while (list1)
    {
        add_last(&head, new_node(list1 -> val));
        list1 = list1 -> next;
    }
    while (list2)
    {
        add_last(&head, new_node(list2 -> val));
        list2 = list2 -> next;
    }
    ret = head;
    return (ret);
}
