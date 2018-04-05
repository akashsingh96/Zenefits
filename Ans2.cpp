#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli greater_than_right(string word,lli i,lli n)
{    lli  count=0;
    for(lli j=i+1;j<n;j++)
    {
        if(word[i]>word[j])
        count++;
    }

    return count;
}
int main() {

	lli n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    char a;
	    cin>>a;
	}
	string word;
	cin>>word;
//	cout<<word<<endl;
     long long int fact[n+1];
	//fact[0]=1;


     for(lli i=0;i<=n;i++)
     if(i==0)
     fact[i]=1;
     else
     fact[i]=fact[i-1]*i;

//	cout<<endl;
	lli  rank=1;
	vector<lli>dp(n);
	for(int i=0;i<n;i++)
	dp[i]=greater_than_right(word,i,n);
	for(lli i=1;i<=n;i++)
	{
	    rank+=fact[n-i]*dp[i-1];
	}

	cout<<rank<<endl;
	return 0;
}
