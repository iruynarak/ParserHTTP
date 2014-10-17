#ifndef _RequestHeader
#define _RequestHeader
#endif

//http://www.cplusplus.com/reference/map/map/
//http://kengine.sourceforge.net/tutorial/g/stdmap-eng.htm
#include <map>

//std::string
#include <string>

typedef std::map< std::string , std::string> Map;

class RequestHeader
{
	public:

		/// Para esta implementação o método pode ser GET ou POST
		std::string method;

		///
		std::string requestURI;

		/// Aonde serão guardados os parâmetros do request através de uma relação chave-valor(parâmetro-valor)
		Map headerFields;

		///
		std::string messageBody;

		/// Construtor
		RequestHeader(std::string method, std::string requestURI)
		{
			this->requestURI = requestURI;
			this->method =  method;
		}

		void insert(std::string key, std::string value)
		{
			headerFields.insert(key, value);
		}

		void getMessageBody(std::string messageBody)
		{
			this->messageBody = messageBody;
		}
};
