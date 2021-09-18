// THE BEST CALCULATOR IN THE WORLD
//AUTHOR:Jeremiah Casibang
//Description: a one way calculator that calculates addition with A HUMAN stuffed inside in it that will tell the user if the inputted value is less or greater than 4 (LEGIT)
//(i swear... it can think or maybe im just paranoid..)
//for ACLC Computer programing subject.
//date 18/09/2021


#include <iostream>
using namespace std;


 int main() {
     // some functions to set first, we will need these.
    int x, y;
    int sum;
    // This is where im going to put my input and output, hence to display text and to input some of your keystrokes.
    cout << "type a number if the total value is less than 4 then the program will tell it";
    cin >> x;
    cout <<"Plus the value your going to put in";
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
