#include <iostream>

using namespace std;

struct card
{
    int shape; //1-hearts, 2-diamonds, 3-spades, 4-clubs
    int face; //1-ace, 2-2...
    int colour; //1-red, 2-black;
};
int main()
{
    struct card deck[52]; //deck of 52 cards - array
    deck[0]={1,1,1}; //ace of red hearts
    struct card c;
    c.shape=1;
    c.face=2;
    c.colour=1;
    cout<<"2 of red hearts "<<endl;
    cout<<"Face of first card in deck "<<deck[0].face<<endl; //gives the face of the first card in the array deck
    cout<<"Size of structure card "<<sizeof(card)<<endl; //shape, face and colour all of them takes 4 bytes each as they are of type int. so the size of struct
    //card is 4*3=12
    cout<<"Size of deck "<<sizeof(deck)<<endl; //52*12
    return 0;
}
