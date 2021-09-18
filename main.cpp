#include <iostream>
using namespace std;
// CSC 34
// M2LAB2_Adventure Call
// Tracey Pinckney
// 09-18-2021
//In this game user gives a command to determine their outcome.

 void gameIntro();
 void chooseFight();
 void chooseRun();
 void gameOver();
 void sword_Shield();
 void endWar();
 void lineBreaker();
 //create variables

 char userChoice;
 char userDecision;




 int main() {

  gameIntro();

  cout << endl;
  cout << "Would you like to play a fantasy game? (y/n)" << '\n';
  cin >> userChoice;

  cout << endl;

 //create if-else statements
  if (userChoice == 'y')
   {
 //Brief explaination about the game
    cout << "\t-----------Fantasy Land--------------\n";
    cout << endl;
    cout << "Welcome to Fantasy land! Where you decide your fate! There is one problem...\nYou\'re now in the middle of a war between globins and the people of Aguard." << '\n';
    cout << endl;
    cout << "\t-------------------------------------\n";
    
    cout << endl;
  }
  else if(userChoice == 'n'){
    lineBreaker();
    cout << endl;
    cout << "Sad that you did not want to play. Maybe next time";
    exit(EXIT_SUCCESS);
  }
  else{
    cout << "INVALID INPUT! Must type y or n.";
    gameOver();
    
  }

  
  cout << "Do you want to stay and fight for your new home or run? \nEnter in F for fight and R for run:\n";
  cin >> userDecision;
  if (userDecision =='F' )
  {
    chooseFight();
  }
  else if(userDecision == 'R')
  {
    chooseRun();
    exit(EXIT_SUCCESS);
  }
  else
  {
    cout << "Not a valid choice!";
  }
 
 return 0;
}


//create function
void lineBreaker(){
  cout << "\t-------------------------------------\n";
}
void gameIntro()
{
  cout << endl;
  cout << "\nHello Gamer!" << '\n';
  cout << endl;
  cout << "Welcome to Your Adventure! Where you choose what happens next." << '\n';
}
void chooseFight()
{
  lineBreaker();
  cout << "\nYou chose to fight. Yes! Make the People of Asguard proud!" << endl;
  cout << endl;
  cout << "Go east if you change your mind.";
  cout << endl;
  cout << "\nThere is a sword and shield in front of you. Take it!" 
  << endl;
  sword_Shield();
}
void sword_Shield(){
  string swordShield;
  cin >> swordShield;
  if(swordShield == "take" ){
    cout << endl;
    
    cout << "Great! You now have the sword and sheild. Now lets Fight!\n";
    cout << endl;
    lineBreaker();
    cout << "To end this war and bring freedom to the people of Asguard."; cout << "You must kill the chief globin who is west of you but this globin is 10 times the size of the other goblins. "<< endl; 
    cout << endl;
    cout << "To go west type west. If you change your mind type east:\n";
    endWar();
    
  }
  else if (swordShield== "east"){
    chooseRun();
  }
  else{
    cout << "Invalid input! Must say \"take\"";
    sword_Shield();
  }
}
  
void chooseRun() 
{
  cout << endl;
  lineBreaker();
  cout << endl;
  cout << "You chose to run.\n" << endl;
  cout << "Globins have captured you. The city of Asguard has been conquered!";
  gameOver();
}
void gameOver(){
  cout << endl;
  lineBreaker();
  cout << "\nWould you like to play again? y/n:\n";
  char choice;
  cin >> choice;
  if(choice =='y' ){
    main();
  }
  else{
    cout << endl;
    lineBreaker();
   cout << "Gamer, thanks for playing!" << endl; 
  }
}
void endWar(){
  string finishWar;
  cin >> finishWar;
  if (finishWar == "west"){
    cout << endl;
    lineBreaker();
    cout << endl;
    cout << "You chopped the head of the chief globin and army of globins fled the war! \nYou\'ve won the war and the people of Asguard shout cheers of joy!";
    cout << endl;
    gameOver();
  }
  else if(finishWar == "east"){
    chooseRun();
  }
  else{
    cout << "INVALID input!" << endl;
    cout << "Must type east or west." << endl;
    cout << endl;
    cout <<"Type \"east\" for choosing to run. Type \"west\" for choosing to kill the Chief Goblin.\n";
    endWar();
  }
}

 





