/* 
 * File:   main.cpp
 * Author: Angel Gil 
 * Function: Able to Play a simple version of the card game WAR.
 * Created on June 1, 2019, 1:00 PM
 */

//System Libraries
#include <cstdlib>   //Random Seed 
#include <iomanip>   //Location Manipulation
#include <iostream>  //Input and Output Library
#include <ctime>     //Time Library

//User Libraries 

//Constant Variables 

//Function Prototypes
void war (int, int); //Location where the battlefield is 
int score (int, int); //Location where the score is being stored



using namespace std;
int main(int argc, char** argv) {
    //Random Seed Generator
    
    //Declared Variables
    char tut;
    
    //Variables with Value 
    int scr1 = 0, 
        scr2 = 0;
    /*Variables in depth
    
     */
    
    //User Interface "Opening Scene"
    cout<<"Hello, and welcome the the card game War."<<endl;
    cout<<"If you don't know how to play, please enter 'a', if you already"<<endl;
    cout<<"know how to play, enter 'x'. Have Fun and enjoy the game."<<endl;
    cin>>tut;
    
    //User Process
        //Tutorial 
        if (tut == 'a'){
            cout<<"The game consists of two or more players. A deck of cards"<<endl;
            cout<<"is then divided evenly among the players. The one who has"<<endl;
            cout<<"an ace card starts the game. Players then must compare card"<<endl;
            cout<<"values. The one with the highest card number wins the round."<<endl;
            cout<<"This will continue until all cards are played. If both players"<<endl;
            cout<<"have equal card values, then a War plays out. Both players will"<<endl;
            cout<<"then play the rest of their cards until someone becomes victorious."<<endl;
            cout<<"The points at stake will double as well, making it quite spicy."<<endl;
        } 
        else if (tut == 'x'){
            cout<<"Get ready, and hope you win your first game"<<endl;
        }
        else cout<<"why didn't you enter a valid input?"<<endl;
        
   
        
    //User Interface for the rest of the game 
        //Spacing
        cout<<endl;
        cout<<endl;
        cout<<endl;
    cout<<"P1"<<"     "<<"P2"<<endl;
    cout<<scr1<<"      "<<scr2<<endl;
    
    //Displayed Output
    
    return 0;
}

void war (int, int) {
    
}

int score (int, int){
    
}
