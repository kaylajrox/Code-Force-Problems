/*Author: Kayla Rodriguez
 * Title: A. Elephant
 * Purpose: Determine the least number of steps an elephant can take to reach 
 * his friend
 * Problem:
  An elephant decided to visit his friend.
  It turned out that the elephant's house is located at point 0 and 
  his friend's house is located at point x(x > 0) of the coordinate line. 
  In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. 
  Determine, what is the minimum number of steps he need to make in order to 
  get to his friend's house.
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc,char**argv){
    //Declare Variables
    int x; //coordinate of the friends house
    //Input
    cin>>x;
    //Calculation
    int minStep=x/5;
    
    if (x%5!=0){
        minStep++;
    }
    cout<<minStep;
    
    //Output
    return 0; 
}