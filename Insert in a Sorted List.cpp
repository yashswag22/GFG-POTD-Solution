class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
       Node * temp1 = head;
       Node * temp2 = nullptr;
       Node * dummy = new Node(data);
       
       if(head ->data>= dummy->data){
         dummy->next = head;
         head = dummy;
         return head;
       }
       
       while(temp1 != nullptr)
       {
            temp2= temp1;
            temp1 = temp1->next;
            
            if(temp1!=nullptr && temp1->data >= dummy->data)
            {
                dummy->next = temp1;
                temp2->next = dummy;
                return head;
            }
            
            if(temp1== nullptr)
            {
                dummy->next = nullptr;
                temp2->next = dummy;
                return head;
            }
            
            
       }
    }
};
