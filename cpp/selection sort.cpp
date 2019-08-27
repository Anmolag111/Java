#include<iostream>
using namespace std;
 int main(){
 	int a[1000];
	int n ;
	cin>>n;
	if(n>=-1000000000&n<=1000000000)
	{for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 	for(int i=0;i<=n-2;i++){
		//Find the smallest element in the remaining part
		int sindex=i;
		for(int j=i+1;j<=n-1;j++){
			if(a[j]<a[sindex]){
				sindex = j;
			}
		}
		swap(a[i],a[sindex]);
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	}
 	return 0;
}
