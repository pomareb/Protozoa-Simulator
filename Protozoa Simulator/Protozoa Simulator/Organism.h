#pragma once
#include <vector>
#include <string>

#include "environment.h"

class Organism
{
	std::map <std::string, elems> constitution;
	std::vector<reproductionType> reproductionMode;
	std::vector<locomotionType> locomotionMode;
	digestionType digestionMode;
	std::vector<elems> needs;
	std::vector<std::string> DNA;
	float energie;
	float hydratation;

public:

	//std::vector<funcPtr>;
	Organism();
	~Organism();
};

