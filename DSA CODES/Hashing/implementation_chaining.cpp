#include<iostream>
using namespace std;
struct myhash
{
    int bucket;
    list<int>*table
    myhash(int b)
    {
        bucket =b;
        table =new list<int>[b]
        
    }

    void insert(int key)
    {
        int i= key% button;
        table[i].push_back(key);
    }

    bool search(int key)
    {
        int i =key % button;
        for(auto x: table[i])
          if (x==key)
          return true;
          return false;

        
    }

    void remove(int key)
    {
        int i= key% button;
        table[i].remove(key);
    }
};
