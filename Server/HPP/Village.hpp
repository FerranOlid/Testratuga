#ifndef VILLAGE_HPP
#define VILLAGE_HPP

#include "Node.hpp"
#include <string>
#include "Empire.hpp"

class Village : public Node {
	public:
	string Name;
	Empire E;
}


#endif
