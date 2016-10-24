#include "XMLElement.h"
#include <stdio.h>

using namespace std;

XMLElement::XMLElement()
{

}

XMLElement::XMLElement(string _tag, string _property, string _value)
{
    tag=_tag;
    property=_property;
    value=_value;
}

void XMLElement::printInfo()
{
    printf("<%s", tag.c_str());
    if(property!="")
        printf("=%s", property.c_str());
    printf(">");
    if(value!="");
        printf("%s", value.c_str());
    printf("<%s>\n",tag.c_str());

    if(hasChild())
        child->printInfo();
}

void XMLElement::addChild(XMLElement* _child)
{
    if(children==NULL)
        children = _child;
    
    if(chilren!=NULL)
    {
        XMLElement* temp = children;
        int size = sizeof(children)/sizeof(XMLElement);

        children = calloc(size+1, sizeof(XMLElement));
        children[size+1]==_child;
    }
}

void XMLElement::setTag(string _tag)
{
    tag=_tag;
}

void XMLElement::setProperty(string _property)
{
    property=_property;
}

void XMLElement::setValue(string _value)
{
    value=_value;
}

XMLElement* XMLElement::getChild()
{
    return child;
}

bool XMLElement::hasChild()
{
    if(child==NULL)
        return false;
    
    return true;
}   

string XMLElement::getTag()
{
    return tag;
}

string XMLElement::getProperty()
{
    return property;
}

string XMLElement::getValue()
{
    return value;
}
