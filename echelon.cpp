#include<iostream>
using namespace std;
int main()
{
	int size,mul=0,sub=0;
	
	cout<<"\n enter the order of the matrix: ";
	cin>>size;
	
	float mat[size][size];
	for(int i=0;i<size;i++)
	for(int j=0;j<size;j++)
	{
		{
			cout<<"\n enter the element: "<<i<<" "<<j;
			cin>>mat[i][j];
		}
	}
	cout<<"\n the matrix is";
	
	for(int i=0;i<size;i++)
	{
		cout<<"\n";
		for(int j=0;j<size;j++)
		{
			cout<<mat[i][j];
		}
	}
	
	if(mat[0][0] != 0)
	{
		mul=mat[0][0];
		for(int i=0;i<size;i++)
		{
			mat[0][i]=mat[0][i]/mul;
		}
	}
	
	return 0;
}
