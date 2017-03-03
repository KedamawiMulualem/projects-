#include "twoDshapes.h"



twoDshapes::twoDshapes():cx(0),cy(0),name("unknown")
{
}



twoDshapes::~twoDshapes()
{
}
istream& operator >> (istream &in, twoDshapes&f)
{
	return in;
}