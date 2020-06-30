#include<bits/stdc++.h>
using namespace std;
int pnpoly(int nvert, float *vertx, float *verty, float testx, float testy)
{
  int i, j, c = 0;
  for (i = 0, j = nvert-1; i < nvert; j = i++) {
    if ( ((verty[i]>testy) != (verty[j]>testy)) &&
     (testx < (vertx[j]-vertx[i]) * (testy-verty[i]) / (verty[j]-verty[i]) + vertx[i]) )
       c = !c;
  }
  return c;
}
int main(){
	int t;
	cout<<"Enter no. of testcases:"<<endl;
	cin>>t;
	while(t--){
		int n;
		cout<<"Enter no. of vertices"<<endl;
		cin>>n;
		float x[n],y[n];
		float px,py;
		cout<<"Enter vertices(line by line) using space separation:"<<endl;
		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i];
		}
		cout<<"Enter test point:"<<endl;
		cin>>px>>py;
		int c=pnpoly(n,x,y,px,py);
		if(c==0)
		cout<<"False";
		else
		cout<<"True";
	}
}

