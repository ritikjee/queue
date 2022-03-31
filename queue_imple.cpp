#include<iostream>
#define size 100
using namespace std;
class Queue{
    int myqueue[size], front , rear;
    public:
    Queue(){
        front=-1;
        rear=-1;

    }
    bool isFull(){
        if (front==0&&rear==size-1)
        {
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if (front==0)
        {
            return true ;
        }
        return false;
    }

    int enQueue(int n){
        if (isFull())
        {
            cout<<endl<<"queue is already full";
        }
        else
        {
            if (front==-1)
            {
                front=0;
                rear++;
                myqueue[rear]=n;
                cout<<n<<"is added to queue";
            }
            
        }
        
    }
    
};
int main(){
    Queue myq;
     myq.enQueue(10); 
     myq.enQueue(20); 
     myq.enQueue(30); 
     myq.enQueue(40); 
     myq.enQueue(50);  
    myq.enQueue(60);
    return 0;
}