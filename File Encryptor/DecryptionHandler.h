//
//  DecryptionHandler.h
//  File Encryptor
//
//  Created by Akshay Subramaniam on 11/6/15.
//  Copyright (c) 2015 Incultus. All rights reserved.
//

#ifndef __File_Encryptor__DecryptionHandler__
#define __File_Encryptor__DecryptionHandler__

#include <stdio.h>
#include "Decryptor.h"
#include <cstdlib>
#include <fstream>

using namespace std;

class DecryptionHandler {
public:
    DecryptionHandler(string, int);
    
    bool loadFile();
private:
    string filePath;
    const char *filePathChar;
    int cipherType;
    
    void padFile();
    long getFileSize(FILE*);
};

#endif /* defined(__File_Encryptor__DecryptionHandler__) */
