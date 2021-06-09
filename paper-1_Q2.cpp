#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v;
	int count;
	cout<<"Enter number of elements in data stream"<<endl;
	cin>>count;
	cout<<"Enter elements of data stream"<<endl;
	for(int i=0;i<count;i++){
	    int temp;
	    cin>>temp;
	    v.push_back(temp);
	    sort(v.begin(),v.end());
	    if(i%2==0){
	        int median=v[i/2];
	        cout<<"Median after reading "<<i+1<<"element: "<<median<<endl;
	    }
	    else{
	        int median=(v[i/2]+v[(i/2)+1])/2;
	        cout<<"Median after reading "<<i+1<<"element: "<<median<<endl;
	    }
	}
	return 0;
}
