#pragma once
#include <vector>
#include <map>
#include <list>
#include <string>

#include "DNAInterpretor.h"
#include "Organism.h"

struct elems
{
	unsigned int id;
	float concentration;
};

class Environment
{
	std::vector<DNAInterpretor> DNAIList;
	std::map<int, elems> listElems;
	std::map<int, std::vector<elems>> maps;
public:
	Environment();
	~Environment();
};
