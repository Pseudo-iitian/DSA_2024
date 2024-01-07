#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<string> findItinerary(vector<vector<string>>& tickets) {
    multimap<string,string> mp;
    for(int i=0;i<tickets.size();++i){
        string first = tickets[i][0];
        string second = tickets[i][1];
        mp.insert(pair<string,string>(first,second));
    }
    vector<string> ans;
    string f = "JFK";
    auto it = mp.begin();
    for(int i=0;i<tickets.size();++i){
        string mn = "Z";
        // auto it = mp.find(f);
        if(mp.size()==1){
            auto itr = mp.begin();
            it = itr;
        }
        else{
            for(auto itr = mp.begin();itr!=mp.end();++itr){
                if(itr->first == f){
                    if(itr->second<mn && (mp.find(itr->second)!=mp.end())){
                        mn = itr->second;
                        it=itr;
                    }
                }
            }
        }
        if(it!=mp.end()){
            ans.push_back(it->first);
            // cout<<it->first<<" "<<it->second<<mp.size()<<endl;
            f = it->second;
            mp.erase(it);   
        }
    }
    ans.push_back(f);   
    return ans;
}


int main(){
    vector<vector<string> > str = {{"JFK","SFO"},{"JFK","ATL"},{"SFO","ATL"},{"ATL","JFK"},{"ATL","SFO"}};
    vector<string> res = findItinerary(str);
    // for(auto &val: res){
    //     cout<<val<<" ";
    // }

    return 0;
}