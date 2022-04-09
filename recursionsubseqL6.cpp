#include<bits/stdc++.h>
using namespace std;
void subseqL6(int index, vector<int> &ds, int arr[],int n)
{
  if(index == n)
  {
  	for(auto it:ds)
  	{
  		cout<<it<<" ";
  	}
  	if(ds.size()==0)
  	{
  		cout<<"{ }";
  	}
  	cout<<endl;
  	return;
  }
  //not pick or not take condition this element is not added to your subsequence
  subseqL6(index+1,ds,arr,n);
  // take or pick up the particular index into subsequence
  ds.push_back(arr[index]);
  subseqL6(index+1,ds,arr,n);
  ds.pop_back();
}
int main()
{
	#ifdef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int arr[] = {3,1,2};
	int n =3;
	vector<int>ds;
	subseqL6(0,ds,arr,n);
	return 0;

}