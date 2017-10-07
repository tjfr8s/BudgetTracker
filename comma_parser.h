#ifndef COMMA_PARSER_H
#define COMMA_PARSER_H

#include <vector>
#include <iostream>
#include <string>
void commaParser(std::ifstream &csvIn, std::vector<std::string> &csvVect)
{
    int quoteCount(0);
    char ch;
    std::string temp;

    while(csvIn.get(ch))
    {
        if(ch == '"')
        {
            quoteCount++;
        }

        if((ch == ',' && (quoteCount%2 == 1)) || (ch != ','))
        {
            temp += ch;
        }
        else if(ch == ',' && (quoteCount%2 == 0))
        {
            csvVect.push_back(temp);
            temp.clear();
        }
    }
    csvVect.push_back(temp);
}

#endif
