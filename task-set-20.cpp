#include<iostream>
#include<set>

using namespace std;

int main(){

    int x, y;

    cin >> x >> y;

    int s[x*y];
    set<int> one;

    
	  	for(int j = 0; j < x*y ; j++)
	  	{
	  		
	  		cin>>s[j];
		}
	   

    for(int i = 0; i < x;i++)
	  {
	  	for(int j = 0; j < y*x ; j++)
	  	{
	  		
	  		one.insert(s[j]);
		}
	  } 
    cout << one.size();
}