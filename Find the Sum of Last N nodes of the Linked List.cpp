int sumOfLastN_Nodes(struct Node* head, int n) {
       int sum =0;
       Node * temp = head;
       int sz =0;
       while(temp != NULL)
       {
           sz++;
           temp = temp->next;
       }
       sz++;
       sz = sz - n;
       
       int i=1;
       temp = head;
       while(i < sz){
           temp = temp -> next;
           i++;
       }
       
       while(temp!=nullptr){
           sum += temp->data;
           temp = temp->next;
       }
       
       return sum;
    }
