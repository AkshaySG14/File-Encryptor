//
//  EncryptionHandler.h
//  File Encryptor
//
//  Created by Akshay Subramaniam on 9/6/15.
//  Copyright (c) 2015 Incultus. All rights reserved.
//

#ifndef __File_Encryptor__EncryptionHandler__
#define __File_Encryptor__EncryptionHandler__

#include <stdio.h>
#include "Encryptor.h"
#include <cstdlib>
#include <fstream>

using namespace std;

class EncryptionHandler {
public:
    EncryptionHandler(string, int);
    
    bool loadFile();
private:
    string filePath;
    const char *filePathChar;
    int cipherType;
    
    void padFile();
    long getFileSize(FILE*);
};

#endif /* defined(__File_Encryptor__EncryptionHandler__) */
