#include<iostream>
using namespace std;

const int N=5000;
int a[N]={0};
int main(){
	a[0]=1;
	int n;
	cin>>n;
	int c=0;
	int s;
		for(int i=2;i<=n;i++){//第几次阶乘 
			for(int j=0;j<N;j++){//多少位需要乘 
			s=a[j]*i+c;
			a[j]=s%10;
			c=s/10;
			}
		}
	int num;
	for(int i=N-1;i>=0;i--){
		if(a[i]) {
			num=i;
			break;
		}
	}
	for(;num>=0;num--){
		cout<<a[num];
	}
	return 0;
}
