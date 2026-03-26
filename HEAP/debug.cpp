#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    int *arr;
    int size;
    int totalSize;

    public:
    MaxHeap(int n){
        arr=new int[n];
        size=0;
        totalSize=n;
    }

    void insert(int value){
        if(size==totalSize){
            cout<<"Heap is full"<<endl;
            return;
        }
        arr[size]=value;
        size++;
        int index=size-1;

        while(index>0&&arr[(index-1)/2]<arr[index]){
            swap(arr[(index-1)/2],arr[index]);
            index=(index-1)/2;
        }

        cout<<"Inserted "<<value<<" in the heap"<<endl; 
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    cout << "Creating heap..." << endl;
    MaxHeap heap(5);
    cout << "Heap created" << endl;
    
    cout << "Inserting 10..." << endl;
    heap.insert(10);
    cout << "Done inserting 10" << endl;
    
    cout << "Printing..." << endl;
    heap.print();
    cout << "Done" << endl;
    return 0;
}
