#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){

    cin.tie(NULL);

    int inp;

    cin >> inp;

    int temp;

    vector<int> vec;

    for(int i=0; i<inp; ++i){
        cin >> temp;
        vec.push_back(temp);
    }

    int newtemp;
    for(int i=0; i<vec.size(); ++i){
        for(int j=i+1; j<vec.size(); ++j){
          if(vec[i]>vec[j]){
            newtemp = vec[i];
            vec[i] = vec[j];
            vec[j] = newtemp;
          }
        }
    }

    int ans=0;

    for(int i=0; i<vec.size(); i+=1){
        for(int j=i+1; j<vec.size(); j++){
            if(vec[i]==vec[j]){
                ans++;
                ++i;
                break;
            } else continue;
        }

    }

    cout << ans;


    return 0;
}

