      #include <iostream>
      #include<bits/stdc++.h>
      using namespace std;
      #define ll  long long
      #define llu long long unsigned
      #define INF INT_MAX
      #define SINF 1e18
      #define pb push_back
      #define mod 1000000007
      #define PI 3.1415926535897932384626433832795

      // debug coordinates
      string dc(int a , int b){ 
         cout<<" ("<<a<<","<<b<<")-> ";
         string s="";
         return s;
      }
      void Hanji(){
         cout<<"YES"<<endl;
      }
      void Naaji(){
         cout<<"NO"<<endl;
      }
      bool comp(pair<int,int>l , pair<int,int>r){
            if(l.first == r.first)return l.second < r.second ;
            return l.first < r.first ;
         }
      bool inGrid(int i , int j , int n , int m){
         if(i<0 || j<0 || i>=n || j>= m)return false;
         return true;
      }

      int digsum(llu num){
         int sum=0;
         while(num>0){
            sum+=num%10;
            num/=10;
         }
         return sum;
      }
      int main() {
         #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("out.txt","w",stdout);
         #endif
         
         std::ios::sync_with_stdio(false);
         cin.tie(nullptr);
         cout.tie(nullptr);
      // faltu part end here-----------------------------------------------------------------
         int t;cin>>t;
         while(t--){
            int n,k;
            cin>>n>>k;
            map<int,int>mp;
            for(int i=0 ; i<n ; i++){
               int x ;
               cin>>x;
               if(x%k != 0){
                  mp[k-x%k]++;
               }
            }
            llu int moves=0;
            int x=0;
            // for(auto it=mp.begin() ; it!=mp.end() ; it++){
            //    cout<<it->first <<"  "<<it->second<<endl;
            // }
            int dealt =0;
            while(mp.size() != 0){
               vector<int>deal;
               for(auto it=mp.begin() ; it!=mp.end() ; it++){
                  int req = it->first;
                  if(req == x){
                     moves++;
                     x++;
                     x = x%k;
                  }
                  else if(req > x){
                     moves += (req-x +1);
                     x=req+1;
                     x = x%k;
                  }else{
                     moves += (k - x%k + req + 1);
                     x=req+1;
                     x = x%k;
                  }

                  deal.pb(req);
                  
               }
               for(int i=0 ; i< deal.size() ; i++){
                  mp[deal[i]]--;
                  if(mp[deal[i]] == 0)mp.erase(deal[i]);
               }
            }
            cout<<moves<<endl;
            
            
         }
      //end -----------------------------------------------------------------------------------
         return 0;
         
   }