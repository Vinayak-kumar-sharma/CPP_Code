#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;
    void insert( int val ) {
        size = size + 1;
        int index = size;
        arr[ index ] = val;

        while( index > 1 ) {
            int parent = index/2 ;
            if( arr[index] > arr[parent] ) {
                swap( arr[index],arr[parent] );
                index = parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i = 1; i<=size;i++){
            cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
};


int main(){
    // priority queue minheap and maxheap
    priority_queue<int> maxheap;

    maxheap.push(50);
    maxheap.push(53);
    maxheap.push(52);
    maxheap.push(54);

    cout<<"MAxHeaP : >>> :: "<<maxheap.top()<<endl;
    maxheap.pop();
    cout<<"MAxHeaP : >>> : 2 : "<<maxheap.top()<<endl;
    maxheap.pop();
    cout<<"MAxHeaP : >>> : 3 : "<<maxheap.top()<<endl;
    maxheap.pop();
    cout<<"MAxHeaP : >>> : 4 : "<<maxheap.top()<<endl;




    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(100);
    minheap.push(99);
    minheap.push(22);
    minheap.push(101);

    cout<<endl<<endl;

    cout<<"MIxHeaP : >>> :: "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"MIxHeaP : >>> : 2 : "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"MIxHeaP : >>> : 3 : "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"MIxHeaP : >>> : 4 : "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"MIxHeaP : >>> : 5 : "<<minheap.top()<<endl;
    
    // heap h1;
    // heap h2;
    // h1.insert(100);
    // h1.insert(200);
    // h1.insert(300);
    // h1.insert(400);
    // h1.insert(500);
    // h1.print();
    // h2.insert(53);
    // h2.insert(52);
    // h2.insert(52);
    // h2.insert(54);
    // h2.print();
    return 0;
    
}