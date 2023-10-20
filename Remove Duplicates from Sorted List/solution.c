/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    if (head == NULL || head->next == NULL)
        return (head);
    struct ListNode *prev = head;
    struct ListNode *cur = head->next;
    while (cur)
    {
        if (prev->val != cur->val)
        {
            prev->next = cur;
            prev = prev->next;
        }
        cur = cur->next;
    }
    prev->next = NULL;
    return (head);
}
