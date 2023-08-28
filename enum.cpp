#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;



//Random Card using enum 
   enum CardSuits{
      Club,
      Diamond,
      Heart,
      Spade
   };
   //  CardSuits mysuit = Diamond; ------> This shows that enum string contains integer value
   //  cout<<"Your Given Suit is: "<<mysuit;

   enum CardElements{
      Ace,
      Two,
      Three,
      Four,
      Five,
      Six,
      Seven,
      Eight,
      Nine,
      Ten,
      Jack,
      Queen,
      King
   };

//Enum CardSuits
string GetSuitString(CardSuits suit)
   {
      string s;
      switch (suit)
      {
      case Club:
         s="Club";
         break;
      case Diamond:
         s="Diamond";
         break;
      case Heart:
         s="Heart";
         break;
      case Spade:
         s="Spade";
         break;
      
      default:
         break;
      }
      return s;
   }

//Enum CardElements
string GetElementString(CardElements element)
   {
      string e;
      switch (element)
      {
      case Ace:
         e="Ace";
         break;
      case Two:
         e="Two";
         break;
      case Three:
         e="Three";
         break;
      case Four:
         e="Four";
         break;
      case Five:
         e="Five";
         break;
      case Six:
         e="Six";
         break;
      case Seven:
         e="Seven";
         break;
      case Eight:
         e="Eight";
         break;
      case Nine:
         e="Nine";
         break;
      case Ten:
         e="Ten";
         break;
      case Jack:
         e="Jack";
         break;
      case Queen:
         e="Queen";
         break;

      case King:
         e="King";
         break;
      
      default:
         break;
      }
      return e;
   }

//generate random number
int GenerateRandomNumber(int min, int max){
   //static used for efficiency,
   //so we only calculate this value once
   static const double fraction = 1.0/(static_cast<double>(RAND_MAX)+1.0);
   //evely distribute the random number across our range
   return min + static_cast<int>((max-min+1)*(rand()*fraction));
}

//With Struct data type
struct Cards{
   CardSuits suit;
   CardElements element;
};

int main()
{
    //Enum card game code:-

    //set initial seed value to system clock
    srand(static_cast<unsigned int>(time(0)));

    //With Struct below
    Cards card;//----->Deifine its object
    card.suit = static_cast<CardSuits>(GenerateRandomNumber(0,3));
    card.element = static_cast<CardElements>(GenerateRandomNumber(0,12));

    cout<<"Your genrated Card is: ";
    cout<<GetElementString(card.element);
    cout<<" of "<<GetSuitString(card.suit)<<endl;
    //With Struct End

   //With Enum Below
    //genrate random suit and element card
   //  int iSuit = GenerateRandomNumber(0,1);
   //  int iElement = GenerateRandomNumber(0,12);

   //  CardSuits suit = static_cast<CardSuits>(iSuit);
   //  CardElements element = static_cast<CardElements>(iElement);

   //  cout<<"Your genrated Card is: ";
   //  cout<<GetElementString(element);
   //  cout<<" of "<<GetSuitString(suit)<<endl;
   //with Enum end
}