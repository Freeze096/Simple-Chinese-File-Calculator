#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int p(int a,int b){
	return a+b;
}int m(int a,int b){
	return a-b;
}int t(int a,int b){
	return a*b;
}float d(int a,int b){
	return a/b;
}
int main(){
	freopen("in.lt","r",stdin);
	freopen("out.lt","w",stdout);
	int a,b;
	cin>>a>>b;
	cout<<a<<"+"<<b<<"="<<p(a,b)<<endl;
	cout<<a<<"-"<<b<<"="<<m(a,b)<<endl;
	cout<<a<<"*"<<b<<"="<<t(a,b)<<endl;
	cout<<a<<"/"<<b<<"=(���)"<<d(a,b)<<endl;
	MessageBox(0,"��ʾ","����ִ����ϣ��뵽out.lt�в鿴�����",MB_OK);
}
