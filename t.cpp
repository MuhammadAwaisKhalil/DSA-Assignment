#include<iostream>
#include<vector>
using namespace std;
class SingleIntegerNode
{
    public:
    int val;
    SingleIntegerNode *next;


    SingleIntegerNode(int val,SingleIntegerNode *next=nullptr){
        {
            this->val=val;
            this->next=next;
        }

    }

};

class SingleFloatNode
{
    public:
    float val;
    SingleFloatNode *next;

    SingleFloatNode(float val=0,SingleFloatNode *next=nullptr){
        this->val=val;
        this->next=next;
    }
};

class SingleCharNode
{
    public:
    char val;
    SingleCharNode *next;

    SingleCharNode(char val, SingleCharNode *next=nullptr){
        this->val=val;
        this->next=next;
    }
};

class SingleLongNode
{
    public:
    long val;
    SingleLongNode *next;

    SingleLongNode(long val, SingleLongNode *next=nullptr){
        this->val=val;
        this->next=next;
    }
};


class IntegerLinkedList
{
    public:
    SingleIntegerNode *head;

    IntegerLinkedList(SingleIntegerNode *head=nullptr)
    {
        this->head=head;
    }

    //Inserting element into linked list
    void insertAtHead(int val)
    {
        SingleIntegerNode *temp=new SingleIntegerNode(val);
        if(!head)
        {
            head=temp;
            return;
        }
        temp->next=head;
        head=temp;
        return;
    }

    void insertAtEnd(int val)
    {
        SingleIntegerNode *t = new SingleIntegerNode(val);
        if(!head){
            head=t;
            return;
        }

        SingleIntegerNode *temp=head;
        while(temp->next)
        {
            temp=temp->next;
        }

        temp->next=t;
        return;
    }
    void insertAtIndex(int val, int pos) {
        if (pos != 1 && !head) {
            cout << "Current Position not found" << endl;
            return;
        }

        if (pos == 1) {
            insertAtHead(val);
            return;
        }

        int count = 1;
        SingleIntegerNode *temp = head;

        while (temp != nullptr && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position not found in Linked List" << endl;
            return;
        }

        SingleIntegerNode *t = new SingleIntegerNode(val);
        t->next = temp->next;
        temp->next = t;
    }

    //Deleting from Linked List

    void deleteAtHead()
    {
        if(!head)
        {
            cout<<"Linked List already empty"<<endl;
            return;
        }
        SingleIntegerNode *temp=head;
        head=head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if (!head) {
            cout << "Linked List is empty" << endl;
            return;
        }
        if (!head->next) 
        {
            delete head;
            head = nullptr;
            return;
        }
        SingleIntegerNode *temp = head;
        SingleIntegerNode *prev=nullptr;
        while (temp->next) 
        {
            prev=temp;
            temp = temp->next;
        }

        delete temp;
        prev->next = nullptr;
    }

    void deleteAtIndex(int pos) {
    if (!head) {
        cout << "Linked List is empty" << endl;
        return;
    }
    if (pos == 1) {
        deleteAtHead();
        return;
    }

    int count = 1;
    SingleIntegerNode *temp = head;
    SingleIntegerNode *prev = nullptr;

    while (temp) 
    {
        if (count == pos) {
            prev->next = temp->next;
            delete temp;
            return;
        }
        count++;
        prev = temp;
        temp = temp->next;
    }

    cout << "Position not found in Linked List" << endl;
    }

    void displayList()
    {
        if(!head)
        {
            cout<<"List is empty"<<endl;
            return;
        }

        SingleIntegerNode *temp=head;
        while(temp)
        {
            cout<<temp->val<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    vector<int> locateElementInList(int val)
    {
        if(!head)
        {
            return {-1};
        }

        SingleIntegerNode *temp=head;
        int count=1;
        vector<int> loc;

        while(temp)
        {
            if(temp->val==val)
            {
                loc.push_back(count);
            }
            temp=temp->next;

            if(loc.size()==0)
            {
                return {-1};
            }

        }

        
    }


};

class FloatLinkedList
{
    public:
    SingleFloatNode *head;

    FloatLinkedList(SingleFloatNode *head=nullptr)
    {
        this->head=head;
    }

    //Inserting element into linked list
    void insertAtHead(float val)
    {
        SingleFloatNode *temp=new SingleFloatNode(val);
        if(!head)
        {
            head=temp;
            return;
        }
        temp->next=head;
        head=temp;
        return;
    }

    void insertAtEnd(float val)
    {
        SingleFloatNode *t = new SingleFloatNode(val);
        if(!head){
            head=t;
            return;
        }

        SingleFloatNode *temp=head;
        while(temp->next)
        {
            temp=temp->next;
        }

        temp->next=t;
        return;
    }
    void insertAtIndex(float val, int pos) {
        if (pos != 1 && !head) {
            cout << "Current Position not found" << endl;
            return;
        }

        if (pos == 1) {
            insertAtHead(val);
            return;
        }

        int count = 1;
        SingleFloatNode *temp = head;

        while (temp != nullptr && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position not found in Linked List" << endl;
            return;
        }

        SingleFloatNode *t = new SingleFloatNode(val);
        t->next = temp->next;
        temp->next = t;
    }

    //Deleting from Linked List

    void deleteAtHead()
    {
        if(!head)
        {
            cout<<"Linked List already empty"<<endl;
            return;
        }
        SingleFloatNode *temp=head;
        head=head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if (!head) {
            cout << "Linked List is empty" << endl;
            return;
        }
        if (!head->next) 
        {
            delete head;
            head = nullptr;
            return;
        }
        SingleFloatNode *temp = head;
        SingleFloatNode *prev=nullptr;
        while (temp->next) 
        {
            prev=temp;
            temp = temp->next;
        }

        delete temp;
        prev->next = nullptr;
    }

    void deleteAtIndex(int pos) {
    if (!head) {
        cout << "Linked List is empty" << endl;
        return;
    }
    if (pos == 1) {
        deleteAtHead();
        return;
    }

    int count = 1;
    SingleFloatNode *temp = head;
    SingleFloatNode *prev = nullptr;

    while (temp) 
    {
        if (count == pos) {
            prev->next = temp->next;
            delete temp;
            return;
        }
        count++;
        prev = temp;
        temp = temp->next;
    }

    cout << "Position not found in Linked List" << endl;
    }

    void displayList()
    {
        if(!head)
        {
            cout<<"List is empty"<<endl;
            return;
        }

        SingleFloatNode *temp=head;
        while(temp)
        {
            cout<<temp->val<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    vector<int> locateElementInList(float val)
    {
        if(!head)
        {
            return {-1};
        }

        SingleFloatNode *temp=head;
        int count=1;
        vector<int> loc;

        while(temp)
        {
            if(temp->val==val)
            {
                loc.push_back(count);
            }
            temp=temp->next;

            if(loc.size()==0)
            {
                return {-1};
            }

        }

        
    }

};

class CharLinkedList
{
    public:
    SingleCharNode *head;

    CharLinkedList(SingleCharNode *head=nullptr)
    {
        this->head=head;
    }

    //Inserting element into linked list
    void insertAtHead(char val)
    {
        SingleCharNode *temp=new SingleCharNode(val);
        if(!head)
        {
            head=temp;
            return;
        }
        temp->next=head;
        head=temp;
        return;
    }

    void insertAtEnd(char val)
    {
        SingleCharNode *t = new SingleCharNode(val);
        if(!head){
            head=t;
            return;
        }

        SingleCharNode *temp=head;
        while(temp->next)
        {
            temp=temp->next;
        }

        temp->next=t;
        return;
    }
    void insertAtIndex(char val, int pos) {
        if (pos != 1 && !head) {
            cout << "Current Position not found" << endl;
            return;
        }

        if (pos == 1) {
            insertAtHead(val);
            return;
        }

        int count = 1;
        SingleCharNode *temp = head;

        while (temp != nullptr && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position not found in Linked List" << endl;
            return;
        }

        SingleCharNode *t = new SingleCharNode(val);
        t->next = temp->next;
        temp->next = t;
    }

    //Deleting from Linked List

    void deleteAtHead()
    {
        if(!head)
        {
            cout<<"Linked List already empty"<<endl;
            return;
        }
        SingleCharNode *temp=head;
        head=head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if (!head) {
            cout << "Linked List is empty" << endl;
            return;
        }
        if (!head->next) 
        {
            delete head;
            head = nullptr;
            return;
        }
        SingleCharNode *temp = head;
        SingleCharNode *prev=nullptr;
        while (temp->next) 
        {
            prev=temp;
            temp = temp->next;
        }

        delete temp;
        prev->next = nullptr;
    }

    void deleteAtIndex(int pos) {
    if (!head) {
        cout << "Linked List is empty" << endl;
        return;
    }
    if (pos == 1) {
        deleteAtHead();
        return;
    }

    int count = 1;
    SingleCharNode *temp = head;
    SingleCharNode *prev = nullptr;

    while (temp) 
    {
        if (count == pos) {
            prev->next = temp->next;
            delete temp;
            return;
        }
        count++;
        prev = temp;
        temp = temp->next;
    }

    cout << "Position not found in Linked List" << endl;
    }

    void displayList()
    {
        if(!head)
        {
            cout<<"List is empty"<<endl;
            return;
        }

        SingleCharNode *temp=head;
        while(temp)
        {
            cout<<temp->val<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    vector<int> locateElementInList(char val)
    {
        if(!head)
        {
            return {-1};
        }

        SingleCharNode *temp=head;
        int count=1;
        vector<int> loc;

        while(temp)
        {
            if(temp->val==val)
            {
                loc.push_back(count);
            }
            temp=temp->next;

            if(loc.size()==0)
            {
                return {-1};
            }

        }

    }
};

class LongLinkedList
{
        public:
    SingleLongNode *head;

    LongLinkedList(SingleLongNode *head=nullptr)
    {
        this->head=head;
    }

    //Inserting element into linked list
    void insertAtHead(long val)
    {
        SingleLongNode *temp=new SingleLongNode(val);
        if(!head)
        {
            head=temp;
            return;
        }
        temp->next=head;
        head=temp;
        return;
    }

    void insertAtEnd(char val)
    {
        SingleLongNode *t = new SingleLongNode(val);
        if(!head){
            head=t;
            return;
        }

        SingleLongNode *temp=head;
        while(temp->next)
        {
            temp=temp->next;
        }

        temp->next=t;
        return;
    }
    void insertAtIndex(char val, int pos) {
        if (pos != 1 && !head) {
            cout << "Current Position not found" << endl;
            return;
        }

        if (pos == 1) {
            insertAtHead(val);
            return;
        }

        int count = 1;
        SingleLongNode *temp = head;

        while (temp != nullptr && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position not found in Linked List" << endl;
            return;
        }

        SingleLongNode *t = new SingleLongNode(val);
        t->next = temp->next;
        temp->next = t;
    }

    //Deleting from Linked List

    void deleteAtHead()
    {
        if(!head)
        {
            cout<<"Linked List already empty"<<endl;
            return;
        }
        SingleLongNode *temp=head;
        head=head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if (!head) {
            cout << "Linked List is empty" << endl;
            return;
        }
        if (!head->next) 
        {
            delete head;
            head = nullptr;
            return;
        }
        SingleLongNode *temp = head;
        SingleLongNode *prev=nullptr;
        while (temp->next) 
        {
            prev=temp;
            temp = temp->next;
        }

        delete temp;
        prev->next = nullptr;
    }

    void deleteAtIndex(int pos) {
    if (!head) {
        cout << "Linked List is empty" << endl;
        return;
    }
    if (pos == 1) {
        deleteAtHead();
        return;
    }

    int count = 1;
    SingleLongNode *temp = head;
    SingleLongNode *prev = nullptr;

    while (temp) 
    {
        if (count == pos) {
            prev->next = temp->next;
            delete temp;
            return;
        }
        count++;
        prev = temp;
        temp = temp->next;
    }

    cout << "Position not found in Linked List" << endl;
    }

    void displayList()
    {
        if(!head)
        {
            cout<<"List is empty"<<endl;
            return;
        }

        SingleLongNode *temp=head;
        while(temp)
        {
            cout<<temp->val<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    vector<int> locateElementInList(long val)
    {
        if(!head)
        {
            return {-1};
        }

        SingleLongNode *temp=head;
        int count=1;
        vector<int> loc;

        while(temp)
        {
            if(temp->val==val)
            {
                loc.push_back(count);
            }
            temp=temp->next;

            if(loc.size()==0)
            {
                return {-1};
            }

        }
        
    }

};

int main()
{
    
}