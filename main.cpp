// Author: Steven Alberto
// Date: 6-1-23
// Program Name: Vigenere Cipher Program (both ENCRYPTION and DECRYPTION)

#include <iostream>
#include <string>
using namespace std;

// Decryption Function / Subtracting Key
string decryption(string userInputMessage, string userInputKey) {
	string decryptedMessage = "";
	char characters;
	int temp = 0;
	int decryptionKey;

	for (int k = 0; k < userInputMessage.length(); ++k) { // main for loop
		characters = userInputMessage[k];

		if (characters >= 'A' && characters <= 'Z') { // nested if loop for uppercase letters
			decryptionKey = userInputKey[temp] - 'a';
			temp = (temp + 1) % userInputKey.length();
			characters = 'A' + (characters - 'A' - decryptionKey + 26) % 26;
		}
		if (characters >= 'a' && characters <= 'z') { // nested if loop for lowercase letters
			decryptionKey = userInputKey[temp] - 'a';
			temp = (temp + 1) % userInputKey.length();
			characters = 'a' + (characters - 'a' - decryptionKey + 26) % 26;
		}
		decryptedMessage += characters;
	}
	return decryptedMessage; // returning decryption 

}

// Encryption Function / Adding Key
string encryption(string userInputMessage, string userInputKey) {
	string encryptedMessage = "";
	char characters;
	int temp = 0;
	int encryptionKey;

	for (int k = 0; k < userInputMessage.length(); ++k) { // main for loop
		characters = userInputMessage[k];

		if (characters >= 'A' && characters <= 'Z') { // nested if loop for uppercase letters
			encryptionKey = userInputKey[temp] - 'a';
			temp = (temp + 1) % userInputKey.length();
			characters = 'A' + (characters - 'A' + encryptionKey + 26) % 26;
		}
		if (characters >= 'a' && characters <= 'z') { // nested if loop for lowercase letter
			encryptionKey = userInputKey[temp] - 'a';
			temp = (temp + 1) % userInputKey.length();
			characters = 'a' + (characters - 'a' + encryptionKey + 26) % 26;
		}
		encryptedMessage += characters; 
	}
	return encryptedMessage; // returning encryption

}

// main function
int main()
{
	string userInputMessage;
	string userInputKey; 
	int menuSelection = 0;
	int colorSelection;
	string programSelection = "holder";

	cout << "---------------------------------------------------" << endl;
	cout << "Welcome to Vigenere Cipher Encryption/Decryption" << endl;
	cout << "---------------------------------------------------" << endl;
	while (programSelection != "no" || programSelection == "yes") { // while loop for deciding on exiting the program or not
		do {
			cout << "Make a selection from the list down below." << endl;
			cout << "(1) For Encryption " << endl;
			cout << "(2) For Decryption " << endl;
			cout << "(3) Options " << endl; // colors were added for run but they seems to work on visual studio and not online c++ compiler or replit
			cout << "Selection: ";
			cin >> menuSelection;
		} while (menuSelection < 1 || menuSelection > 3); // do while loop for selecting a number between 1 2 & 3

		switch (menuSelection) { // switch case for selection of the menu for encryption, decryption, and options
		case 1: // for encryption
			cout << "Encryption Successfully Selected! " << endl;
			cout << "Enter message to encrypt: ";
			cin >> userInputMessage;
			cout << "Enter key: ";
			cin >> userInputKey;
			cout << "Encrypted Text: " << encryption(userInputMessage, userInputKey) << endl;
			cout << "---------------------------------------------------" << endl;
			break;
		case 2: // for decryption
			cout << "Decryption Successfully Selected! " << endl;
			cout << "Enter message to decrypt: ";
			cin >> userInputMessage;
			cout << "Enter key: ";
			cin >> userInputKey;
			cout << "Decrypted Text: " << decryption(userInputMessage, userInputKey) << endl;
			cout << "---------------------------------------------------" << endl;
			break;
		case 3: // for settings
			cout << "Program Options Successfully Selected! " << endl;
			cout << "Selection of Colors to Change Console Color Background. " << endl;
			cout << "(1) Blue. " << endl;
			cout << "(2) Green. " << endl;
			cout << "(3) Red. " << endl;
			cout << "(4) Purple. " << endl;
			cout << "(5) Yellow. " << endl;
			cout << "(6) Black (Default Program Color). " << endl;
			cout << "Selection Pending: ";
			cin >> colorSelection;
			switch (colorSelection) { // switch case for changing colors of the background
			case 1: 
				system("color 1f"); // blue background
				break;
			case 2:
				system("color 2f"); // green background
				break;
			case 3:
				system("color 4f"); // red background
				break;
			case 4:
				system("color 5f"); // purple background
				break;
			case 5:
				system("color 6f"); // yellow background
				break;
			case 6:
				system("color 0f"); // black background
				break;
			}
			break;
		default:
			cout << "Error Please Try Again!" << endl;
			cout << "---------------------------------------------------" << endl;
		}
		cout << "Would you to continue? Type 'yes' or 'no'" << endl;
		cout << "Selection: ";
		cin >> programSelection;
		cout << "---------------------------------------------------" << endl;
	}
	cout << "Closing Program...." << endl;
	return 0;
}

