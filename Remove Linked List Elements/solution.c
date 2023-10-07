/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val){
    while (head && head->val == val)
        head = head->next;
    if (head == NULL)
        return (NULL);

    struct ListNode* cur_node = head;
    struct ListNode* next_node = NULL;
    while (cur_node)
    {
        next_node = cur_node->next;
        while (next_node && next_node->val == val)
            next_node = next_node->next;
        cur_node->next = next_node;
        cur_node = cur_node->next;
    }
    return (head);
}
