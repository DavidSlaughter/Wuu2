#pragma once

#include <iostream>
#include <vector>
#include <random>

class Adjectives
{
private:
	// Turn adjectives on/off, set chance.
	bool SetAdjectivesOn;
	
	// Containers
	std::vector<std::string> AdjectiveNames{};
	std::vector<int> AdjectiveWeights{};

	// Container creation functions
	void CreateAdjectives();

public:
	// Constructors & Destructors
	Adjectives();
	~Adjectives();

	// Distributions
	std::discrete_distribution<int> AdjectiveProbabilityDistribution{};
	std::uniform_int_distribution<int> adjectiveRoll{1,100};

	// Adjective Chance
	int adjectiveChance;

	// Accessors
	bool AdjectivesOn();
	const std::string GetAdjectiveName(int index) const;
};