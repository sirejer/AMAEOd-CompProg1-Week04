// THE BEST CALCULATOR IN THE WORLD: Better than my calculator 
//AUTHOR:Jeremiah Casibang
//Description: a one way calculator that uses addition with a simple feature or dialog that tells the user if the final product is less or greater than 4
//for ACLC Computer programing subject.
//date 18/09/2021


#include <iostream>
using namespace std;


 int bestcalc() {
     // some call functions to set first, we will need these.
    int x, y;
    int sum;
    // This is where im going to put my input and output code, hence to display text and to input some of your keystrokes.
    cout << "type a number if the total value is less than 4 then the program will tell it";
    cin >> x;
    cout <<"Plus the value your going to put in FOR A MASSIVE DAMAGE!!";
    cin >> y;
    // the final product.
   sum = x+y;
   cout << sum;
   //the code for the dialog if the value is less or greater than 4.
 if (sum < 4){ cout << "the value is less than 4";
 }else{
     cout << "the total value is greater than 4";
 }
 return 0;
 }
