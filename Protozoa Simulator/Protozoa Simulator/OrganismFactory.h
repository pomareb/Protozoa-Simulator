#pragma once
#include <string>
#include "Environment.h"
#include "Organism.h"

class OrganismFactory
{
public:
	OrganismFactory(Environment& env);
	~OrganismFactory();

	static	Organism&	createOrganism(std::string& DNA);
};