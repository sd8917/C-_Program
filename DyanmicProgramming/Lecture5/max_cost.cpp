#include<iostream>
#include<cstring>
using namespace std;

int cnt = 0;
int memo[100][100];
int maxProfit(int arr[],int be,int en,int year){
    ++cnt;
    if(be>en){
        return 0; // no profit here
    }

    if(memo[be][en] != -1) return memo[be][en];

    //sell from beginning
    int q1 = arr[be] * year + maxProfit(arr,be+1, en, year + 1); //sell from beginning
    int q2 = arr[en] * year + maxProfit(arr,be, en-1, year + 1); //Sell from the end
    int ans = max(q1, q2);
    memo[be][en] = ans;
    return ans;

}

int main() {
    int arr[1000];
    int n; //no of bottle kept on the tab;e
    cin>>n;

    for(int i=0; i < n; ++i) {
        cin >> arr[i]; // PRICE OF BOOTLE
    }
    memset(memo, -1, sizeof(memo));
    int ans = maxProfit(arr, 0, n - 1, 1);
    cout << ans <<endl;
    cout<<cnt <<endl;

    return 0;
}
