#include <string>

class Transaction{
  private:
    int amount;
    std::string type; // type of transaction

  public:
    Transaction(int amt, std::string kind);
    std::string Report();
};