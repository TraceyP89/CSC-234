#include <iostream>
using namespace std;
// CSC 234
// M2HW1_Adventure Call
// Tracey Pinckney
// 09-25-2021
//In this game user gives a command to determine their outcome. The user will input their decisions to either win or lose the game

 void gameIntro();
 void gameOver();
 void chooseFight();
 void sword_Shield();
 void goNorth();
 void goWest();
 void answerRiddle();
 void fightChief();
 void strikeChief();
 void safeHouse();
 void chooseRun();
 void endWar();
 void lineBreaker();
 
 //create variables
 char userChoice;
 char userDecision;
 string takeKey = "key";
 string runEast = "east";



//Main
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
    safeHouse();
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
//Action/Location Function 1
void chooseFight()
{
  lineBreaker();
  cout << "\nYou chose to fight. Yes! Make the People of Asguard proud!" << endl;
  cout << endl;
  cout << "Go east if you change your mind.";
  cout << endl;
  cout << "\nGo west to retrieve the sword and shield." 
  << endl;
  cin >>userChoice;
  if(userChoice == 'W'){
    goWest();
  }
  else if(userChoice == 'E'){
    safeHouse();
  }
  else{
      cout << "Invalid Input! Type W for west and E for east.";
      chooseFight();
  }
  
}
//Action/Location Function 2
void sword_Shield(){
  cout << "Choose to fight or go east:\n";
  string swordShield;
  cin >> swordShield;
  if(swordShield == "fight" || swordShield == "Fight" ){
    cout << endl;
    
    cout << "You are back at the battle! Go slay for Asgurd!";
    cout << endl;
    lineBreaker();
    cout << "To end this war and bring freedom to the people of Asguard." << endl;
    cout << "You must kill the chief globin who is south of you but this globin is 10 times the size of the other goblins. "<< endl; 
    cout << endl;
    cout << "To go south type S or s. If you change your mind type E or e for east:\n";
    cin >> userChoice;
    if (userChoice == 'S' || userChoice == 's'){
      fightChief();
    }
    else if (userChoice == 'E' || userChoice == 'e'){
      safeHouse();
    }
    else{ 
      cout << "Invalid Input! Enter in S or s for south or E or e for east." << endl;
    }
    
  }
  else if (swordShield == "east" || swordShield == "East"){
    safeHouse();
  }
  else{
    cout << "Invalid input! Must say \"take\"";
    sword_Shield();
  }
}
//Action/Location Function 3
void goNorth(){
  lineBreaker();
  cout << "You are back at the battle! Now let fight for Asguard!!" << endl;
  sword_Shield();
}
//Action/Location Function 4
void goWest(){
    cout << endl;
    lineBreaker();
    cout << "I knew Asguard could count on you!" << endl;
    cout << endl;
    cout << "The sword and sheild are in the chest that is in front of you. The chest is locked." << endl;
    cout << "You must guess the answer to this riddle to retrieve the key to open it." << endl;
    answerRiddle();
}
//Action/Location Function 5
void answerRiddle(){
    lineBreaker();
    cout << endl;
    cout << "They cast and heal but their consequences are real?" << endl;
    cout << endl;
    string userAnswer;
    cin >> userAnswer;
    
    if (userAnswer == "Witches" || userAnswer == "witches"){
      cout << "You guessed right! Now you have retrieved the key, open the chest."<< endl;
      cout << endl;
      cout << "Unless, you have changed your mind?" << endl;
      string userCommand;
      cin >> userCommand;
      if(userCommand == takeKey){
        cout << "Now lets go North! For Asguard!!" << endl;
        goNorth();
        
      }
      if(userCommand == runEast ){
        safeHouse();
      }
      else{
        cout << "Invalid Input! You can only enter key or east" << endl;
        answerRiddle();
      }
    }
    else{
      cout << "Incorrect! Try Again." << endl;
      answerRiddle();
    }
}

//End state: Lose Function  
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

//Action/Location Funtion 3
void fightChief(){
  cout << "The Chief globin is front of you but he doesn't notices you. Strike him with your sword!" << endl;
  cout << "Enter in a number of strikes to the Chief globin that will make him fall to his knee for you to chopped his head off. Choose from 1 to 5: " << endl;
  strikeChief();
}
//Action/Location Function 5
void strikeChief(){
  cout << "Enter a number: ";
  int userStrike;
  cin >> userStrike;
  if (userStrike == 5){
    endWar();
  }
  else{
    cout << "He's still ALIVE! Try again!" << endl;
    strikeChief();
  }
  
}

//Action/Location Function 6
void safeHouse(){
  lineBreaker();
  cout << "You see a safe house. You go inside and hide." << endl;
  cout << endl;
  cout << "You thought you were safe here but the globins used this place to capture their prey!" << endl;
  chooseRun();
}
//End state 1 :Win function
void endWar(){
    lineBreaker();
    cout << endl;
    cout << "You chopped the head of the chief globin and army of globins fled the war! \nYou\'ve won the war and the people of Asguard shout cheers of joy!";
    cout << endl;
    gameOver();
  
}
