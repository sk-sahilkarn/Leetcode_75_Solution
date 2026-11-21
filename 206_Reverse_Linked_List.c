/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* temp;
    
    int i=0;
    int* ptr;  
    temp=head;
    
    ptr=(int*)malloc(5000*sizeof(int));
    
    while(head!=NULL){
        ptr[i]=head->val;
        head=head->next;
        i++;
    }
    head=temp;
    i--;
    while(head!=NULL){
        head->val=ptr[i];
        head=head->next;
       i--;
    }
    head=temp;
    
return head;}
