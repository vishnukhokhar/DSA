#include<bits/stdc++.h>
using namespace std;

struct myds
{
    deque<int> dq;
    
    void insert_min(int x)
    {
        dq.push_front( x);

    }

    void insert_max(int x)
    {
        dq.push_back(x);
    }

    int get_min()
    {
        return dq.front();
    }

    int get_max()
    {
        return dq.back();
    }

    int extract_min()
    {
        int x=dq.front();
        dq.pop_front();
        return x;
    }

    int extract_max()
    {
        int x=dq.back();
        dq.pop_back();
        return x;
    }


};

int main()
{
    struct myds ds;
		
	ds.insert_min(10);
	ds.insert_max(15);
	ds.insert_min(5);
	
	int x= ds.extract_min();
	cout << x << endl;
	
	x= ds.extract_max();
	cout << x << endl;
	
	ds.insert_min(8);
    
	return 0;
}