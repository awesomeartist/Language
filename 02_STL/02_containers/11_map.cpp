#include <iostream>
#include <map>
#include <string>

using namespace std;

void print(const map<string, int> mp);

int main()
{
    // 1) map 基本元素 pair
#if false

    pair<string, int> pr;
    pr.first = "Tom";
    pr.second = 22;
    cout << pr.first << " : " << pr.second << endl;

#endif


    // 2) map
    map<string, int> mp = {{"Tom", 30}, {"Jerry", 18}};
    print(mp);


    // 3) at
#if false

    cout << mp.at("Tom") << endl;
    cout << mp["Jerry"] << endl;
    // cout << mp.at("Spike") << endl; // error
    cout << mp["Spike"] << endl;
    print(mp);
    mp.at("Spike") = 22;
    print(mp);

#endif


    // 3) insert
#if true

    mp.insert(pair<string, int> ("Spike", 22)); 
    // mp.insert(pair<string, int> ("Spike", 22)); // 无效
    print(mp);
    
    // key 存在则修改，否则插入
    mp.insert_or_assign("Spike", 19);
    print(mp);

#endif


    return 0;
}

void print(const map<string, int> mp)
{
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " : " << it->second << endl; 
    }
}