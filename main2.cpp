#include<iostream>
#include<cstring>
using namespace std;

#include "stack.h"

int main(int argc, char **argv){
    
   
/*
  Exercise 2
 printf("Checking the parentheses in argv arguments\n");

   */
    int i, j;
    int correct;
     for(i=1; i<argc; i++){
        Stack s;
        for(j=0;j<strlen(argv[i]);j++){
          correct = -1;
          if(argv[i][j] == '[' || argv[i][j] == '{' || argv[i][j] == '('){
            s.push(argv[i][j]);
            //cout<<argv[i][j]<<endl;
          }
          else{
              if(argv[i][j]==']' || argv[i][j]=='}' || argv[i][j] == ')' ){
                if(s.get_size() <= 0){
                  correct = 0;
                  break;
                }
                char a = s.pop();
                //cout<<a<<endl;
                
                if((argv[i][j]==']' && a == '[')||(argv[i][j]==')' && a == '(')||(argv[i][j]=='}' && a == '{')){
                  correct = 1;
                }
                else{
                  correct = 0;
                  break;
                }
              }
          }
          
        }

        if(argc == 2){
          if(s.get_size() > 0 && correct == -1){
            cout<<"too many open"<<endl;
          }
          else if(correct == 1){
            cout<<"correct"<<endl;
          }
          else if(correct == 0){
            cout<<"incorrect"<<endl;
          }
          else{
            
          }
        }
        else{
          if(s.get_size() > 0 && correct == -1){
            cout<<"argv "<<i<<" incorrect"<<endl;
          }
          else if(correct == 1){
            cout<<"argv "<<i<<" correct"<<endl;
          }
          else if(correct == 0){
            cout<<"argv "<<i<<" incorrect"<<endl;
          }
          else{
            
          }
        }
     }
     

  


   return 0;
}
