#ifndef XMLDOC_H_INCLUDED
#define XMLDOC_H_INCLUDED
#include "XMLElement.h"

class XMLDoc
{
    public:

    void setVersion(int _version);
    void setRoot(XMLElement* _element);

    int getVersion();
    XMLElement* getRoot();

    private:
    int version;

    XMLElement* root; // Root element of the document
};

#endif // XMLDOC_H_INCLUDED