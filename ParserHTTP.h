#ifndef _ParserHTTP
#define _ParserHTTP
#endif

#ifndef _RequestHeader
#include "RequestHeader.h"
#endif

#include<string>

/**
 * \class ParserHTTP
 * Classe responsável pela interpretação do cabeçalho do HTTP Request
 */
class ParserHTTP
{
	public:

		/*

		 O formato pode ser encontrado em:
			http://www.w3.org/Protocols/rfc2616/rfc2616-sec5.html
			http://www.w3.org/Protocols/rfc2616/rfc2616.html
		*/


		/**
		 * Método que realiza a interpretação do cabeçalho do HTTP Request
		 * \param header Texto contendo o cabeçalho do HTTP Request
		 */
		void execute(std::string header)
		{
			RequestHeader* requesterHeader = new RequestHeader();

			/*
			Primeira linha:

				Request-Line = Method SP Request-URI SP HTTP-Version CRLF

				Method = POST | GET (Apenas para o trabalho. Outros métodos existem, mas não serão úteis para o trabalho)

				SP = espaço

				CRLF = quebra de linha = \r\n

				Request-URI = Request-URI    = "*" | absoluteURI | abs_path | authority

				HTTP-Version = No nosso caso HTTP/1.1
			 */
			requestLine(requesterHeader, header);

		}

		/**
		 *  \param header Texto contendo o cabeçalho do HTTP Request
		 *  \return huehueehufhrur
		 */
		int requestLine(RequestHeader* requesterHeader, std::string header)
		{
			int i = 0;

			std::string aux;

			int j;
			//pegando o campo method
			for(j = 0; header[i] != ' '; i++, j++)
			{
				aux[j] = header[i];
			}
			aux[j] = '\0';

			requesterHeader->insert("method", aux);

			return i;
		}
};
