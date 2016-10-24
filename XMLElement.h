#ifndef XMLELEMENT_H_INCLUDED
#define XMLELEMENT_H_INCLUDED
#include <String>
#include "debug.h"
#include <stdio.h>

using namespace std;

class XMLElement
{
    public:
    XMLElement(); 
    XMLElement(string _tag, string _property, string _value);

    void printInfo();
    
    void addChild(XMLElement* _child);
    void setTag(string _tag);
    void setProperty(string _property);
    void setValue(string _value);

    XMLElement* getChild();
    string getTag();
    string getProperty();
    string getValue();

    bool hasChild();

    private:
    XMLElement* children;
    int numOfChildren;
    
    string tag;
    string property;
    string value;
};

#endif // XMLELEMENT_H_INCLUDED