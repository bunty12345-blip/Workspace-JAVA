#include<bits/stdc++.h>
using namespace std;
bool subseqL6(int index, vector<int> &ds, int s, int sum,int arr[],int n)
{
  if(index == n)
  {
      //condition is satisified
      if(s==sum)
      {
  	   for(auto it:ds)
  	    {
  		    cout<<it<<" ";
  	    }
  	      cout<<endl;
          return true;
      }
  	// condition is not satisified
  	else
  	{
  	return false;
    }
  }
  // take or pick up the particular index into subsequence
  ds.push_back(arr[index]);
  s+=arr[index];
  if (subseqL6(index+1,ds,s,sum,arr,n) == true)
  {
   return true;   
  }
  //not pick or not take condition this element is not added to your subsequence
  s-=arr[index];
  ds.pop_back();
  if(subseqL6(index+1,ds,s,sum,arr,n) == true)
  {
  return true;
  }
  return false;
}
int main()
{
	#ifdef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int arr[] = {1,2,1};
	int n =3;
	int sum = 2;
	vector<int>ds;
	subseqL6(0,ds,0,sum,arr,n);
	return 0;
}