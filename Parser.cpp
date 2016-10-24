#include "Parser.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int getLineLength(char* buffer)
{
    for(int i = 0; i <= 255; i++)
    {
        printf("%c", buffer[i]);

        if(buffer[i]=='\n')
            return i;
    }

    return 0; // No EOL character
}

Parser::Parser()
{

}


XMLElement Parser::parseLine(char* line, int length)
{
    XMLElement element;   

    return element;
}

bool Parser::load(char* path, XMLDoc* doc)
{
    //char *buffer;    
    FILE* file = fopen(path, "r");

    //fgets(buffer, sizeof(buffer), file);
    
    fseek(file, 0, SEEK_END);
    long fsize = ftell(file);
    fseek(file, 0, SEEK_SET);

    char* buffer = (char* )malloc(fsize+1);

    fread(buffer, fsize, 1, file);
    //printf("%s", buffer); 

    int length = getLineLength(buffer);
    //printf("%i", length);

    //fgets(buffer, sizeof(buffer), file);
    //length = getLineLength(buffer);
    parseLine(buffer, length);

    fclose(file);

    return true;
}
