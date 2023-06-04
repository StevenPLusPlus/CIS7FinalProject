# CIS7 FinalProject
# Authors: Steven Alberto
# Date: 6/4/2023

# Basic Instructions
- First run program
- When the program asks if you would like to (1) encrypt, (2) decrypt, or (3) options. Make sure to input one of those numbers since other numbers will just loop and anything other than a number will break the program
- After selecting either decryption or encryption, make sure to input letters without a space for the message, and lowercase letters without a space for the key, while also making sure that the key is < message length and lowercase
- When prompt asks if you would like to continue, typing 'no' will quit the program while typing in anything else will act as 'yes' includes yes itself
- The third option besides encryption and decryption is an extra which will just change the background color of your console. This works on visual studio but did not work on a online c++ compiler and replit, therefore it might work or not work depending on the ide or whatever you are using to compile the code

# General Description
- The program is a vigenere cipher which allows the user to either encrypt or decrypt based on the selection that they make.
- Encryption asks for the message and a key, then it outputs the encrypted message.
- Decryption asks for encrypted message and a key, then it outputs the decrypted message.

# Frame of Program
- Program uses 3 functions. The main() function which runs and calls everything, the string decryption() function which does all the calculations which then returns a decrypted message, and finally the string encryption() function which does all the calculations which then returns a encrypted message. Decryption and Encryption are basically the same, the only difference is that the decryption function subtracts the key while the encryption function adds the key.

