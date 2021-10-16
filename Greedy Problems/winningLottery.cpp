// Winning Lottery

// Harshit knows through his resources that this time the winning lottery number is the smallest number whose sum of the digits is S and the number of digits is D. You have to help Harshit and print the winning lottery number.
// Input Format:
// First line of input contians an integer T, representing the number of test cases.
// Next T lines contains two space-separated integers: S,D
// Constraints:
// 1 <= T <= 1000
// 1 <= D <= 1000
// 1 <= S <= 9*D
// Time Limit: 1 second
// Output Format
// The output contains a single integer denoting the winning lottery number
// Sample Input 1:
// 1
// 9 2
// Sample Output 1:
// 18
// Explanation
// There are many other possible numbers like 45, 54, 90, etc with the sum of digits as 9 and number of digits as 2. The smallest of them is 18.

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while (t--)
    {
        int s, d;
        cin>>s>>d;
        
        string number = "";
        
        while (s - 9 > 0)
        {
            number = '9' + number;
            s -= 9;
            d--;
        }
        
        if (d == 1)
        {
            number = to_string(s) + number;
            cout<<number<<"\n";
            continue;
    	}
        else
            number = to_string(s-1) + number;
        
        d--;
        
        while (d > 1)
        {
            number = '0' + number;
            d--;
    	}
        
        number = '1' + number;
        
        cout<<number<<"\n";
    }
    
    return 0;
}
