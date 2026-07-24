// Insert At Kth Position
void Insert_At_Kth_Position(Node*& head){
    int k,data,count=0;
    Node* temp=head;
    cout<<"Enetr Position: ";
    cin>>k;
    while(temp!=NULL){
        count++;
        if(count==k-1)break;
        temp=temp->next;
    }
    cout<<"Enter data to add: ";
    cin>>data;
    Node* newnode=new Node(data);
    newnode->next=temp->next;
    temp->next=newnode;
    
}
