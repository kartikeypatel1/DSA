#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    int *arr;
    int size;//total number of elements in the heap
    int totalSize;//total size of array

    public:
    MaxHeap(int n){
        arr=new int[n];
        size=0;
        totalSize=n;
    }

    //insert an element in the heap
    void insert(int value){
        // if heap size is available or not
        if(size==totalSize){
            cout<<"Heap is full"<<endl;
            return;
        }
        arr[size]=value;
        size++;
        int index=size-1;

        //compare it with its parent and swap if it is greater than its parent
        while(index>0&&arr[(index-1)/2]<arr[index]){
            swap(arr[(index-1)/2],arr[index]);
            index=(index-1)/2;
        };

        cout<<"Inserted "<<value<<" in the heap"<<endl; 

    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deleteMax(){
        if(size==0){
            cout<<"HEAP is underflow";
            return;
        }
    cout<<arr[0]<<"DELETED FROM THE HEAP";
    arr[0]=arr[size-1];
    size--;
    if(size==0) return;

    Heapify(0);

    }

    void Heapify(int index){
        int largest=index;
        int left=2*index+1;
        int right=2*index+2;
        //largest will store the index of largest element among index, left and right
        if(left<size&&arr[left]>arr[largest]){
            largest=left;
        }
        if(right<size&&arr[right]>arr[largest]){
            largest=right;
        }
        if(largest!=index){
            swap(arr[index],arr[largest]);
            Heapify(largest);
        }

    }

};
int main(){
    MaxHeap heap(5);
    heap.insert(10);
    heap.insert(20);
    heap.insert(15);
    heap.print();
    heap.insert(30);
    heap.print();
    heap.insert(40);
    heap.print();
return 0;
}
