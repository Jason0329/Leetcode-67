// Leetcode67.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class Solution
{

public:

	Solution() {}
	string addBinary(string a, string b);

};

string Solution::addBinary(string a, string b)
{
	int carry = 0;

	int ii = a.size()-1 ;
	int jj = b.size()-1 ;

	string result = "";

	for (; ii >= 0 || jj >= 0;)
	{
		if (ii>=0&&a[ii--] == 49) {
			carry++;
		}
		if (jj>=0&&b[jj--] == 49) {
			carry++;  }

		if (carry == 3)
		{
			result = '1' + result;
			carry = 1;
		}
		else if (carry == 2)
		{
			result = '0' + result;
			carry = 1;
		}
		else if(carry == 1)
		{
			result = '1' + result;
			carry = 0;
		}
		else if (carry == 0)
		{
			result = '0' + result;
		}


	}

	if (carry == 1)
	{
		result = '1' + result;
	}

	return result;
}


int tt()
{
	return -1;
}


int main()
{
	Solution aaa;
	string sds = aaa.addBinary("1111", "1111");
	
	cout << sds << endl;

    return 0;
}





