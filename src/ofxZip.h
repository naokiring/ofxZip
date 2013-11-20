#pragma once

#include <vector>

class ofxZip
{
public:
	static std::vector< unsigned char > compress( const std::vector< unsigned char > & src, int level = 0 );
	static std::vector< unsigned char > uncompress( const std::vector< unsigned char > & src );
	
};

