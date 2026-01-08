// Container - Multi-Set
/**
    Note:
*/


//Multi-Set
void explainSet(){
    // Everything is same as set
    // only stores duplicates elements also

    multiset<int>mt;
    st.insert(1); // {1}
    st.insert(1); // {1, 1}
    st.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);

    // rest all functimos same as set
}


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    return 0;
}






