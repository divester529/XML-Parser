#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED
#include "XMLDoc.h"

//int getLineLength(char[] buffer);

class Parser
{
    public:
    Parser();

    bool load(char* path, XMLDoc* doc);

    XMLElement parseLine(char* line, int length);

    private:

};

#endif // PARSER_H_INCLUDED