//Insert At Last
void Insert_At_End(Node*& head){
    Node* temp=head;
    int DATA;
    if(head==NULL){
        cout<<"Enetr Data:" ;
        cin>>DATA;
       Node* newnode= new Node(DATA);
       head=newnode;
    }else{
      cout<<"Enter Data:" ;
      cin>>DATA;
       Node* newnode= new Node(DATA);
       while(temp->next!=NULL){
           temp=temp->next;
       }
       newnode->next=temp->next;
       temp->next=newnode;    }
    
}
