#include<iostream>

void solve(){
    int num;
    std::cin>>num;

    int ans=1;
    
    for(int i =1;i<=num;i++){
        ans*=i;
        ans%=10;

    }
    std::cout<<ans<<std::endl;
}

int main(){
    int cases;
    std::cin>>cases;
    while(cases--){
        solve();
    }

}