#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

string cardNames[] = {"","A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int cardScores[] = {0,1,2,3,4,5,6,7,8,9,10,10,10,10};

int drawCard(void){
        return rand()%__________ + _________;
}

int calScore(int x,int y,int z){
        score_x = cardScores[___________];
        score_y = _______________________;
        score_z = _______________________;
        return (_____________)%__________;
}

int findYugiAction(int s){        
        if(s == 9) return 2; 
        else if(s < 6) return 1;
        else{
                if(rand()%_________ <= _______) return 2;
                else ______________;
        }
}

void checkWinner(int p, int y){
        cout << "\n---------------------------------\n";
        if(_____________) 
            cout <<   "|             Draw!!!           |"; 
        _____________ 
            cout <<   "|         Player wins!!!        |"; 
        _____________ 
            cout <<   "|          Yugi wins!!!         |"; 
        cout << "\n---------------------------------\n";
}

int main(){        
        srand(____________);

        int playerScore, yugiScore, playerAction, yugiAction;
        int playerCards[3] = {drawCard(), drawCard(), 0};
        int yugiCards[3] = {____________, ____________, ____________};
        
        
        cout << "---------ORE NO TURN, DRAW!!!------------\n";
        cout << "Your cards: " << cardNames[playerCards[0]] << " " << cardNames[playerCards[1]] << "\n";
        playerScore = calScore(playerCards[0],playerCards[1],playerCards[2]);
        cout << "Your score: " << playerScore << "\n";
        do{
                cout << "(1) Destiny draw (2) Stay, SELECT: ";
                cin >> playerAction;
        }while(____________ != ____________ && ____________ != ____________);
        if(playerAction == 1){
                _________________ = drawCard();
                playerScore = _________________;
                cout << "Player draws the 3rd card!!!" << "\n";
                cout << "Your 3rd card: " << _________________ << "\n";
                cout << "Your new score: " << _________________ << "\n";
        }
        cout << "------------ Turn end -------------------\n\n";
        
        
        cout << "---------YUGI'S TURN, DRAW!!!------------\n";
        cout << "Yugi's cards: " << cardNames[yugiCards[0]] << " " << cardNames[yugiCards[1]] << "\n";
        yugiScore = calScore(yugiCards[0],yugiCards[1],yugiCards[2]);
        cout << "Yugi's score: " << yugiScore << "\n";
        yugiAction = findYugiAction(yugiScore);
        if(yugiAction == 1){
                _________________ = drawCard();
                yugiScore = _________________;
                cout << "Yugi draws the 3rd card!!!\n";
                cout << "Yugi's 3rd card: " << _________________ << "\n";
                cout << "Yugi's new score: " << _________________ << "\n";
        }
        cout << "------------ Turn end -------------------\n";
        
        checkWinner(playerScore,yugiScore);
}