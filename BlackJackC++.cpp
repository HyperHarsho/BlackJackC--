#include <iostream>
#include <conio.h>
#include <map>
#include <queue>
#include <list>
using namespace std;
class App
{
public:
    map<char, int> cards;
    queue<char> deck;
    bool facup = true;
    vector<char> dealerHand;
    vector<char> playerHand;
    int dealerCount = 0;
    int playerCount = 0;
    bool natural = false;
    int dealerAce = 11;
    int hidDealerCount = 0;
    vector<char> key;
    App()
    {
        cards.insert(pair<char, int>('A', 1));
        cards.insert(pair<char, int>('2', 2));
        cards.insert(pair<char, int>('3', 3));
        cards.insert(pair<char, int>('4', 4));
        cards.insert(pair<char, int>('5', 5));
        cards.insert(pair<char, int>('6', 6));
        cards.insert(pair<char, int>('7', 7));
        cards.insert(pair<char, int>('8', 8));
        cards.insert(pair<char, int>('9', 9));
        cards.insert(pair<char, int>('T', 10));
        cards.insert(pair<char, int>('J', 10));
        cards.insert(pair<char, int>('Q', 10));
        cards.insert(pair<char, int>('K', 10));
    }
    void cDeck();
    void print();
    void count();
    void game();
};

// Create Deck
void App::cDeck()
{
    srand(time(0));
    vector<char> cS;
    for (map<char, int>::iterator it = cards.begin(); it != cards.end(); ++it)
    {
        cS.push_back(it->first);
    }
    for (int i = 0; i < 312; i++)
    {
        int rndm = rand() % cS.size();
        char rCard = cS[rndm];
        deck.push(rCard);
    }
}

// Print hand
void App::print()
{
    cout << "Dealer Hand :" << dealerCount << endl;
    for (int i = 0; i < dealerHand.size(); i++)
    {
        if (i == 1 && natural == false)
        {
            cout << " * ";
        }
        else
        {
            cout << " " << dealerHand[i] << " ";
        }
    }
    cout << endl;
    cout << "Player Hand :" << playerCount << endl;
    for (int i = 0; i < playerHand.size(); i++)
    {
        cout << " " << playerHand[i] << " ";
    }
    cout << endl;
}

// Count hand
void App::count()
{
    dealerCount = 0;
    playerCount = 0;
    for (int i = 0; i < dealerHand.size(); i++)
    {
        switch (dealerHand[i])
        {
        case 'A':
            if (i == 0 && natural == false)
            {
                natural = true;
                int sec = cards.at(dealerHand[i + 1]);
                if (11 + sec == 21)
                {
                    cout << "DEALER BLACKJACK" << endl;
                    cout << "The deler wins" << endl;
                    dealerCount = 21;
                    print();
                    exit(0);
                }
                dealerCount = dealerCount + cards.at(dealerHand[i]);
                break;
            }
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        case '1':
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        case '2':
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        case '3':
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        case '4':
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        case '5':
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        case '6':
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        case '7':
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        case '8':
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        case '9':
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        case 'T':
            if (i == 0 && natural == false)
            {
                natural = true;
                int sec = cards.at(dealerHand[i + 1]);
                if (dealerHand[i + 1] == 'A')
                    sec = 11;
                if (10 + sec == 21)
                {
                    cout << "DEALER BLACKJACK" << endl;
                    cout << "The deler wins" << endl;
                    dealerCount = 21;
                    print();
                    exit(0);
                }
                dealerCount = dealerCount + cards.at(dealerHand[i]);
                break;
            }
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        case 'J':
            if (i == 0 && natural == false)
            {
                natural = true;
                int sec = cards.at(dealerHand[i + 1]);
                if (dealerHand[i + 1] == 'A')
                    sec = 11;
                if (10 + sec == 21)
                {
                    cout << "DEALER BLACKJACK" << endl;
                    cout << "The deler wins" << endl;
                    dealerCount = 21;
                    print();
                    exit(0);
                }
                dealerCount = dealerCount + cards.at(dealerHand[i]);
                break;
            }
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        case 'Q':
            if (i == 0 && natural == false)
            {
                natural = true;
                int sec = cards.at(dealerHand[i + 1]);
                if (dealerHand[i + 1] == 'A')
                    sec = 11;
                if (10 + sec == 21)
                {
                    cout << "DEALER BLACKJACK" << endl;
                    cout << "The deler wins" << endl;
                    dealerCount = 21;
                    print();
                    exit(0);
                }
                dealerCount = dealerCount + cards.at(dealerHand[i]);
                break;
            }
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        case 'K':
            if (i == 0 && natural == false)
            {
                natural = true;
                int sec = cards.at(dealerHand[i + 1]);
                if (dealerHand[i + 1] == 'A')
                    sec = 11;
                if (10 + sec == 21)
                {
                    cout << "DEALER BLACKJACK" << endl;
                    cout << "The deler wins" << endl;
                    dealerCount = 21;
                    print();
                    exit(0);
                }
                dealerCount = dealerCount + cards.at(dealerHand[i]);
                break;
            }
            if (!(i == 1 && natural == false))
                dealerCount = dealerCount + cards.at(dealerHand[i]);
            break;
        }
    }
    for (int i = 0; i < playerHand.size(); i++)
    {
        switch (playerHand[i])
        {
        case 'A':
            if (i == 0)
            {
                int sec = cards.at(playerHand[i + 1]);
                if (11 + sec == 21)
                {
                    cout << "PLAYER BLACKJACK" << endl;
                    cout << "You win" << endl;
                    playerCount = 21;
                    print();
                    exit(0);
                }
            }
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        case '1':
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        case '2':
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        case '3':
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        case '4':
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        case '5':
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        case '6':
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        case '7':
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        case '8':
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        case '9':
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        case 'T':
            if (i == 0)
            {
                int sec = cards.at(playerHand[i + 1]);
                if (playerHand[i + 1] == 'A')
                    sec = 11;
                if (10 + sec == 21)
                {
                    cout << "PLAYER BLACKJACK" << endl;
                    cout << "You win" << endl;
                    playerCount = 21;
                    print();
                    exit(0);
                }
            }
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        case 'J':
            if (i == 0)
            {
                int sec = cards.at(playerHand[i + 1]);
                if (playerHand[i + 1] == 'A')
                    sec = 11;
                if (10 + sec == 21)
                {
                    cout << "PLAYER BLACKJACK" << endl;
                    cout << "You win" << endl;
                    playerCount = 21;
                    print();
                    exit(0);
                }
            }
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        case 'Q':
            if (i == 0)
            {
                int sec = cards.at(playerHand[i + 1]);
                if (playerHand[i + 1] == 'A')
                    sec = 11;
                if (10 + sec == 21)
                {
                    cout << "PLAYER BLACKJACK" << endl;
                    cout << "You win" << endl;
                    playerCount = 21;
                    print();
                    exit(0);
                }
            }
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        case 'K':
            if (i == 0)
            {
                int sec = cards.at(playerHand[i + 1]);
                if (playerHand[i + 1] == 'A')
                    sec = 11;
                if (10 + sec == 21)
                {
                    cout << "PLAYER BLACKJACK" << endl;
                    cout << "You win" << endl;
                    playerCount = 21;
                    print();
                    exit(0);
                }
            }
            playerCount = playerCount + cards.at(playerHand[i]);
            break;
        }
    }
    if (dealerCount == 21)
    {
        cout << "DEALER BLACKJACK" << endl;
        cout << "The dealer wins" << endl;
        print();
        exit(0);
    }
    if (dealerCount > 21)
    {
        cout << "DEALER BUST" << endl;
        cout << "You win" << endl;
        print();
        exit(0);
    }
    if (playerCount == 21)
    {
        cout << "PLAYER BLACKJACK" << endl;
        cout << "You win" << endl;
        print();
        exit(0);
    }
    if (playerCount > 21)
    {
        cout << "PLAYER BUST" << endl;
        cout << "You loose" << endl;
        print();
        exit(0);
    }
}

void App::game()
{
    cDeck();
    int turn = 0;
    char c;
    dealerHand.push_back(deck.front());
    deck.pop();
    playerHand.push_back(deck.front());
    deck.pop();
    dealerHand.push_back(deck.front());
    deck.pop();
    playerHand.push_back(deck.front());
    deck.pop();
    count();
    print();
    while (true)
    {
        switch (turn)
        {
        case 0:
            cout<<"Do you want to HIT or STAND?"<<endl;
            cin>>c;
            c = tolower(c);
            natural = true;
            switch (c)
            {
            case 'h':
                playerHand.push_back(deck.front());
                deck.pop();
                count();
                print();
                break;
            case 's':
                cout<<"You stand"<<endl;
                count();
                print();
                break;
            default:
                cout<<"Enter correct input(H or S)."<<endl;
                continue;
            }
            turn++;
            break;
        case 1:
            natural = true;
            count();
            if (dealerCount > playerCount)
            {
                cout<<"The dealer stands"<<endl;
            }
            else
            {
                cout<<"The dealer hits"<<endl;
                if (deck.front() == 'A')
                {
                    if (!(11 + dealerCount > 21))
                    {
                        cards.insert(pair<char,int>('A', 11));
                    }
                }
                dealerHand.push_back(deck.front());
                deck.pop();
                count();
                print();
            }
            turn--;
            break;
        }
    }
}

int main()
{
    App a;
    a.game();
    return 0;
}
