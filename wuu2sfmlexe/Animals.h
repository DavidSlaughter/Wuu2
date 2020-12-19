#pragma once

#include <iostream>
#include <vector>
#include <random>

class Animals
{
private:
	// Containers
	std::vector<std::string> AnimalNames{};
	std::vector<int> AnimalWeights{};

	// Container creation functions
	void CreateAnimals();

public:
	// Constructors & Destructors
	Animals();
	~Animals();

	// Distributions
	std::discrete_distribution<int> AnimalProbabilityDistribution;

	// Accessors
	const std::string GetAnimalName(int index) const;

};