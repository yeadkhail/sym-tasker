#ifndef SYM_HEADER_H
#define SYM_HEADER_H
#include"functions/input.h"
void help();
void version();
void asciiArtedName();
bool dotSymFileChecker();
void randomizer();
void initializer();
int insert(void);
int TagEdit(void);
string dotsymfilestring();
bool copyFile(const string& sourceFilePath, const string& destinationFolderPath);
string attachmentfolderpathstring();
void TagWise(void);
int TagInsert(void);
int TagDelete(void);
input taskfromstring(string stringdata);
string getFileName(const string& filePath);
#endif //_HEADER_H