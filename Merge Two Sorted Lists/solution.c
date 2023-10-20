/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if (list1 == NULL)
        return (list2);
    if (list2 == NULL)
        return (list1);
    
    struct ListNode *head = NULL;
    if (list1->val < list2->val)
    {
        head = list1;
        list1 = list1->next;
    }
    else
    {
        head = list2;
        list2 = list2->next;
    }

    struct ListNode *curNode = head;
    while (list1 && list2)
    {
        if (list1->val <= list2->val)
        {
            curNode->next = list1;
            list1 = list1->next;
        }
        else
        {
            curNode->next = list2;
            list2 = list2->next;
        }
        curNode = curNode->next;
    }

    if (list1)
        curNode->next = list1;
    else
        curNode->next = list2;

    return (head);
}
