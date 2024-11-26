#include<iostream>
using namespace std;

class Node {
    public:
    int ds;
    Node*p;
    Node*n;
    Node(int d){
        this->ds = d;
        this->p  = NULL;
        this->n = NULL;
    }
};
void print(Node *head){
    Node *temp = head;
    // cout<<temp<<endl;
    while(temp!=NULL){
        cout<<temp->ds<<",,"<<temp;
        temp = temp->n;
    }
    cout<<endl;
}

int main(){
    Node *node = new Node('a');
    Node *head = node;
    print(node);
    return 0;
}