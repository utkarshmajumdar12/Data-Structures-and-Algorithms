class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        ListNode* curr = head;

        if(!head || head->next || k==0) return head;

        int len = 1;
       while(curr->next && ++len)
        curr = curr->next;
        curr->next = head;
        k = k%len;
        k = len-k;
        while(k>0){
            curr = curr->next;
        }

        head = curr->next;
        curr->next = NULL;
        return head;
        
    }
};
