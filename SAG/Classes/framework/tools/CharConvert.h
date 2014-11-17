#include <string>

class CharConvert
{
public:
    static std::string u2a(const char *inbuf);

    static std::string a2u(const char *inbuf);

private:
    static int code_convert(const char *from_charset, const char *to_charset, const char *inbuf, size_t inlen, char *outbuf, size_t outlen);
};