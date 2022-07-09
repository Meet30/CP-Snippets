
/*
    author : MEET30
*/

// local setup library for debugging----------------------
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long

using namespace std;
using namespace __gnu_pbds;


template <typename num_t>
using ordered_set = tree<num_t, null_type, less_equal<num_t>, rb_tree_tag, tree_order_statistics_node_update>;


// -----------------------------------------------------------
// Just declaration for above one can use below one
void debug(auto x);
void debug(pair <auto,auto> x);

void debug(vector <auto> a);
void debug(vector <vector<auto>> a, bool matrix = false);

void debug(set <auto> a);
void debug(unordered_set <auto> a);
void debug(multiset <auto> a);
void debug(ordered_set <auto> a);

void debug (map <auto,auto> m);

void debug(stack <auto> s);
void debug(queue <auto> q);
void debug(priority_queue <auto> q);

// -----------------------------------------------------------

void debug(auto x){
    cout << " " << x << " ";
}
void debug(pair <auto,auto> x){
    cout << " {" << x.first << "," << x.second << "} ";
}


// Vector

void debug(vector <auto> a){
    cout << "[";
    for(auto i: a){
        debug(i);
    }
    cout << " ]" << endl;
}

void debug(vector <vector<auto>> a, bool matrix){
    if(matrix == false){
        for(ll i = 0; i < a.size(); i++){
            cout << i << " -> [";
            for(auto j: a[i]){
                debug(j);
            }
            cout << " ]" << endl;
        }
    }
    else{
        cout << endl;
        for(auto i: a){
            for(auto j: i){
                cout << j << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}


// Set
void debug(set <auto> a){
    cout << "[";
    for(auto i: a){
        debug(i);
    }
    cout << " ]" << endl;
}

void debug(unordered_set <auto> a){
    cout << "[";
    for(auto i: a){
        debug(i);
    }
    cout << " ]" << endl;
}

void debug(multiset <auto> a){
    cout << "[";
    for(auto i: a){
        debug(i);
    }
    cout << " ]" << endl;
}

void debug(ordered_set <auto> a){
    cout << "[";
    for(auto i: a){
        debug(i);
    }
    cout << " ]" << endl;
}

// Map
void debug (map <auto,auto> m){
    for(auto i: m){
        debug(i.first);
        cout << " ->";
        debug(i.second);
        cout << endl;
    }
}

// Stack & Queue & etc... containers ..
void debug(stack <auto> s){
    cout << "[";
    while(s.size()){
        debug(s.top());
        s.pop();
    }
    cout << " ]" << endl;
}

void debug(queue <auto> q){
    cout << "[";
    while(q.size()){
        debug(q.front());
        q.pop();
    }
    cout << " ]" << endl;
}

void debug(priority_queue <auto> q){
    cout << "[";
    while(q.size()){
        debug(q.front());
        q.pop();
    }
    cout << " ]" << endl;
}


