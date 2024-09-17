#pragma once
using namespace std;

class User {
private:
    int purchaseCode;

public:
    void setPurchaseCode(int _purchaseCode);
    int getPurchaseCode();

    int generate();
    int card(int);
   
};