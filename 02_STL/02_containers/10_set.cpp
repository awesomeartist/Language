#include <iostream>
#include <vector>
#include <set>

using namespace std;

void print(const set<int> set);

int main()
{
    vector<int> vec {1, 1, 2, 2, 3, 4, 4, 5, 5, 5};
    set<int> st {1, 3, 4, 3};
    set<int> st2(vec.begin(), vec.end());

    print(st);
    print(st2);



    // 1) iterator emplace_hint( const_iterator hint, Args&&... args )
#if false

    auto it = st.end();
    st.emplace_hint(it, 7);
    cout << endl;
    print(st);

#endif


    // 2) node_type extract( const_iterator position );
#if false

    auto node = st.extract(3);
    node.value() = 7;
    st.insert(move(node));
    print(st);

#endif


    // 3) void merge( std::set<Key, C2, Allocator>& source );
#if true

    st.merge(st2);
    print(st);
    print(st2);

#endif


    return 0;
}

void print(const set<int> st)
{   
    cout << endl;
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << '\t';
    }
}