#include <iostream>
int main()
{
  std::string S, T;
  std::cin >> S >> T;
  while (S.find(T) != std::string::npos)
  {
    S.erase(S.find(T), T.length());
  }
  std::cout << S << std::endl;
  return 0;
}