#include <iostream>

int main()
{
  //varibles for player choices
  int p1;
  int p2;
  
  //Ask each player for their choice
  std::cout << "Here is a list of choices each player should pick a number 1-5  dont lock at the other players choice\n";
  std::cout << "1. Rock\n";
  std::cout << "2. Paper\n";
  std::cout << "3. Scissors\n";
  std::cout << "4. Lizard\n";
  std::cout << "5. Spock\n";
  
  std::cout << "\nPalyer 1 enter your choice: \n";
  std::cin >> p1;
  std::cout << "\nPalyer 2 enter your choice: \n";
  std::cin >> p2;

  //Determines the winner
  if( p1 == 1 && p2 == 2)
    {
      std::cout << "Rock covers paper\n";
      std::cout << "Player 1 wins!\n";
    }
  else if ( p1 == 2 && p2 == 1)
    {
      std::cout << "Rock covers paper\n";
      std::cout << "Player 2 wins!\n";
    }
  else if ( p1 == 2 && p2 == 3)
    {
      std::cout << "Scissors cuts Paper\n";
      std::cout << "Player 2 wins!\n";
    }
  else if ( p1 == 3 && p2 == 2)
    {
      std::cout << "Scissors cuts Paper\n";
      std::cout << "Player 1 wins!\n";
    }
  else if ( p1 == 3 && p2 == 4)
    {
      std::cout << "Scissors decapitates Lizard\n";
      std::cout << "Player 1 wins!\n";
    }
  else if ( p1 == 4 && p2 == 3)
    {
      std::cout << "Scissors decapitates Lizard\n";
      std::cout << "Player 2 wins!\n";
    }
  else if ( p1 == 4 && p2 == 5)
    {
      std::cout << "Lizard poisons Spockd\n";
      std::cout << "Player 1 wins!\n";
    }
  else if ( p1 == 5 && p2 == 4)
    {
      std::cout << "Lizard poisons Spock\n";
      std::cout << "Player 2 wins!\n";
    }
  else if ( p1 == 1 && p2 == 4)
    {
      std::cout << "Rock crushes Lizardk\n";
      std::cout << "Player 1 wins!\n";
    }
  else if ( p1 == 4 && p2 == 1)
    {
      std::cout << "Rock crushes Lizard\n";
      std::cout << "Player 2 wins!\n";
    }
  else if ( p1 == 3 && p2 == 5)
    {
      std::cout << "Spock smashes Scissors\n";
      std::cout << "Player 2 wins!\n";
    }
  else if ( p1 == 5 && p2 == 3)
    {
      std::cout << "Spock smashes Scissors\n";
      std::cout << "Player 1 wins!\n";
    }
  else if ( p1 == 2 && p2 == 4)
    {
      std::cout << "Lizard eats Paper\n";
      std::cout << "Player 2 wins!\n";
    }
  else if ( p1 == 4 && p2 == 2)
    {
      std::cout << "Lizard eats Paper\n";
      std::cout << "Player 1 wins!\n";
    }
  else if ( p1 == 2 && p2 == 5)
    {
      std::cout << "Paper disproves Spock\n";
      std::cout << "Player 1 wins!\n";
    }
  else if ( p1 == 5 && p2 == 2)
    {
      std::cout << "Paper disproves Spock\n";
      std::cout << "Player 2 wins!\n";
    }
  else if ( p1 == 1 && p2 == 5)
    {
      std::cout << "Spock vaporizes Rock\n";
      std::cout << "Player 2 wins!\n";
    }
  else if ( p1 == 5 && p2 == 1)
    {
      std::cout << "Spock vaporizes Rock\n";
      std::cout << "Player 1 wins!\n";
    }
  else if ( p1 == 1 && p2 == 3)
    {
      std::cout << "Rock crushes Scissors\n";
      std::cout << "Player 1 wins!\n";
    }
  else if ( p1 == 3 && p2 == 1)
    {
      std::cout << "Rock crushes Scissors\n";
      std::cout << "Player 2 wins!\n";
    }
  else
    {
      std::cout << "Nothing Happens\n";
      std::cout << "Tie.\n";
    }
}