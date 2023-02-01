#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int randNum;
    int guess, score = 0, ch;
    cout<<"\n\n\t\t\t    ** Guessing Game **";
    cout<<"\n\t\t-------------------------------------------\n";
    while(1){
        cout<<"\n\t\tEnter any guessing integer number from 1 to 5\n\t\t\t\t";
        cin>>guess;
        randNum = rand()%5 + 1;
        if(randNum == guess){
            cout<<"\n\t\t\tYou have won\n";
            score++;
            cout<<"\t\t\tYour Score is: "<<score<<endl;
        }
        else{
            cout<<"\n\t\t\tYou have Lost. Please try again!\n";
            cout<<"\n\t\t\tThe random number was: "<<randNum<<endl;
            score--;
            cout<<"\t\t\tYour Score is: "<<score<<endl;
        }
//        cout<<"\n\t\t\tDo you want to exit - Enter (0): \n\t\tto continue Enter 1: \t\t";
//        cin>>ch;
//        if(ch==0)
//            break;
    }
    cout<<"\n\n\t\t\t*****  Your Final Score is: "<<score<<"  *******\n";
    return 0;
}
