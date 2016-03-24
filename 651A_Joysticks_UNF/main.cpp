/*Author: Kayla Rodriguez
 * Title: A. Joysticks
 * Problem:
  Friends are going to play console. They have two joysticks and only one 
  charger for them. Initially first joystick is charged at a1 percent and 
  second one is charged at a2 percent. You can connect charger to a joystick 
  only at the beginning of each minute. In one minute joystick either 
  discharges by 2 percent (if not connected to a charger) or charges by 
  1 percent (if connected to a charger).

  Game continues while both joysticks have a positive charge. 
  Hence, if at the beginning of minute some joystick is charged by 1 percent, 
  it has to be connected to a charger, otherwise the game stops.
  If some joystick completely discharges (its charge turns to 0), 
  the game also stops.
  
  Determine the maximum number of minutes that game can last. 
  It is prohibited to pause the game, i. e. at each moment both joysticks
  should be enabled. It is allowed for joystick to be charged by more than 
  100 percent. 
  
  Input
  The first line of the input contains two positive integers a1 and a2 
  (1 ≤ a1, a2 ≤ 100), the initial charge level of first and second joystick 
  respectively.

  Output
  Output the only integer, the maximum number of minutes that the game can last.
  Game continues until some joystick is discharged.
 */

//System Libraries
#include <iostream>
using namespace std;

//Execution Begins Here
int main(int argc, char** argv){
    //Declare Variables
    int a1,a2,minMax;
    //Input
    cin>>a1;
    cin>>a2;
    while (1<=a1,a2<=100){
       
        if (a1==1||a2==1){  
            a1=a1+(1/100)*a1;
        }
        
            a2=a2+(1/100)*a2;
        
        a1=a1-(2/100)*a1;
        a2=a2-(2/100)*a2;
        //Increase by one percent
        
    }
    //Output
    cout<<minMax;
    return 0;
}
