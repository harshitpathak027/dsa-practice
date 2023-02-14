#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){

    //creation
    unordered_map<string,int>m;
    //insertion method 1
    pair<string,int> p = make_pair("harshit",0);
    //method 2
    pair<string,int> pair2("pathak",2);
    //method 3
    m["harshit"] = 1;

    //search
    cout<<m["harshit"]<<endl;
    cout<<m["pathak"]<<endl;
    m.erase("pathak");
    cout<<m.size();

}

