class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        
       
        int diff =0;
        int s1=0,s2 =0;
        Node * temp1 = head1, *temp2 =head2;
        while(temp1!=nullptr){
            s1++;
            temp1 = temp1->next;
        }
        while(temp2!= nullptr){
            s2++;
            temp2 = temp2->next;
        }
        
        diff = abs(s1 -s2);
        temp1 = head1;
        temp2 = head2;
        if(s1>s2){
            while(diff--){
                temp1 = temp1->next;
            }
        }
        else if(s2>s1){
            while(diff--)
            temp2 = temp2->next;
        }
        
        while(temp1!= nullptr && temp2!= nullptr){
            if(temp1 == temp2) return (temp1->data);
            
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return -1;
    }
};
