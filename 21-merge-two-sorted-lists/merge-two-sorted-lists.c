/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l4, struct ListNode* l5) {
    struct ListNode* l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    l3->next = NULL;
    struct ListNode* head=l3;
    while(l4!=NULL && l5!=NULL){
        if(l4->val<=l5->val){
            l3->next=l4;
            l4=l4->next;
        }
        else if(l5->val<=l4->val){
            l3->next=l5;
            l5=l5->next;
        }
        l3=l3->next;
    }
    if(l4!=NULL){
        l3->next=l4;
    }
    else{
        l3->next=l5;
    }
    return head->next;
}