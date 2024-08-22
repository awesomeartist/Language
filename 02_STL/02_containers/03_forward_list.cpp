#include <iostream>
#include <vector>
#include <forward_list>

using namespace std;

void print(forward_list<int> fs);
bool pre(const int &n);

int main()
{
    vector<int> vec = {1, 3, 4, 5};
    forward_list<int> fs = {2, 4, 1, 8, 3};
    forward_list<int> fs2 = {5, 9, 7, 2, 8};

    // 1) vector 可对迭代器进行加减运算
#if false

    vector<int>::iterator it = vec.begin();
    cout << "vector vec : " << endl;
    for (auto &i : vec) 
    {
        cout << i << '\t';
    }
    cout << endl;
    cout << "*it = " << *it << endl;
    cout << "*(it+3) = " << *(it+3) << endl;
    cout << "*vec.end() = " << *vec.end() << endl;
    cout << "vec.end()-vec.begin() = " << vec.end()-vec.begin() << endl;

    // output:
    // vector vec : 
    // 1       3       4       5
    // *it = 1
    // *(it+3) = 5
    // *vec.end() = 3226958
    // vec.end()-vec.begin() = 4

#endif


    // 2) forward_list 迭代器只能进行单步自增
#if true

    forward_list<int>::iterator it = fs.begin();
    
    cout << "forward list fs :" << endl;
    print(fs);
    cout << endl;
    cout << "*it = " << *it << endl;
    cout << "*(++it) = " << *(++it) << endl;

    // output:
    // forward list fs :
    // 2       4       1       8       3
    // *it = 2
    // *(++it) = 4

#endif


    // 3) iterator erase_after( const_iterator pos );
#if false

    cout << "fs2 before erase_after :" << endl;
    print(fs2);

    fs2.erase_after(fs2.begin());

    cout << "fs2 after erase_after :" << endl;
    print(fs2);

    // output:
    // fs2 before erase_after :
    // 5       9       7       2       8
    // fs2 after erase_after :
    // 5       7       2       8

#endif


    // 4) void merge( forward_list& other );
    // 合并两个已排序的列表，合并后 other 为空
#if false

    // fs.sort();
    // fs2.sort();
    cout << "fs :" << endl;
    print(fs);
    cout << "fs2 :" << endl;
    print(fs2);

    fs.merge(fs2);
    cout << "fs after merge :" << endl;
    print(fs);
    cout << "fs2 after merge :" << endl;
    print(fs2);

    // output:
    // fs :
    // 1       2       3       4       8
    // fs2 :
    // 2       5       7       8       9
    // fs after merge :
    // 1       2       2       3       4       5       7       8       8       9
    // fs2 after merge :

    // or
    // fs :
    // 2       4       1       8       3
    // fs2 :
    // 5       9       7       2       8
    // fs after merge :
    // 2       4       1       5       8       3       9       7       2       8
    // fs2 after merge :



#endif


    // 5) void splice_after( const_iterator pos, forward_list& other );
    // 指定位置插入另一个列表
#if false

    cout << "fs :" << endl;
    print(fs);
    cout << "fs2 :" << endl;
    print(fs2);
    fs.splice_after(fs.begin(), fs2);
    cout << "fs after splice_after :" << endl;
    print(fs);

    // output:
    // fs :
    // 2       4       1       8       3
    // fs2 :
    // 5       9       7       2       8
    // fs after splice_after :
    // 2       5       9       7       2       8       4       1       8       3

#endif

    // 6) void remove_if( UnaryPredicate p );
#if false

    cout << "fs :" << endl;
    print(fs);

    // fs.remove_if(pre);
    fs.remove_if([] (const int &n) {return n > 4;});
    cout << "fs after remove_if :" << endl;
    print(fs);

    // output:
    // fs :
    // 2       4       1       8       3
    // fs after remove_if :
    // 2       4       1       3

#endif 

    // 7) sort() & reverse()
#if false

    cout << "fs :" << endl;
    print(fs);

    // fs.sort();
    // fs.reverse();

    // fs.sort([] (const int &a, const int &b) { return a > b;});

    greater<int> gt;
    fs.sort(gt);


    cout << "fs order from Z to A:" << endl;
    print(fs);

    output:
    // fs :
    // 2       4       1       8       3
    // fs order from Z to A:
    // 8       4       3       2       1

#endif

    // 8) unique()
    // 移除重复且连续的元素
#if false

    forward_list<int> fl = {1, 2, 2, 4, 5, 5};

    cout << "fl:" << endl;
    print(fl);
    fl.unique();
    cout << "fl after unique :" << endl;
    print(fl);

    // output:
    // fl:
    // 1       2       2       4       5       5
    // fl after unique :
    // 1       2       4       5

#endif

    return 0;
}



void print(forward_list<int> fs)
{
    forward_list<int>::iterator it = fs.begin();
    while (it != fs.end())
    {
        cout << *it << '\t';
        it ++;
    }
    cout << endl;
}

bool pre(const int &n)
{
    return n > 4;
}