#include<bits/stdc++.h>
using namespace std;

class minheap
{
    int *arr;
    int size;
    int cap;
    public:
    

    minheap(int c)
    {
        size=0;
        cap=c;
        arr=new int[c];
    }

     int left(int i) { return (2*i + 1); } 
    int right(int i) { return (2*i + 2); } 
    int parent(int i) { return (i-1)/2; } 


    void minheapify(int i)
    {
        int lt=left(i);
        int rt=right(i);
        int smallest=i;

        if(lt<size && arr[lt]<arr[i])
        {
            smallest=lt;
        }
        if(rt<size && arr[rt]<arr[smallest])
        {
            smallest=rt;
        }

        if(smallest!=i)
        {
            swap(arr[i],arr[smallest]);
            minheapify(smallest);

        }
    }
    void buildheap()
    {
        for(int i=(size-2)/2;i>=0;i--)
        {
            minheapify(i);
        }
    }
};

int main() 
{ 
    minheap h(11);

    return 0;
} 