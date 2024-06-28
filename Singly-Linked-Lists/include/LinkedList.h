
class LinkedList{

    public : struct Node{
        public : int value;
        private : Node*next ;

    } ;
    private : Node*head  ;

    private : Node node(Node*h,Node*n = NULL){
        h =head ;



    void pushBack(int v){
    Node*newNode = new Node();
    newNode->value = v ;

    if(head == NULL){
      head = newNode;
      newNode->next = NULL;
    }
    else{
         Node*ptr = head ;
         while(ptr->next!=NULL){
            ptr = ptr->next;
         }
         ptr->next = newNode;
         newNode->next=NULL;
    }

}






};


