#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p1 = {1, 3};
    // cout << p1.first << " " << p1.second;

    pair<int, pair<int, int>> p2 = {4, {8, 7}};
    // cout << p2.first << endl << p2.second.first << endl << p2.second.second;

    pair<int, int> arr[] = {{1, 4}, {7, 6}, {9, 2}};
    // cout << arr[1].first;
}

void explainVector()
{
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);
    // cout << v1[1];

    vector<pair<int, int>> v2;
    // v2.push_back({10,11});
    v2.emplace_back(45, 50);
    // cout << v2[0].second;

    vector<int> v3(5, 100);
    v3.push_back(50);
    // for (int i = 0; i < 6; i++)
    // {
    // cout << v3[i] << " ";
    // }

    vector<int> v4(v3);
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << v4[i] << " ";
    // }

    vector<int> v5 = {10, 20, 30, 40, 50, 60};
    vector<int>::iterator it = v5.begin();
    it++;
    // cout << *(it);

    //? vector<int>::iterator it = v5.end();
    //? vector<int>::iterator it = v5.begin();
    // vector<int>::iterator it = v5.rend();
    // vector<int>::iterator it = v5.rbegin();

    //? print vector using loop
    for (vector<int>::iterator it = v5.begin(); it != v5.end(); it++)
    {
        // cout << *(it) << " ";
    }
    for (auto it = v5.begin(); it != v5.end(); it++)
    {
        // cout << *(it) << " ";
    }
    for (auto it : v5)
    {
        // cout << it << " ";
    }

    //? delete vector element
    // v5.erase(v5.begin() + 1);
    // v5.erase(v5.begin() + 1,v5.begin()+4);
    for (auto it : v5)
    {
        // cout << it << " ";
    }

    //? insert
    vector<int> v6(4, 100);
    // v6.insert(v6.begin(), 300);
    // v6.insert(v6.begin() + 1, 3, 300);
    vector<int> v7(2, 10);
    // v6.insert(v6.begin() + 1, v7.begin(), v7.end()); //? merge two vector
    for (auto it : v6)
    {
        // cout << it << " ";
    }

    // cout << v6.size(); //? size of a vector

    vector<int> v8 = {1, 2, 3, 4, 5};
    v8.pop_back();
    for (auto it : v8)
    {
        // cout << it << " ";
    }

    vector<int> v9 = {10, 20};
    vector<int> v10 = {40, 50};
    for (auto it : v9)
    {
        // cout << it << " ";
    }
    cout << endl;
    for (auto it : v10)
    {
        // cout << it << " ";
    }
    v9.swap(v10); //? swap fuction
    cout << endl;
    for (auto it : v9)
    {
        // cout << it << " ";
    }
    cout << endl;
    for (auto it : v10)
    {
        // cout << it << " ";
    }

    vector<int> v11 = {40, 50, 60, 47};
    v11.clear();         //? delete all value form v11
    cout << v11.empty(); // check empty or not
}

void expainList()
{
    list<int> l;
    l.push_back(10);
    l.emplace_back(20);
    l.push_front(5);
    l.emplace_front(11);
    for (auto it : l)
    {
        // cout << it << " ";
    }

    //? rest functions are same as vector
    //? begin,end,rbegin,rend,clear,insert,size,swap
}

void expainDeque()
{
    deque<int> d;
    d.push_back(10);
    d.emplace_back(20);
    d.push_front(5);
    d.emplace_front(11);

    // d.pop_back();
    // d.pop_front();

    // d.back();  //? last element
    // d.front(); //? first element

    for (auto it : d)
    {
        // cout << it << " ";
    }

    //? rest functions are same as vector
    //? begin,end,rbegin,rend,clear,insert,size,swap
}

void explainStack()
{
    //? LIFO data structure
    stack<int> s;
    s.push(1);
    s.push(2);
    s.emplace(5);
    cout << s.top() << " ";
    s.pop();
    cout << s.top() << " ";
    cout << s.size() << " ";
    cout << s.empty() << " ";

    // s.swap()
}

void explainQueue()
{
    //? FIFO data structure
    queue<int> q;
    q.push(14);
    q.push(23);
    q.emplace(45);
    q.back() += 5;
    cout << q.front() << " ";
    cout << q.back() << " ";
    //? pop, swap, empty, size,  -- same as stack
}

void explainPiority()
{
    //? max heap
    priority_queue<int> pq1;
    pq1.push(14);
    pq1.push(23);
    pq1.emplace(2);
    pq1.emplace(25);
    pq1.emplace(72);
    pq1.emplace(45);
    // cout << pq.top() << " ";
    // pq.pop();
    // cout << pq.top() << " ";

    while (!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    //* output: {72 45 25 23 14 2}

    //? pop, swap, empty, size,  -- same as others
    cout << endl;

    //? min heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(14);
    pq2.push(23);
    pq2.emplace(2);
    pq2.emplace(25);
    pq2.emplace(72);
    pq2.emplace(45);

    while (!pq2.empty())
    {
        cout << pq2.top() << " ";
        pq2.pop();
    }
    //? output: {2 14 23 25 45 72}
}

void explainSet()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.emplace(4);
    s.emplace(5);
    s.emplace(6);

    s.erase(3);

    auto it = s.find(6);
    // cout << *it
    auto it1 = s.find(4);
    auto it2 = s.find(6);
    s.erase(it1, it2);
    for (auto it : s)
    {
        // cout << it << " ";
    };

    int cnt = s.count(3);
    // cout << cnt;

    auto it3 = s.lower_bound(2);
    auto it4 = s.upper_bound(3);
}

void multiSet()
{
    multiset<int> ms;
    for (int i = 1; i <= 10; i++)
    {
        ms.insert(i);
    }
    ms.insert(5);
    ms.erase(5);
    cout << "Elements present in the multiset: ";
    for (auto it : ms)
    {
        cout << it << " ";
    }

    //? rest all function are same as set
}

void unorderedSet()
{
    unordered_set<int> us;
    us.insert(6);
    us.insert(2);
    us.insert(3);
    us.insert(2);
    us.emplace(4);
    us.emplace(10);
    us.emplace(1);
    for (auto it : us)
    {
        cout << it << " ";
    };
}

int main()
{
    unorderedSet();
    return 0;
}
