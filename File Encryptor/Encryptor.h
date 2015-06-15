//
//  Encryptor.h
//  File Encryptor
//
//  Created by Akshay Subramaniam on 9/6/15.
//  Copyright (c) 2015 Incultus. All rights reserved.
//

#ifndef __File_Encryptor__Encryptor__
#define __File_Encryptor__Encryptor__

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

class Encryptor {
public:
    Encryptor(vector<uint8_t>, int);
    vector<uint8_t> getEncryptedFile();
private:
    // The former refers to the type of encryption (in more detail in the class). The latter gives the position in the rotating key.
    int type, count = 1;
    // The former vector is the file given by the user expressed in bits, while the latter is the rotating key that is used to encrypt the file.
    vector<uint8_t> byteVector, key;
    // The vector that contains all the encrypted byte. This is essentially the encrypted file as a whole.
    vector<uint8_t> encryptedByteVector;

    void initializeKey();
    void ECBEncrypt();
    void CBCEncrypt();
    void CTREncrypt();
    void tailEncrypt();
    
    uint8_t getKey();
    uint8_t getXOR(uint8_t, uint8_t);    
};

#endif /* defined(__File_Encryptor__Encryptor__) */
