/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* hare = head;
    struct ListNode* tortoise = head;
    while (hare && hare->next)
    {
        hare = hare->next->next;
        tortoise = tortoise->next;
    }
    return (tortoise);
}
