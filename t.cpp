#include<iostream>
using namespace std;
class SingleIntegerNode
{
    int val;
    SingleIntegerNode *next;
    SingleIntegerNode(int val=0,SingleIntegerNode *next=nullptr){
        {
            this->val=val;
            this->next=next;
        }

    }

};

class SingleFloatNode
{
    double val;
    SingleFloatNode *next;

    SingleFloatNode(double val=0,SingleFloatNode *next=nullptr){
        this->val=val;
        this->next=next;
    }
};

class SingleCharNode
{
    string val;
    SingleCharNode *next;

    SingleCharNode(string val="", SingleCharNode *next=nullptr){
        this->val=val;
        this->next=next;
    }
};

class SingleLongNode
{
    bool val;
    SingleLongNode *next;

    SingleLongNode(bool val, SingleLongNode *next=nullptr){
        this->val=val;
        this->next=next;
    }
};


class IntegerLinkedList
{
    
};

class FloatLinkedList
{

};

class CharLinkedList
{

};

class LongLinkedList
{

};

int main()
{

}