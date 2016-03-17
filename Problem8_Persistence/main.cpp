/* 
 * Author: Kayla Rodriguez      
 * Title: Persistence   
 * Directions: 
  Given a positive integer expressed in base ten, consider the 
  series of numbers that will be produced where each successive term is the 
  product of the decimal digits of the previous term. Eventually a term will
  have a single digit.
 * For example:
 * 679 6x7x9 => 378
 * 378 3x7x8 => 168
 * 168 1x6x8 =>  48
 * 48  4x8   =>  32
 * 32  3x2   =>   6
 * 
 * The number of steps this takes is called the persistence; thus the
 * persistence of 679 is 5, the number of steps it takes to get a single digit
 * number. Your team is to write a program that determines the persistence
 * of positive integer.
 * 
 * Input to your program will be a series of lines terminated by end-of-file. 
 * Each line will consist of a positive number of up to nine decimal digits,
 * starting in the first column with no leading zeros.
 * 
 * For each input number, print a line containing the number exactly as input,
 * followed by a single space and its persistence with no leading zeroes. No
 * leading or trailing whitespace is to be printed on an output line
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    //Declare Variables
    string c;
    int sum=1,ttl=0;
    //Input
//    cin>>c;
    while(!cin.eof()){
        cin>>c;
        sum=1;
        ttl=0;
        //Calculation
        if (c.length()==1){        
            cout<<0<<endl;
        }
        else{
            do{
                sum=1;
                for (int i=0;i<c.length();i++){
                    sum*=((int)c[i]-48);
                }
                stringstream ss;
                ss<<sum;
                c = ss.str();
                ttl++;
            }while(sum>9);
            cout<<ttl<<endl;
        }
    }
    return 0;
}

