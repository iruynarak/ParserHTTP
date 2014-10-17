#ifndef _RequestHeader
#define _RequestHeader
#endif

//http://www.cplusplus.com/reference/map/map/
//http://kengine.sourceforge.net/tutorial/g/stdmap-eng.htm
#include <map>

//string
#include <string>

using namespace std;

typedef map< string , string> Map;

class RequestHeader
{
	public:

		/// Para esta implementação o método pode ser GET ou POST
		string method;

		///
		string requestURI;

		/// Aonde serão guardados os parâmetros do request através de uma relação chave-valor(parâmetro-valor)
		Map headerFields;

		///
		string messageBody;

		/// Construtor
		RequestHeader(string method, string requestURI)
		{
			this->requestURI = requestURI;
			this->method =  method;
		}

		void insert(string key, string value)
		{
			headerFields.insert(key, value);
		}

		void getMessageBody(string messageBody)
		{
			this->messageBody = messageBody;
		}
};
