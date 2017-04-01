#include <bits/stdc++.h>
#include <vector>

#define pb push_back

using namespace std;

int main()
{
    vector<int> vec;
    int siz, rot, inp;

    cin >> siz >> rot;

    for(size_t i = 0; i < siz; ++i){
        cin >> inp;
        vec.pb(inp);
    }

    while(rot != 0){
        vec.insert(vec.begin()+vec.size(), vec[0]);
        vec.erase(vec.begin()+0);

     --rot;
    }

    for(size_t i=0; i<vec.size(); ++i){
        cout << vec[i] << ' ';
    }
}
