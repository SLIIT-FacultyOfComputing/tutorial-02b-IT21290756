/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

[23:43, 20/02/2022] Dilun 5.1 S2: #include<iostream>
using namespace std;

int main()
{
  int no;
  long fac;

  cout << "Enter a Number : ";
  cin >> no;

  fac = 1;
  for (int r=no; r >= 1; r--)
  {
    fac = fac * r;
  }
  
  cout << "Factorial of " << no << " is " << fac << endl;

  return 0;
}
[23:43, 20/02/2022] Dilun 5.1 S2: 3
[23:43, 20/02/2022] Dilun 5.1 S2: #include<iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;

  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;

}

long Factorial(int no)
{
  int fac = 1;
  for (int r=no; r >= 1; r--)
  {
    fac = fac * r;
  }
  return fac;
}

long nCr(int n, int r)
{
  return Factorial(n) / (Factorial(r) * Factorial(n-r));
}