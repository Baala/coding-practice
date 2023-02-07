#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
	string str = "daaad";
	
	string revStr = str;
	reverse(str.begin(), str.end());
	if (str == revStr)
	{
		cout<<"Is Palindrome"<<endl;		
	}
	else
	{
		cout<<"Not Palindrome"<<endl;
	}
	

	int n = strlen(str.c_str());
	bool isPalin = true;
	for (int i=0; i<n/2; ++i)
	{
		if(str[i] != str[n-1-i])
		{
			isPalin = false;
			break;
		}		
	}
	
	if (isPalin)
	{
		cout<<"Is Palindrome"<<endl;		
	}
	else
	{
		cout<<"Not Palindrome"<<endl;
	}
	
}