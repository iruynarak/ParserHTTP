
//http://www.cplusplus.com/reference/map/map/
//http://kengine.sourceforge.net/tutorial/g/stdmap-eng.htm

#include <map>
#include<string>


#ifndef _RequestHeader
#define _RequestHeader
#endif

typedef std::map< std::string , std::string> Map;

class RequestHeader
{
	public:
		Map headerFields;

		RequestHeader();

		void insert(std::string key, std::string value)
		{
			headerFields.insert(key, value);
		}
};
