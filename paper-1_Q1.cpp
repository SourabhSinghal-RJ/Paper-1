#include <bits/stdc++.h>
using namespace std;

int main() {
	int count=0;
	cout<<"Enter number of elements ( Must be an integer and greater then one )"<<endl;
	cin>>count;
	if(count<2){
	    cout<<"Invalid input";
	    return 0;
	}
	priority_queue<int,vector<int>,greater<int>> q;
	cout<<"Enter the elements that are to be operated"<<endl;
	for(int i=0;i<count;i++){
	    int temp;
	    cin>>temp;
	    q.push(temp);
	}
	int smallest = q.top();
	q.pop();
	int secondSmallest = q.top();
	cout<<"Smallest and second smallest elements of the entered elements are :\n"<<"Smallest: "<<smallest<<endl<<"Second smallest: "<<secondSmallest;
	return 0;
}
