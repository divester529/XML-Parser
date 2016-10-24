/* FUCK THIS SHIT
 * YO
 *
**/

#include "debug.h"

//#ifdef DEBUG
#include "XMLDoc.h"
#include "XMLElement.h"
#include "Parser.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
    Parser p;

    XMLDoc* test = new XMLDoc();
    test->setVersion(1);

    p.load("thisIsATest.xml", test);
    
    test->getRoot()->printInfo();
    
    return 0;
}
//#endif