/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(!head || !head->next || !head->next->next) return head;
    struct ListNode* odd=head;
    struct ListNode* even=head->next;
    struct ListNode* evens=head->next;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        even->next=even->next->next;
        odd=odd->next;
        even=even->next;
    }
    odd->next=evens;
    return head;
}