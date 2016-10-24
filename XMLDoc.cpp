#include "XMLDoc.h"

void XMLDoc::setVersion(int _version)
{
    version=_version;
}

void XMLDoc::setRoot(XMLElement* _element)
{
    root=_element;
}

XMLElement* XMLDoc::getRoot()
{
    return root;
}