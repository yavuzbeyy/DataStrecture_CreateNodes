/******************************************************************************

Author : Yavuz Selim Sahin
Date : 2.08.2022
Linked-List  Travelling and Nodes

*******************************************************************************/

#include <iostream>

using namespace std;

class Node{
    public:
    
    Node(int data){
        this->data = data;
        nextNode = NULL;
    }
    
    int data;
    Node *nextNode;
    
};

int main()
{
Node* n1 = new Node(1);
Node* n2 = new Node(5);
Node* n3 = new Node(7);

Node* tempNode = n1;

n1->nextNode = n2;
n2->nextNode = n3;

    cout<<n1->data<<endl;
while(tempNode->nextNode != 0){
    
    tempNode=tempNode->nextNode;
    
    cout<<tempNode->data<<endl;
}


}

