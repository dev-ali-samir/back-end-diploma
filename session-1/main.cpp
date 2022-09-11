/* Author: Ali Samir */

#include <iostream>
using namespace std;

int
main ()
{

  char operattion;
  float num_1, num_2;

  cout << "Enter Operator ( +, -, *, / ): ";
  cin >> operattion;

  cout << "Enter Number 1: ";
  cin >> num_1;

  cout << "Enter Number 2: ";
  cin >> num_2;

  switch (operattion)
    {

    case '+':
      cout << num_1 << " + " << num_2 << " = " << num_1 + num_2;
      break;

    case '-':
      cout << num_1 << " - " << num_2 << " = " << num_1 - num_2;
      break;

    case '*':
      cout << num_1 << " * " << num_2 << " = " << num_1 * num_2;
      break;

    case '/':
      cout << num_1 << " / " << num_2 << " = " << num_1 / num_2;
      break;

    default:
      cout << "Operator is not correct!";
      break;
    }

  return 0;
}
