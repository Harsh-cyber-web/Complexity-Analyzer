#include<iostream>
#include<vector>
#include<Algorithm>
using namespace std;
int display(string question){
    cout<<"Enter Question";
    getline(cin,question);
  int n=question.length();
  bool up=false;
  bool low=false;
  bool dig=false;
  bool special=false;

  for (int i = 0; i < n; i++)
  {
    if (isupper(question[i]))
    {
       up=true;
    }
     if (islower(question[i]))
    {
       low=true;
    }
      if (isdigit(question[i]))
    {
       dig=true;
    }
     if (!isdigit(question[i])& !islower(question[i]) & !isdigit(question[i]) )
    {
       special=true;
    }
  }
  int count=0;
   if(up){
    count+=1;
   }
     if(low){
    count+=1;
   }
     if(dig){
    count+=1;
   }
     if(special){
    count+=1;
   }

 
   if(count>=1 && count ==2){
    cout<<"question is easy";
   }
   if(count==3){
    cout<<"'medium";
   }
    if(count==4){
    cout<<"complex";
   }
    
}
int loo(int n){
    int i=0;
    for (int i = 0; i < n; i++)
    {
        cout<<i;
    }
    return n;


}



int main(){
  string question;
  int qid;
  int n;
display(question);




  

 
  
 
   
  
  
  


    
    

}
