    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;
    #define mod 1000000007
    constexpr array<int, 4> DY = {1, 0, -1, 0};
    constexpr array<int, 4> DX = {0, 1, 0, -1};


    int main(){
        string s;
        int Q;
        cin >> s >> Q;
        deque<char> d;
        for(char c : s){
            d.push_back(c);
        }
        int reverse_counter = 0;
        for(int i=0; i<Q; i++){
            int q;
            cin >> q;
            if(q == 1){
                reverse_counter++;
            }else{
                int f;
                char c;
                cin >> f >> c;
                if(reverse_counter % 2 == 0){
                    if(f == 1){
                        d.push_front(c);
                    }else{
                        d.push_back(c);
                    }
                }else{
                    if(f == 1){
                        d.push_back(c);
                    }else{
                        d.push_front(c);
                    }
                }
            }
        }
    string ans = "";
    if(reverse_counter % 2 ==1){
        reverse(d.begin(),d.end());
    }
    for(char c: d){
        ans+=c; 
    }
    cout << ans << endl;
    }