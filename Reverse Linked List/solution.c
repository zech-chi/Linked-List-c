/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    if (head == NULL || head->next == NULL)
        return (head);
    
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    struct ListNode* next = NULL;
    while (cur)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next; 
    }
    return (prev);
}
