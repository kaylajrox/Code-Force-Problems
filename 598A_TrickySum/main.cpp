/* 
 * Author:Kayla Rodriguez
 * Title: A. Tricky Sum
 * Directions:
  Calculate the sum of all integers from 1 to n, but you should take all 
  powers of two with minus in the sum.
  For example, for n = 4 the sum is equal to  - 1 - 2 + 3 - 4 =  - 4, because 1, 2 and 4 
  are 20, 21 and 22 respectively.

-->Calculate the answer for t values of n.

Input:
The first line of the input contains a single integer t (1 ≤ t ≤ 100)
  the number of values of n to be processed.
Each of next t lines contains a single integer n (1 ≤ n ≤ 109).

Output:
Print the requested sum for each of t integers n given in the input.
 */
//System Libraries
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int t;
    long long n;
    //Input - the number of values  of n to be processed
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n;
        int p=log2(n);
        n=(1+n)*n/2;
        long long x=1;
        for (int j=0;j<=p;j++){
            x*=2;
            n-=x;
        }
        cout<<n<<endl;       
    }
    return 0;
}

