#pragma once
#include <string>


class BankAccount{
  private:
    int balance;
  public:
    BankAccount();
    BankAccount(
      int balance
    );
    ~BankAccount();
    int GetBalance() const;

    bool operator<(int const& i) const;
    bool operator<(BankAccount const& b) const;

    friend bool operator<(int const& i, BankAccount const& b);
};

// free function
bool operator<(int const& i, BankAccount const& b);