/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode l3;
    struct ListNode* c=&l3;

    int carry=0;
    while(l1!=NULL || l2!=NULL || carry){
        int sum=carry;
        if(l1!=NULL){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->val;
            l2=l2->next;
        }
        carry=sum/10;
        c->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        c=c->next;
        c->val=sum%10;
        c->next=NULL;
    }
    return l3.next;
}