// Insert At Begining
void Insert_At_Begining(Node*& head){ // &address (pass by reference)
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
       newnode->next=head;
       head=newnode;
    }
    
}
