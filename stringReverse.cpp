#include<iostream>
#include <string>

using namespace std;

int main()
{
	string str = "baala";
	string revStr;
	int strLen = str.length();
	int i = strLen;
	
	while (i>=0)
	{	
		revStr = revStr + str[i];
		--i;
	}	
	cout << revStr;
}
