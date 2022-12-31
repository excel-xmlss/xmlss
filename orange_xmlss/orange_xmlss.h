


#ifndef __ORANGE_XMLSS_H__
#define __ORANGE_XMLSS_H__


#include <string>
#include <map>
#include <list>
#include <stdarg.h>   //TODO : remove this
#include <string.h>   //TODO : remove this
#include <time.h>     //TODO : remove this


namespace orage_xmlss{


inline std::string convert_column_to_string(unsigned int column){
    std::list<unsigned int> remainder_list;
    while(column>0){
        column--;
        unsigned int remainder = column % 26;
        column = column / 26;
        remainder_list.push_back(remainder);

    }
    std::string return_value;
    for(auto it = remainder_list.rbegin(); it != remainder_list.rend(); it++){
        char ch = 'A' + (char)*it;
        return_value += ch;
    }
    return return_value;
}

}

#endif