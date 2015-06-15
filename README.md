# File-Encryptor
File Encryptor is another mac based app that can encrypt ANY file type. The program is able to encrypt the file through one of three 
ciphers, all block ciphers. The three block cipher modes are: Electronic Codebook, Cipher Block Chaining, and Counter. These 
ciphers operate directly on the file's memory contents, meaning the bytes themselves are encrypted. Thus, this program will 
completely transform the file, making it unreadable once encrypted.

The application was created in Xcode, and written in C++ as a way to familiarize myself with digital cryptology. 
Though written completely in C++, the code was built upon the SFML frameworks, which provided functions 
necessary for the code to work. Regardless, anyone versed in C++ would be able to easily examine the code.

To launch the application, a mac with the latest OS is required. 
The application itself can be launched immediately once downloaded. 
It requires a mouse/trackpad and a keyboard to operate. 
The user should be able to easily navigate through the UI to interact with the application. 
Note that the full file path of the document should be entered. For example: /Users/akshaysubramaniam/Documents/Example.txt.

Note that the program WILL make the file unreadable once encrypted, meaning the user cannot access it properly. However, once 
decrypted, the file will be interactable with as normal.

Created by Akshay Subramaniam.
