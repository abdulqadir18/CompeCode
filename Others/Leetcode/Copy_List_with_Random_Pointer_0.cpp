class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        Node *ans= new Node(head->val);
        
        //mapping
        map<Node*,int>m;
        Node *temp=head;
        int n=0;
        while(temp)
        {
            m[temp]=n;
            n++;
            temp=temp->next;
        }
        
        //copy next
        Node *cur=ans;
        temp=head->next;
        while(temp)
        {
            Node *add=new Node(temp->val);
            cur->next=add;
            cur=cur->next;
            temp=temp->next;
        }
        
        //copy random
        temp=head;
        cur=ans;
        while(temp)
        {
            Node *add=ans;
            if(!temp->random) cur->random=NULL;
            else
            {
                int size=m[temp->random];
                for(int i=0; i<size; i++) add=add->next;
                cur->random=add;
            }
            cur=cur->next;
            temp=temp->next;
        }
        
        return ans;
    }
};