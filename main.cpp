#include <iostream>

using namespace std;

int main()
{
   int answer1 ,answer2 , answer3 , answer4;
 cout << "Are you looking for a serious relationship right now, or are you more interested in something casual?\n (1. serious relationship/2. something casual)" <<endl;
 cin >>answer1;

 cout<< "Do you enjoy cooking? (1. Yes / 2. NO)" <<endl;
 cin >>answer2;

 cout<< "Do you see yourself getting married someday?(1. Yes/2. No)"<<endl;
 cin>>answer3;

 cout<< "Do you have  big nyash?(1. yes/ 2. No)" <<endl;
 cin>> answer4;

 if(answer1==1 && answer2 == 1 && answer3 == 1 || answer4 == 1){
    cout<<"Me and you , We can be in a relationship" <<endl;
 }

 else if(answer1==2 && answer2 == 2 && answer3 == 2 && answer4 == 2 ){
    cout<<"i dont want you" <<endl;
 }
  else{
    cout<< "something went wrong please make your  are in a answer form " <<endl;
  }

    return 0;
}
