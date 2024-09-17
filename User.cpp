#include "User.h"
#include <cstdlib>
#include <time.h>

void User::setPurchaseCode(int _purchaseCode) {
	purchaseCode = _purchaseCode;
}

int User::getPurchaseCode() {
	return purchaseCode;
}

int User::generate() {
	purchaseCode = rand() % 10000 + 1;
	return purchaseCode;
}

int User::card(int cardNumber) {
	int numDigits = 1;
	while (cardNumber >= 10) {
		cardNumber /= 10;
		numDigits++;//Extraer cant digitos
	}
	return numDigits;
}