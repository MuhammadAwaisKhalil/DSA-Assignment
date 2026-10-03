#include<iostream>
#include<vector>
using namespace std;


//Node Classes Start

//Node Classes for singly linked lists
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

//Node Classes for doubly linked list
class DoublyIntegerNode
{
    public:
    int val;
    DoublyIntegerNode *prev;
    DoublyIntegerNode *next;

    DoublyIntegerNode(int val, DoublyIntegerNode *prev=nullptr, DoublyIntegerNode *next=nullptr){
        this->val=val;
        this->prev=prev;
        this->next=next;
    }
};

class DoublyFloatNode
{
    public:
    float val;
    DoublyFloatNode *prev;
    DoublyFloatNode *next;

    DoublyFloatNode(float val, DoublyFloatNode *prev=nullptr, DoublyFloatNode *next=nullptr){
        this->val=val;
        this->prev=prev;
        this->next=next;
    }
};

class DoublyCharNode
{
    public:
    char val;
    DoublyCharNode *prev;
    DoublyCharNode *next;

    DoublyCharNode(char val, DoublyCharNode *prev=nullptr, DoublyCharNode *next=nullptr){
        this->val=val;
        this->prev=prev;
        this->next=next;
    }
};

class DoublyLongNode
{
    public:
    long val;
    DoublyLongNode *prev;
    DoublyLongNode *next;

    DoublyLongNode(long val, DoublyLongNode *prev=nullptr, DoublyLongNode *next=nullptr){
        this->val=val;
        this->prev=prev;
        this->next=next;
    }
};

//Node Classes End

//Linked List classes Start


// Awais Start: Doing Single Linked List
//Integer Linked list
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

//Float Linked list
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

//Char Linked list
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

//Long Linked list
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

//Awais End

//Abdur Rahman Start: Doubly Linked List
//Integer Doubly Linked list
class DoublyIntegerLinkedList
{
    public:
    DoublyIntegerNode *head;
    DoublyIntegerNode *tail;

    DoublyIntegerLinkedList()
    {
        head=nullptr;
        tail=nullptr;
    }

    ~DoublyIntegerLinkedList()
    {
        while(head)
        {
            DoublyIntegerNode *temp=head;
            head=head->next;
            delete temp;
        }
    }

    //Inserting element into linked list
    void insertAtHead(int val)
    {
        DoublyIntegerNode *temp=new DoublyIntegerNode(val);
        if(!head)
        {
            head=tail=temp;
            return;
        }
        temp->next=head;
        head->prev=temp;
        head=temp;
        return;
    }

    void insertAtEnd(int val)
    {
        DoublyIntegerNode *t=new DoublyIntegerNode(val);
        if(!head)
        {
            head=tail=t;
            return;
        }
        t->prev=tail;
        tail->next=t;
        tail=t;
        return;
    }

    void insertAtIndex(int val, int pos) {
        if (pos < 1) {
            cout << "Invalid position" << endl;
            return;
        }

        if (pos == 1) {
            insertAtHead(val);
            return;
        }

        int count = 1;
        DoublyIntegerNode *temp = head;

        while (temp != nullptr && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position not found in Linked List" << endl;
            return;
        }

        if (!temp->next) {
            insertAtEnd(val);
            return;
        }

        DoublyIntegerNode *t = new DoublyIntegerNode(val, temp, temp->next);
        temp->next->prev = t;
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
        DoublyIntegerNode *temp=head;
        head=head->next;
        if(head)
            head->prev=nullptr;
        else
            tail=nullptr;
        delete temp;
    }

    void deleteAtEnd() {
        if (!head) {
            cout << "Linked List is empty" << endl;
            return;
        }
        DoublyIntegerNode *temp = tail;
        tail = tail->prev;
        if (tail)
            tail->next = nullptr;
        else
            head = nullptr;
        delete temp;
    }

    void deleteAtIndex(int pos) {
        if (!head) {
            cout << "Linked List is empty" << endl;
            return;
        }
        if (pos < 1) {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 1) {
            deleteAtHead();
            return;
        }

        int count = 1;
        DoublyIntegerNode *temp = head;

        while (temp && count < pos)
        {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position not found in Linked List" << endl;
            return;
        }

        if (!temp->next) {
            deleteAtEnd();
            return;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }

    void displayList()
    {
        if(!head)
        {
            cout<<"List is empty"<<endl;
            return;
        }

        DoublyIntegerNode *temp=head;
        cout<<"Forward : NULL <-> ";
        while(temp)
        {
            cout<<temp->val<<" <-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

        temp=tail;
        cout<<"Backward: NULL <-> ";
        while(temp)
        {
            cout<<temp->val<<" <-> ";
            temp=temp->prev;
        }
        cout<<"NULL"<<endl;
    }

    vector<int> locateElementInList(int val)
    {
        vector<int> loc;
        if(!head)
        {
            return {-1};
        }

        DoublyIntegerNode *temp=head;
        int count=1;

        while(temp)
        {
            if(temp->val==val)
            {
                loc.push_back(count);
            }
            temp=temp->next;
            count++;
        }

        if(loc.size()==0)
        {
            return {-1};
        }
        return loc;
    }

};

//Float Doubly Linked list
class DoublyFloatLinkedList
{
    public:
    DoublyFloatNode *head;
    DoublyFloatNode *tail;

    DoublyFloatLinkedList()
    {
        head=nullptr;
        tail=nullptr;
    }

    ~DoublyFloatLinkedList()
    {
        while(head)
        {
            DoublyFloatNode *temp=head;
            head=head->next;
            delete temp;
        }
    }

    //Inserting element into linked list
    void insertAtHead(float val)
    {
        DoublyFloatNode *temp=new DoublyFloatNode(val);
        if(!head)
        {
            head=tail=temp;
            return;
        }
        temp->next=head;
        head->prev=temp;
        head=temp;
        return;
    }

    void insertAtEnd(float val)
    {
        DoublyFloatNode *t=new DoublyFloatNode(val);
        if(!head)
        {
            head=tail=t;
            return;
        }
        t->prev=tail;
        tail->next=t;
        tail=t;
        return;
    }

    void insertAtIndex(float val, int pos) {
        if (pos < 1) {
            cout << "Invalid position" << endl;
            return;
        }

        if (pos == 1) {
            insertAtHead(val);
            return;
        }

        int count = 1;
        DoublyFloatNode *temp = head;

        while (temp != nullptr && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position not found in Linked List" << endl;
            return;
        }

        if (!temp->next) {
            insertAtEnd(val);
            return;
        }

        DoublyFloatNode *t = new DoublyFloatNode(val, temp, temp->next);
        temp->next->prev = t;
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
        DoublyFloatNode *temp=head;
        head=head->next;
        if(head)
            head->prev=nullptr;
        else
            tail=nullptr;
        delete temp;
    }

    void deleteAtEnd() {
        if (!head) {
            cout << "Linked List is empty" << endl;
            return;
        }
        DoublyFloatNode *temp = tail;
        tail = tail->prev;
        if (tail)
            tail->next = nullptr;
        else
            head = nullptr;
        delete temp;
    }

    void deleteAtIndex(int pos) {
        if (!head) {
            cout << "Linked List is empty" << endl;
            return;
        }
        if (pos < 1) {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 1) {
            deleteAtHead();
            return;
        }

        int count = 1;
        DoublyFloatNode *temp = head;

        while (temp && count < pos)
        {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position not found in Linked List" << endl;
            return;
        }

        if (!temp->next) {
            deleteAtEnd();
            return;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }

    void displayList()
    {
        if(!head)
        {
            cout<<"List is empty"<<endl;
            return;
        }

        DoublyFloatNode *temp=head;
        cout<<"Forward : NULL <-> ";
        while(temp)
        {
            cout<<temp->val<<" <-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

        temp=tail;
        cout<<"Backward: NULL <-> ";
        while(temp)
        {
            cout<<temp->val<<" <-> ";
            temp=temp->prev;
        }
        cout<<"NULL"<<endl;
    }

    vector<int> locateElementInList(float val)
    {
        vector<int> loc;
        if(!head)
        {
            return {-1};
        }

        DoublyFloatNode *temp=head;
        int count=1;

        while(temp)
        {
            if(temp->val==val)
            {
                loc.push_back(count);
            }
            temp=temp->next;
            count++;
        }

        if(loc.size()==0)
        {
            return {-1};
        }
        return loc;
    }

};

//Char Doubly Linked list
class DoublyCharLinkedList
{
    public:
    DoublyCharNode *head;
    DoublyCharNode *tail;

    DoublyCharLinkedList()
    {
        head=nullptr;
        tail=nullptr;
    }

    ~DoublyCharLinkedList()
    {
        while(head)
        {
            DoublyCharNode *temp=head;
            head=head->next;
            delete temp;
        }
    }

    //Inserting element into linked list
    void insertAtHead(char val)
    {
        DoublyCharNode *temp=new DoublyCharNode(val);
        if(!head)
        {
            head=tail=temp;
            return;
        }
        temp->next=head;
        head->prev=temp;
        head=temp;
        return;
    }

    void insertAtEnd(char val)
    {
        DoublyCharNode *t=new DoublyCharNode(val);
        if(!head)
        {
            head=tail=t;
            return;
        }
        t->prev=tail;
        tail->next=t;
        tail=t;
        return;
    }

    void insertAtIndex(char val, int pos) {
        if (pos < 1) {
            cout << "Invalid position" << endl;
            return;
        }

        if (pos == 1) {
            insertAtHead(val);
            return;
        }

        int count = 1;
        DoublyCharNode *temp = head;

        while (temp != nullptr && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position not found in Linked List" << endl;
            return;
        }

        if (!temp->next) {
            insertAtEnd(val);
            return;
        }

        DoublyCharNode *t = new DoublyCharNode(val, temp, temp->next);
        temp->next->prev = t;
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
        DoublyCharNode *temp=head;
        head=head->next;
        if(head)
            head->prev=nullptr;
        else
            tail=nullptr;
        delete temp;
    }

    void deleteAtEnd() {
        if (!head) {
            cout << "Linked List is empty" << endl;
            return;
        }
        DoublyCharNode *temp = tail;
        tail = tail->prev;
        if (tail)
            tail->next = nullptr;
        else
            head = nullptr;
        delete temp;
    }

    void deleteAtIndex(int pos) {
        if (!head) {
            cout << "Linked List is empty" << endl;
            return;
        }
        if (pos < 1) {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 1) {
            deleteAtHead();
            return;
        }

        int count = 1;
        DoublyCharNode *temp = head;

        while (temp && count < pos)
        {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position not found in Linked List" << endl;
            return;
        }

        if (!temp->next) {
            deleteAtEnd();
            return;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }

    void displayList()
    {
        if(!head)
        {
            cout<<"List is empty"<<endl;
            return;
        }

        DoublyCharNode *temp=head;
        cout<<"Forward : NULL <-> ";
        while(temp)
        {
            cout<<temp->val<<" <-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

        temp=tail;
        cout<<"Backward: NULL <-> ";
        while(temp)
        {
            cout<<temp->val<<" <-> ";
            temp=temp->prev;
        }
        cout<<"NULL"<<endl;
    }

    vector<int> locateElementInList(char val)
    {
        vector<int> loc;
        if(!head)
        {
            return {-1};
        }

        DoublyCharNode *temp=head;
        int count=1;

        while(temp)
        {
            if(temp->val==val)
            {
                loc.push_back(count);
            }
            temp=temp->next;
            count++;
        }

        if(loc.size()==0)
        {
            return {-1};
        }
        return loc;
    }

};

//Long Doubly Linked list
class DoublyLongLinkedList
{
    public:
    DoublyLongNode *head;
    DoublyLongNode *tail;

    DoublyLongLinkedList()
    {
        head=nullptr;
        tail=nullptr;
    }

    ~DoublyLongLinkedList()
    {
        while(head)
        {
            DoublyLongNode *temp=head;
            head=head->next;
            delete temp;
        }
    }

    //Inserting element into linked list
    void insertAtHead(long val)
    {
        DoublyLongNode *temp=new DoublyLongNode(val);
        if(!head)
        {
            head=tail=temp;
            return;
        }
        temp->next=head;
        head->prev=temp;
        head=temp;
        return;
    }

    void insertAtEnd(long val)
    {
        DoublyLongNode *t=new DoublyLongNode(val);
        if(!head)
        {
            head=tail=t;
            return;
        }
        t->prev=tail;
        tail->next=t;
        tail=t;
        return;
    }

    void insertAtIndex(long val, int pos) {
        if (pos < 1) {
            cout << "Invalid position" << endl;
            return;
        }

        if (pos == 1) {
            insertAtHead(val);
            return;
        }

        int count = 1;
        DoublyLongNode *temp = head;

        while (temp != nullptr && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position not found in Linked List" << endl;
            return;
        }

        if (!temp->next) {
            insertAtEnd(val);
            return;
        }

        DoublyLongNode *t = new DoublyLongNode(val, temp, temp->next);
        temp->next->prev = t;
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
        DoublyLongNode *temp=head;
        head=head->next;
        if(head)
            head->prev=nullptr;
        else
            tail=nullptr;
        delete temp;
    }

    void deleteAtEnd() {
        if (!head) {
            cout << "Linked List is empty" << endl;
            return;
        }
        DoublyLongNode *temp = tail;
        tail = tail->prev;
        if (tail)
            tail->next = nullptr;
        else
            head = nullptr;
        delete temp;
    }

    void deleteAtIndex(int pos) {
        if (!head) {
            cout << "Linked List is empty" << endl;
            return;
        }
        if (pos < 1) {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 1) {
            deleteAtHead();
            return;
        }

        int count = 1;
        DoublyLongNode *temp = head;

        while (temp && count < pos)
        {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position not found in Linked List" << endl;
            return;
        }

        if (!temp->next) {
            deleteAtEnd();
            return;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }

    void displayList()
    {
        if(!head)
        {
            cout<<"List is empty"<<endl;
            return;
        }

        DoublyLongNode *temp=head;
        cout<<"Forward : NULL <-> ";
        while(temp)
        {
            cout<<temp->val<<" <-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

        temp=tail;
        cout<<"Backward: NULL <-> ";
        while(temp)
        {
            cout<<temp->val<<" <-> ";
            temp=temp->prev;
        }
        cout<<"NULL"<<endl;
    }

    vector<int> locateElementInList(long val)
    {
        vector<int> loc;
        if(!head)
        {
            return {-1};
        }

        DoublyLongNode *temp=head;
        int count=1;

        while(temp)
        {
            if(temp->val==val)
            {
                loc.push_back(count);
            }
            temp=temp->next;
            count++;
        }

        if(loc.size()==0)
        {
            return {-1};
        }
        return loc;
    }

};

//Abdur Rahman End

// Waleed Start: Doing Single Circular Linked List
//Circular Integer Linked list
class CircularIntegerLinkedList{
	private: 
		SingleIntegerNode *tail;
		
	public: 
		CircularIntegerLinkedList(){
			tail = nullptr;
		}
		
		void insertAtHead(int val){
		    
		    if(!tail){
		    	tail = new SingleIntegerNode(val);
		    	tail->next = tail;
		    	return;
			}
			
			SingleIntegerNode *newNode = new SingleIntegerNode(val, tail->next);
			tail->next = newNode;
		}
		
		void insertAtTail(int val){
		    
		    if(!tail){
		    	tail = new SingleIntegerNode(val);
		    	tail->next = tail;
		    	return;
			}
			
			SingleIntegerNode *newNode = new SingleIntegerNode(val, tail->next);
			tail->next = newNode;
			tail = newNode;
		}
		
		void insertAtIndex(int val, int index){
			 if (index < 0) {
		        cout << "Invalid index." << endl;
		        return;
		    }
		
		    if (!tail) {
		        if (index == 0) {
		            insertAtTail(val);
		        }
		        else {
		            cout << "Index out of bounds. List is empty." << endl;
		        }
		        return;
		    }
		
		    if (index == 0) {
		        insertAtHead(val);
		        return;
		    }
			
			SingleIntegerNode *temp = tail->next;
			int j = 1;
			do{
				if(j == index){
					
					if(temp == tail){
						insertAtTail(val);
						return;
					}
					
					SingleIntegerNode *newNode = new SingleIntegerNode(val, temp->next);
					temp->next = newNode;
					return;
				}
				
				j++;
				temp = temp->next;
			}
			while(temp != tail->next);
		}
		
		//deletion function
		void deleteAtHead(){
			if(!tail){
				cout << "List is empty. Can't delete!" << endl;
				return;
			}
			
			if(tail->next == tail){
				SingleIntegerNode *temp = tail;
				tail == nullptr;
				delete temp;
				return;
			}
			
			SingleIntegerNode *temp = tail->next;
			tail->next = temp->next;
			delete temp;
			return;
		}
		
		void deleteAtTail(){
			if(!tail){
				cout << "List is empty. Can't delete!" << endl;
				return;
			}
			
			if(tail->next == tail){
				SingleIntegerNode *temp = tail;
				tail = nullptr;
				delete temp;
				return;
			}
			
			SingleIntegerNode *temp = tail->next;
		
		    while (temp->next != tail) {
		        temp = temp->next;
		    }
		
		    // Delete the old tail
		    SingleIntegerNode *temp2 = tail;
		
		    temp->next = tail->next;
		    tail = temp;
		
		    delete temp2;
		}
		
		void deleteAtIndex(int index) {

		    if (!tail) {
		        cout << "List is empty. Can't delete!" << endl;
		        return;
		    }
		
		    if (index < 0) {
		        cout << "Invalid Index." << endl;
		        return;
		    }
		
		    if (index == 0) {
		        deleteAtHead();
		        return;
		    }
		
		    SingleIntegerNode *temp = tail->next;
		    SingleIntegerNode *prev = tail;
		
		    int j = 0;
		
		    do {
		
		        if (j == index) {
		            break;
		        }
		
		        prev = temp;
		        temp = temp->next;
		        j++;
		
		    } while (temp != tail->next);
		
		    if (j != index) {
		        cout << "Invalid Index." << endl;
		        return;
		    }
		
		    if (temp == tail) {
		        deleteAtTail();
		        return;
		    }
		
		    prev->next = temp->next;
		    delete temp;
		}
		
		void display() {
		    if (!tail) {
		        cout << "List is empty!" << endl;
		        return;
		    }
		
		    SingleIntegerNode *temp = tail->next;
		
		    cout << "head";
		
		    do {
		        cout << " -> " << temp->val;
		        temp = temp->next;
		    } while (temp != tail->next);
		
		    cout << " -> head" << endl;
		}
		
		vector<int> findMatch(int val){
			vector<int> values;
			if (!tail) {
		        cout << "List is empty!" << endl;
		        return values;
		    }
		
		    SingleIntegerNode *temp = tail->next;
			int i = 0;
			do {
		        if(temp->val == val){
		        	values.push_back(i);
				}
				i++;
		        temp = temp->next;
		    } while (temp != tail->next);
			return values;
		}
};

//Circular Float Linked list
class CircularFloatLinkedList{
	private: 
		SingleFloatNode *tail;
		
	public: 
		CircularFloatLinkedList(){
			tail = nullptr;
		}
		
		void insertAtHead(float val){
		    
		    if(!tail){
		    	tail = new SingleFloatNode(val);
		    	tail->next = tail;
		    	return;
			}
			
			SingleFloatNode *newNode = new SingleFloatNode(val, tail->next);
			tail->next = newNode;
		}
		
		void insertAtTail(float val){
		    
		    if(!tail){
		    	tail = new SingleFloatNode(val);
		    	tail->next = tail;
		    	return;
			}
			
			SingleFloatNode *newNode = new SingleFloatNode(val, tail->next);
			tail->next = newNode;
			tail = newNode;
		}
		
		void insertAtIndex(float val, int index){
			 if (index < 0) {
		        cout << "Invalid index." << endl;
		        return;
		    }
		
		    if (!tail) {
		        if (index == 0) {
		            insertAtTail(val);
		        }
		        else {
		            cout << "Index out of bounds. List is empty." << endl;
		        }
		        return;
		    }
		
		    if (index == 0) {
		        insertAtHead(val);
		        return;
		    }
			
			SingleFloatNode *temp = tail->next;
			int j = 1;
			do{
				if(j == index){
					
					if(temp == tail){
						insertAtTail(val);
						return;
					}
					
					SingleFloatNode *newNode = new SingleFloatNode(val, temp->next);
					temp->next = newNode;
					return;
				}
				
				j++;
				temp = temp->next;
			}
			while(temp != tail->next);
		}
		
		//deletion function
		void deleteAtHead(){
			if(!tail){
				cout << "List is empty. Can't delete!" << endl;
				return;
			}
			
			if(tail->next == tail){
				SingleFloatNode *temp = tail;
				tail == nullptr;
				delete temp;
				return;
			}
			
			SingleFloatNode *temp = tail->next;
			tail->next = temp->next;
			delete temp;
			return;
		}
		
		void deleteAtTail(){
			if(!tail){
				cout << "List is empty. Can't delete!" << endl;
				return;
			}
			
			if(tail->next == tail){
				SingleFloatNode *temp = tail;
				tail = nullptr;
				delete temp;
				return;
			}
			
			SingleFloatNode *temp = tail->next;
		
		    while (temp->next != tail) {
		        temp = temp->next;
		    }
		
		    // Delete the old tail
		    SingleFloatNode *temp2 = tail;
		
		    temp->next = tail->next;
		    tail = temp;
		
		    delete temp2;
		}
		
		void deleteAtIndex(int index) {

		    if (!tail) {
		        cout << "List is empty. Can't delete!" << endl;
		        return;
		    }
		
		    if (index < 0) {
		        cout << "Invalid Index." << endl;
		        return;
		    }
		
		    if (index == 0) {
		        deleteAtHead();
		        return;
		    }
		
		    SingleFloatNode *temp = tail->next;
		    SingleFloatNode *prev = tail;
		
		    int j = 0;
		
		    do {
		
		        if (j == index) {
		            break;
		        }
		
		        prev = temp;
		        temp = temp->next;
		        j++;
		
		    } while (temp != tail->next);
		
		    if (j != index) {
		        cout << "Invalid Index." << endl;
		        return;
		    }
		
		    if (temp == tail) {
		        deleteAtTail();
		        return;
		    }
		
		    prev->next = temp->next;
		    delete temp;
		}
		
		void display() {
		    if (!tail) {
		        cout << "List is empty!" << endl;
		        return;
		    }
		
		    SingleFloatNode *temp = tail->next;
		
		    cout << "head";
		
		    do {
		        cout << " -> " << temp->val;
		        temp = temp->next;
		    } while (temp != tail->next);
		
		    cout << " -> head" << endl;
		}
		
		vector<int> findMatch(float val){
			vector<int> values;
			if (!tail) {
		        cout << "List is empty!" << endl;
		        return values;
		    }
		
		    SingleFloatNode *temp = tail->next;
			int i = 0;
			do {
		        if(temp->val == val){
		        	values.push_back(i);
				}
				i++;
		        temp = temp->next;
		    } while (temp != tail->next);
			return values;
		}
};

//Circular Char Linked list
class CircularCharLinkedList{
	private: 
		SingleCharNode *tail;
		
	public: 
		CircularCharLinkedList(){
			tail = nullptr;
		}
		
		void insertAtHead(char val){
		    
		    if(!tail){
		    	tail = new SingleCharNode(val);
		    	tail->next = tail;
		    	return;
			}
			
			SingleCharNode *newNode = new SingleCharNode(val, tail->next);
			tail->next = newNode;
		}
		
		void insertAtTail(char val){
		    
		    if(!tail){
		    	tail = new SingleCharNode(val);
		    	tail->next = tail;
		    	return;
			}
			
			SingleCharNode *newNode = new SingleCharNode(val, tail->next);
			tail->next = newNode;
			tail = newNode;
		}
		
		void insertAtIndex(char val, int index){
			 if (index < 0) {
		        cout << "Invalid index." << endl;
		        return;
		    }
		
		    if (!tail) {
		        if (index == 0) {
		            insertAtTail(val);
		        }
		        else {
		            cout << "Index out of bounds. List is empty." << endl;
		        }
		        return;
		    }
		
		    if (index == 0) {
		        insertAtHead(val);
		        return;
		    }
			
			SingleCharNode *temp = tail->next;
			int j = 1;
			do{
				if(j == index){
					
					if(temp == tail){
						insertAtTail(val);
						return;
					}
					
					SingleCharNode *newNode = new SingleCharNode(val, temp->next);
					temp->next = newNode;
					return;
				}
				
				j++;
				temp = temp->next;
			}
			while(temp != tail->next);
		}
		
		//deletion function
		void deleteAtHead(){
			if(!tail){
				cout << "List is empty. Can't delete!" << endl;
				return;
			}
			
			if(tail->next == tail){
				SingleCharNode *temp = tail;
				tail == nullptr;
				delete temp;
				return;
			}
			
			SingleCharNode *temp = tail->next;
			tail->next = temp->next;
			delete temp;
			return;
		}
		
		void deleteAtTail(){
			if(!tail){
				cout << "List is empty. Can't delete!" << endl;
				return;
			}
			
			if(tail->next == tail){
				SingleCharNode *temp = tail;
				tail = nullptr;
				delete temp;
				return;
			}
			
			SingleCharNode *temp = tail->next;
		
		    while (temp->next != tail) {
		        temp = temp->next;
		    }
		
		    // Delete the old tail
		    SingleCharNode *temp2 = tail;
		
		    temp->next = tail->next;
		    tail = temp;
		
		    delete temp2;
		}
		
		void deleteAtIndex(int index) {

		    if (!tail) {
		        cout << "List is empty. Can't delete!" << endl;
		        return;
		    }
		
		    if (index < 0) {
		        cout << "Invalid Index." << endl;
		        return;
		    }
		
		    if (index == 0) {
		        deleteAtHead();
		        return;
		    }
		
		    SingleCharNode *temp = tail->next;
		    SingleCharNode *prev = tail;
		
		    int j = 0;
		
		    do {
		
		        if (j == index) {
		            break;
		        }
		
		        prev = temp;
		        temp = temp->next;
		        j++;
		
		    } while (temp != tail->next);
		
		    if (j != index) {
		        cout << "Invalid Index." << endl;
		        return;
		    }
		
		    if (temp == tail) {
		        deleteAtTail();
		        return;
		    }
		
		    prev->next = temp->next;
		    delete temp;
		}
		
		void display() {
		    if (!tail) {
		        cout << "List is empty!" << endl;
		        return;
		    }
		
		    SingleCharNode *temp = tail->next;
		
		    cout << "head";
		
		    do {
		        cout << " -> " << temp->val;
		        temp = temp->next;
		    } while (temp != tail->next);
		
		    cout << " -> head" << endl;
		}
		
		vector<int> findMatch(char val){
			vector<int> values;
			if (!tail) {
		        cout << "List is empty!" << endl;
		        return values;
		    }
		
		    SingleCharNode *temp = tail->next;
			int i = 0;
			do {
		        if(temp->val == val){
		        	values.push_back(i);
				}
				i++;
		        temp = temp->next;
		    } while (temp != tail->next);
			return values;
		}
};

//Circular Long Linked list
class CircularLongLinkedList{
	private: 
		SingleLongNode *tail;
		
	public: 
		CircularLongLinkedList(){
			tail = nullptr;
		}
		
		void insertAtHead(long val){
		    
		    if(!tail){
		    	tail = new SingleLongNode(val);
		    	tail->next = tail;
		    	return;
			}
			
			SingleLongNode *newNode = new SingleLongNode(val, tail->next);
			tail->next = newNode;
		}
		
		void insertAtTail(long val){
		    
		    if(!tail){
		    	tail = new SingleLongNode(val);
		    	tail->next = tail;
		    	return;
			}
			
			SingleLongNode *newNode = new SingleLongNode(val, tail->next);
			tail->next = newNode;
			tail = newNode;
		}
		
		void insertAtIndex(long val, int index){
			 if (index < 0) {
		        cout << "Invalid index." << endl;
		        return;
		    }
		
		    if (!tail) {
		        if (index == 0) {
		            insertAtTail(val);
		        }
		        else {
		            cout << "Index out of bounds. List is empty." << endl;
		        }
		        return;
		    }
		
		    if (index == 0) {
		        insertAtHead(val);
		        return;
		    }
			
			SingleLongNode *temp = tail->next;
			int j = 1;
			do{
				if(j == index){
					
					if(temp == tail){
						insertAtTail(val);
						return;
					}
					
					SingleLongNode *newNode = new SingleLongNode(val, temp->next);
					temp->next = newNode;
					return;
				}
				
				j++;
				temp = temp->next;
			}
			while(temp != tail->next);
		}
		
		//deletion function
		void deleteAtHead(){
			if(!tail){
				cout << "List is empty. Can't delete!" << endl;
				return;
			}
			
			if(tail->next == tail){
				SingleLongNode *temp = tail;
				tail == nullptr;
				delete temp;
				return;
			}
			
			SingleLongNode *temp = tail->next;
			tail->next = temp->next;
			delete temp;
			return;
		}
		
		void deleteAtTail(){
			if(!tail){
				cout << "List is empty. Can't delete!" << endl;
				return;
			}
			
			if(tail->next == tail){
				SingleLongNode *temp = tail;
				tail = nullptr;
				delete temp;
				return;
			}
			
			SingleLongNode *temp = tail->next;
		
		    while (temp->next != tail) {
		        temp = temp->next;
		    }
		
		    // Delete the old tail
		    SingleLongNode *temp2 = tail;
		
		    temp->next = tail->next;
		    tail = temp;
		
		    delete temp2;
		}
		
		void deleteAtIndex(int index) {

		    if (!tail) {
		        cout << "List is empty. Can't delete!" << endl;
		        return;
		    }
		
		    if (index < 0) {
		        cout << "Invalid Index." << endl;
		        return;
		    }
		
		    if (index == 0) {
		        deleteAtHead();
		        return;
		    }
		
		    SingleLongNode *temp = tail->next;
		    SingleLongNode *prev = tail;
		
		    int j = 0;
		
		    do {
		
		        if (j == index) {
		            break;
		        }
		
		        prev = temp;
		        temp = temp->next;
		        j++;
		
		    } while (temp != tail->next);
		
		    if (j != index) {
		        cout << "Invalid Index." << endl;
		        return;
		    }
		
		    if (temp == tail) {
		        deleteAtTail();
		        return;
		    }
		
		    prev->next = temp->next;
		    delete temp;
		}
		
		void display() {
		    if (!tail) {
		        cout << "List is empty!" << endl;
		        return;
		    }
		
		    SingleLongNode *temp = tail->next;
		
		    cout << "head";
		
		    do {
		        cout << " -> " << temp->val;
		        temp = temp->next;
		    } while (temp != tail->next);
		
		    cout << " -> head" << endl;
		}
		
		vector<int> findMatch(long val){
			vector<int> values;
			if (!tail) {
		        cout << "List is empty!" << endl;
		        return values;
		    }
		
		    SingleLongNode *temp = tail->next;
			int i = 0;
			do {
		        if(temp->val == val){
		        	values.push_back(i);
				}
				i++;
		        temp = temp->next;
		    } while (temp != tail->next);
			return values;
		}
};

//Waleed End



//Linked list classes end

// Deletion options
int deletionMenu() {
    int choice;
    cout << "             DELETE MENU\n";
    cout << "1. Delete from Beginning\n";
    cout << "2. Delete from End\n";
    cout << "3. Delete from a Specific Position\n";
    cout << "0. Go Back\n";
    cout << "----------------------------------------\n";
    cout << "Choose an option: ";
    cin >> choice;

    return choice;
}

// Main menu
int mainMenu() {
    int choice;
    cout << "         LINKED LIST MANAGEMENT\n";
    cout << "1. Singly Linked List\n";
    cout << "2. Doubly Linked List\n";
    cout << "3. Circular Linked List\n";
    cout << "4. Doubly Circular Linked List (Not Available Yet)\n";
    cout << "0. Exit\n";
    cout << "----------------------------------------\n";
    cout << "Choose an option: ";
    cin >> choice;

    return choice;
}

// Menu for selecting the data type
int dataTypeMenu() {
    int choice;
    cout << "             DATA TYPE MENU\n";
    cout << "1. Integer\n";
    cout << "2. Long\n";
    cout << "3. Float\n";
    cout << "4. Character\n";
    cout << "0. Go Back\n";
    cout << "----------------------------------------\n";
    cout << "Choose a data type: ";
    cin >> choice;

    return choice;
}

// Linked list operations
int operationsMenu() {
    int choice;
    cout << "          SELECT AN OPERATION\n";
    cout << "1. Insert\n";
    cout << "2. Delete\n";
    cout << "3. Display\n";
    cout << "4. Search\n";
    cout << "0. Back to Main Menu\n";
    cout << "----------------------------------------\n";
    cout << "Choose an option: ";
    cin >> choice;

    return choice;
}

// Insertion options
int insertionMenu() {
    int choice;

    cout << "             INSERT MENU\n";
    cout << "1. Insert at Beginning\n";
    cout << "2. Insert at End\n";
    cout << "3. Insert at a Specific Position\n";
    cout << "0. Go Back\n";
    cout << "----------------------------------------\n";
    cout << "Choose an option: ";
    cin >> choice;

    return choice;
}

class Menu {
private:
    IntegerLinkedList intSinglyList;
    FloatLinkedList floatSinglyList;
    CharLinkedList charSinglyList;
    LongLinkedList longSinglyList;

    DoublyIntegerLinkedList intDoublyList;
    DoublyFloatLinkedList floatDoublyList;
    DoublyCharLinkedList charDoublyList;
    DoublyLongLinkedList longDoublyList;

    // Overloaded operations for Integer Linked List
    void processListOperations(IntegerLinkedList &list, const string &typeName) {
        int choice;
        do {
            cout << "\n-----------------------------------\n";
            cout << "   " << typeName << " Operations Menu\n";
            cout << "-----------------------------------\n";
            cout << "1. Insert at Head\n";
            cout << "2. Insert at End\n";
            cout << "3. Insert at Index/Position\n";
            cout << "4. Delete at Head\n";
            cout << "5. Delete at End\n";
            cout << "6. Delete at Index/Position\n";
            cout << "7. Display List\n";
            cout << "8. Locate Element\n";
            cout << "0. Back to Data Type Selection\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                int val;
                cout << "Enter value to insert at head: ";
                cin >> val;
                list.insertAtHead(val);
            } else if (choice == 2) {
                int val;
                cout << "Enter value to insert at end: ";
                cin >> val;
                list.insertAtEnd(val);
            } else if (choice == 3) {
                int val, pos;
                cout << "Enter value to insert: ";
                cin >> val;
                cout << "Enter position (1-based index): ";
                cin >> pos;
                list.insertAtIndex(val, pos);
            } else if (choice == 4) {
                list.deleteAtHead();
            } else if (choice == 5) {
                list.deleteAtEnd();
            } else if (choice == 6) {
                int pos;
                cout << "Enter position to delete: ";
                cin >> pos;
                list.deleteAtIndex(pos);
            } else if (choice == 7) {
                cout << "Current List:\n";
                list.displayList();
            } else if (choice == 8) {
                int val;
                cout << "Enter value to locate: ";
                cin >> val;
                vector<int> res = list.locateElementInList(val);
                if (res.size() == 1 && res[0] == -1) {
                    cout << "Element " << val << " not found in the list.\n";
                } else {
                    cout << "Element " << val << " found at position(s): ";
                    for (int pos : res) cout << pos << " ";
                    cout << "\n";
                }
            } else if (choice == 0) {
                cout << "Returning to previous menu...\n";
            } else {
                cout << "Invalid choice! Please try again.\n";
            }
        } while (choice != 0);
    }

    // Overloaded operations for Float Linked List
    void processListOperations(FloatLinkedList &list, const string &typeName) {
        int choice;
        do {
            cout << "\n-----------------------------------\n";
            cout << "   " << typeName << " Operations Menu\n";
            cout << "-----------------------------------\n";
            cout << "1. Insert at Head\n";
            cout << "2. Insert at End\n";
            cout << "3. Insert at Index/Position\n";
            cout << "4. Delete at Head\n";
            cout << "5. Delete at End\n";
            cout << "6. Delete at Index/Position\n";
            cout << "7. Display List\n";
            cout << "8. Locate Element\n";
            cout << "0. Back to Data Type Selection\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                float val;
                cout << "Enter value to insert at head: ";
                cin >> val;
                list.insertAtHead(val);
            } else if (choice == 2) {
                float val;
                cout << "Enter value to insert at end: ";
                cin >> val;
                list.insertAtEnd(val);
            } else if (choice == 3) {
                float val;
                int pos;
                cout << "Enter value to insert: ";
                cin >> val;
                cout << "Enter position (1-based index): ";
                cin >> pos;
                list.insertAtIndex(val, pos);
            } else if (choice == 4) {
                list.deleteAtHead();
            } else if (choice == 5) {
                list.deleteAtEnd();
            } else if (choice == 6) {
                int pos;
                cout << "Enter position to delete: ";
                cin >> pos;
                list.deleteAtIndex(pos);
            } else if (choice == 7) {
                cout << "Current List:\n";
                list.displayList();
            } else if (choice == 8) {
                float val;
                cout << "Enter value to locate: ";
                cin >> val;
                vector<int> res = list.locateElementInList(val);
                if (res.size() == 1 && res[0] == -1) {
                    cout << "Element " << val << " not found in the list.\n";
                } else {
                    cout << "Element " << val << " found at position(s): ";
                    for (int pos : res) cout << pos << " ";
                    cout << "\n";
                }
            } else if (choice == 0) {
                cout << "Returning to previous menu...\n";
            } else {
                cout << "Invalid choice! Please try again.\n";
            }
        } while (choice != 0);
    }

    // Overloaded operations for Char Linked List
    void processListOperations(CharLinkedList &list, const string &typeName) {
        int choice;
        do {
            cout << "\n-----------------------------------\n";
            cout << "   " << typeName << " Operations Menu\n";
            cout << "-----------------------------------\n";
            cout << "1. Insert at Head\n";
            cout << "2. Insert at End\n";
            cout << "3. Insert at Index/Position\n";
            cout << "4. Delete at Head\n";
            cout << "5. Delete at End\n";
            cout << "6. Delete at Index/Position\n";
            cout << "7. Display List\n";
            cout << "8. Locate Element\n";
            cout << "0. Back to Data Type Selection\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                char val;
                cout << "Enter value to insert at head: ";
                cin >> val;
                list.insertAtHead(val);
            } else if (choice == 2) {
                char val;
                cout << "Enter value to insert at end: ";
                cin >> val;
                list.insertAtEnd(val);
            } else if (choice == 3) {
                char val;
                int pos;
                cout << "Enter value to insert: ";
                cin >> val;
                cout << "Enter position (1-based index): ";
                cin >> pos;
                list.insertAtIndex(val, pos);
            } else if (choice == 4) {
                list.deleteAtHead();
            } else if (choice == 5) {
                list.deleteAtEnd();
            } else if (choice == 6) {
                int pos;
                cout << "Enter position to delete: ";
                cin >> pos;
                list.deleteAtIndex(pos);
            } else if (choice == 7) {
                cout << "Current List:\n";
                list.displayList();
            } else if (choice == 8) {
                char val;
                cout << "Enter value to locate: ";
                cin >> val;
                vector<int> res = list.locateElementInList(val);
                if (res.size() == 1 && res[0] == -1) {
                    cout << "Element " << val << " not found in the list.\n";
                } else {
                    cout << "Element " << val << " found at position(s): ";
                    for (int pos : res) cout << pos << " ";
                    cout << "\n";
                }
            } else if (choice == 0) {
                cout << "Returning to previous menu...\n";
            } else {
                cout << "Invalid choice! Please try again.\n";
            }
        } while (choice != 0);
    }

    // Overloaded operations for Long Linked List
    void processListOperations(LongLinkedList &list, const string &typeName) {
        int choice;
        do {
            cout << "\n-----------------------------------\n";
            cout << "   " << typeName << " Operations Menu\n";
            cout << "-----------------------------------\n";
            cout << "1. Insert at Head\n";
            cout << "2. Insert at End\n";
            cout << "3. Insert at Index/Position\n";
            cout << "4. Delete at Head\n";
            cout << "5. Delete at End\n";
            cout << "6. Delete at Index/Position\n";
            cout << "7. Display List\n";
            cout << "8. Locate Element\n";
            cout << "0. Back to Data Type Selection\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                long val;
                cout << "Enter value to insert at head: ";
                cin >> val;
                list.insertAtHead(val);
            } else if (choice == 2) {
                long val;
                cout << "Enter value to insert at end: ";
                cin >> val;
                list.insertAtEnd(val);
            } else if (choice == 3) {
                long val;
                int pos;
                cout << "Enter value to insert: ";
                cin >> val;
                cout << "Enter position (1-based index): ";
                cin >> pos;
                list.insertAtIndex(val, pos);
            } else if (choice == 4) {
                list.deleteAtHead();
            } else if (choice == 5) {
                list.deleteAtEnd();
            } else if (choice == 6) {
                int pos;
                cout << "Enter position to delete: ";
                cin >> pos;
                list.deleteAtIndex(pos);
            } else if (choice == 7) {
                cout << "Current List:\n";
                list.displayList();
            } else if (choice == 8) {
                long val;
                cout << "Enter value to locate: ";
                cin >> val;
                vector<int> res = list.locateElementInList(val);
                if (res.size() == 1 && res[0] == -1) {
                    cout << "Element " << val << " not found in the list.\n";
                } else {
                    cout << "Element " << val << " found at position(s): ";
                    for (int pos : res) cout << pos << " ";
                    cout << "\n";
                }
            } else if (choice == 0) {
                cout << "Returning to previous menu...\n";
            } else {
                cout << "Invalid choice! Please try again.\n";
            }
        } while (choice != 0);
    }

    // Overloaded operations for Doubly Integer Linked List
    void processListOperations(DoublyIntegerLinkedList &list, const string &typeName) {
        int choice;
        do {
            cout << "\n-----------------------------------\n";
            cout << "   " << typeName << " Operations Menu\n";
            cout << "-----------------------------------\n";
            cout << "1. Insert at Head\n";
            cout << "2. Insert at End\n";
            cout << "3. Insert at Index/Position\n";
            cout << "4. Delete at Head\n";
            cout << "5. Delete at End\n";
            cout << "6. Delete at Index/Position\n";
            cout << "7. Display List\n";
            cout << "8. Locate Element\n";
            cout << "0. Back to Data Type Selection\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                int val;
                cout << "Enter value to insert at head: ";
                cin >> val;
                list.insertAtHead(val);
            } else if (choice == 2) {
                int val;
                cout << "Enter value to insert at end: ";
                cin >> val;
                list.insertAtEnd(val);
            } else if (choice == 3) {
                int val, pos;
                cout << "Enter value to insert: ";
                cin >> val;
                cout << "Enter position (1-based index): ";
                cin >> pos;
                list.insertAtIndex(val, pos);
            } else if (choice == 4) {
                list.deleteAtHead();
            } else if (choice == 5) {
                list.deleteAtEnd();
            } else if (choice == 6) {
                int pos;
                cout << "Enter position to delete: ";
                cin >> pos;
                list.deleteAtIndex(pos);
            } else if (choice == 7) {
                cout << "Current List:\n";
                list.displayList();
            } else if (choice == 8) {
                int val;
                cout << "Enter value to locate: ";
                cin >> val;
                vector<int> res = list.locateElementInList(val);
                if (res.size() == 1 && res[0] == -1) {
                    cout << "Element " << val << " not found in the list.\n";
                } else {
                    cout << "Element " << val << " found at position(s): ";
                    for (int pos : res) cout << pos << " ";
                    cout << "\n";
                }
            } else if (choice == 0) {
                cout << "Returning to previous menu...\n";
            } else {
                cout << "Invalid choice! Please try again.\n";
            }
        } while (choice != 0);
    }

    // Overloaded operations for Doubly Float Linked List
    void processListOperations(DoublyFloatLinkedList &list, const string &typeName) {
        int choice;
        do {
            cout << "\n-----------------------------------\n";
            cout << "   " << typeName << " Operations Menu\n";
            cout << "-----------------------------------\n";
            cout << "1. Insert at Head\n";
            cout << "2. Insert at End\n";
            cout << "3. Insert at Index/Position\n";
            cout << "4. Delete at Head\n";
            cout << "5. Delete at End\n";
            cout << "6. Delete at Index/Position\n";
            cout << "7. Display List\n";
            cout << "8. Locate Element\n";
            cout << "0. Back to Data Type Selection\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                float val;
                cout << "Enter value to insert at head: ";
                cin >> val;
                list.insertAtHead(val);
            } else if (choice == 2) {
                float val;
                cout << "Enter value to insert at end: ";
                cin >> val;
                list.insertAtEnd(val);
            } else if (choice == 3) {
                float val;
                int pos;
                cout << "Enter value to insert: ";
                cin >> val;
                cout << "Enter position (1-based index): ";
                cin >> pos;
                list.insertAtIndex(val, pos);
            } else if (choice == 4) {
                list.deleteAtHead();
            } else if (choice == 5) {
                list.deleteAtEnd();
            } else if (choice == 6) {
                int pos;
                cout << "Enter position to delete: ";
                cin >> pos;
                list.deleteAtIndex(pos);
            } else if (choice == 7) {
                cout << "Current List:\n";
                list.displayList();
            } else if (choice == 8) {
                float val;
                cout << "Enter value to locate: ";
                cin >> val;
                vector<int> res = list.locateElementInList(val);
                if (res.size() == 1 && res[0] == -1) {
                    cout << "Element " << val << " not found in the list.\n";
                } else {
                    cout << "Element " << val << " found at position(s): ";
                    for (int pos : res) cout << pos << " ";
                    cout << "\n";
                }
            } else if (choice == 0) {
                cout << "Returning to previous menu...\n";
            } else {
                cout << "Invalid choice! Please try again.\n";
            }
        } while (choice != 0);
    }

    // Overloaded operations for Doubly Char Linked List
    void processListOperations(DoublyCharLinkedList &list, const string &typeName) {
        int choice;
        do {
            cout << "\n-----------------------------------\n";
            cout << "   " << typeName << " Operations Menu\n";
            cout << "-----------------------------------\n";
            cout << "1. Insert at Head\n";
            cout << "2. Insert at End\n";
            cout << "3. Insert at Index/Position\n";
            cout << "4. Delete at Head\n";
            cout << "5. Delete at End\n";
            cout << "6. Delete at Index/Position\n";
            cout << "7. Display List\n";
            cout << "8. Locate Element\n";
            cout << "0. Back to Data Type Selection\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                char val;
                cout << "Enter value to insert at head: ";
                cin >> val;
                list.insertAtHead(val);
            } else if (choice == 2) {
                char val;
                cout << "Enter value to insert at end: ";
                cin >> val;
                list.insertAtEnd(val);
            } else if (choice == 3) {
                char val;
                int pos;
                cout << "Enter value to insert: ";
                cin >> val;
                cout << "Enter position (1-based index): ";
                cin >> pos;
                list.insertAtIndex(val, pos);
            } else if (choice == 4) {
                list.deleteAtHead();
            } else if (choice == 5) {
                list.deleteAtEnd();
            } else if (choice == 6) {
                int pos;
                cout << "Enter position to delete: ";
                cin >> pos;
                list.deleteAtIndex(pos);
            } else if (choice == 7) {
                cout << "Current List:\n";
                list.displayList();
            } else if (choice == 8) {
                char val;
                cout << "Enter value to locate: ";
                cin >> val;
                vector<int> res = list.locateElementInList(val);
                if (res.size() == 1 && res[0] == -1) {
                    cout << "Element " << val << " not found in the list.\n";
                } else {
                    cout << "Element " << val << " found at position(s): ";
                    for (int pos : res) cout << pos << " ";
                    cout << "\n";
                }
            } else if (choice == 0) {
                cout << "Returning to previous menu...\n";
            } else {
                cout << "Invalid choice! Please try again.\n";
            }
        } while (choice != 0);
    }

    // Overloaded operations for Doubly Long Linked List
    void processListOperations(DoublyLongLinkedList &list, const string &typeName) {
        int choice;
        do {
            cout << "\n-----------------------------------\n";
            cout << "   " << typeName << " Operations Menu\n";
            cout << "-----------------------------------\n";
            cout << "1. Insert at Head\n";
            cout << "2. Insert at End\n";
            cout << "3. Insert at Index/Position\n";
            cout << "4. Delete at Head\n";
            cout << "5. Delete at End\n";
            cout << "6. Delete at Index/Position\n";
            cout << "7. Display List\n";
            cout << "8. Locate Element\n";
            cout << "0. Back to Data Type Selection\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                long val;
                cout << "Enter value to insert at head: ";
                cin >> val;
                list.insertAtHead(val);
            } else if (choice == 2) {
                long val;
                cout << "Enter value to insert at end: ";
                cin >> val;
                list.insertAtEnd(val);
            } else if (choice == 3) {
                long val;
                int pos;
                cout << "Enter value to insert: ";
                cin >> val;
                cout << "Enter position (1-based index): ";
                cin >> pos;
                list.insertAtIndex(val, pos);
            } else if (choice == 4) {
                list.deleteAtHead();
            } else if (choice == 5) {
                list.deleteAtEnd();
            } else if (choice == 6) {
                int pos;
                cout << "Enter position to delete: ";
                cin >> pos;
                list.deleteAtIndex(pos);
            } else if (choice == 7) {
                cout << "Current List:\n";
                list.displayList();
            } else if (choice == 8) {
                long val;
                cout << "Enter value to locate: ";
                cin >> val;
                vector<int> res = list.locateElementInList(val);
                if (res.size() == 1 && res[0] == -1) {
                    cout << "Element " << val << " not found in the list.\n";
                } else {
                    cout << "Element " << val << " found at position(s): ";
                    for (int pos : res) cout << pos << " ";
                    cout << "\n";
                }
            } else if (choice == 0) {
                cout << "Returning to previous menu...\n";
            } else {
                cout << "Invalid choice! Please try again.\n";
            }
        } while (choice != 0);
    }

public:
    void displayMainMenu() {
        int listCategory;
        do {
            cout << "\n===================================\n";
            cout << "      LINKED LIST SYSTEM MENU      \n";
            cout << "===================================\n";
            cout << "1. Singly Linked List\n";
            cout << "2. Doubly Linked List\n";
            cout << "0. Exit Application\n";
            cout << "Select List Structure: ";
            cin >> listCategory;

            if (listCategory == 1 || listCategory == 2) {
                int dataTypeChoice;
                do {
                    cout << "\n--- Select Data Type ---\n";
                    cout << "1. Integer (int)\n";
                    cout << "2. Float (float)\n";
                    cout << "3. Character (char)\n";
                    cout << "4. Long (long)\n";
                    cout << "0. Back to Main Menu\n";
                    cout << "Enter choice: ";
                    cin >> dataTypeChoice;

                    if (listCategory == 1) { // Singly Linked List
                        switch (dataTypeChoice) {
                            case 1:
                                processListOperations(intSinglyList, "Singly Integer Linked List");
                                break;
                            case 2:
                                processListOperations(floatSinglyList, "Singly Float Linked List");
                                break;
                            case 3:
                                processListOperations(charSinglyList, "Singly Char Linked List");
                                break;
                            case 4:
                                processListOperations(longSinglyList, "Singly Long Linked List");
                                break;
                            case 0:
                                break;
                            default:
                                cout << "Invalid choice! Please try again.\n";
                        }
                    } else { // Doubly Linked List
                        switch (dataTypeChoice) {
                            case 1:
                                processListOperations(intDoublyList, "Doubly Integer Linked List");
                                break;
                            case 2:
                                processListOperations(floatDoublyList, "Doubly Float Linked List");
                                break;
                            case 3:
                                processListOperations(charDoublyList, "Doubly Char Linked List");
                                break;
                            case 4:
                                processListOperations(longDoublyList, "Doubly Long Linked List");
                                break;
                            case 0:
                                break;
                            default:
                                cout << "Invalid choice! Please try again.\n";
                        }
                    }
                } while (dataTypeChoice != 0);
            } else if (listCategory != 0) {
                cout << "Invalid choice! Please try again.\n";
            }
        } while (listCategory != 0);

        cout << "Exiting application. Goodbye!\n";
    }
};

// ==========================================
// Main Function
// ==========================================

int main() {
    Menu appMenu;
    appMenu.displayMainMenu();
    return 0;
}

