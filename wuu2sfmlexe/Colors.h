#pragma once

#include <iostream>
#include <vector>
#include <random>

class Colors
{
private:
	// Containers
	std::vector<std::string> ColorNames{};
	std::vector<int> ColorWeights{};

	// Container creation functions
	void CreateColors();

public:
	// Constructors & Destructors
	Colors();
	~Colors();

	// Distributions
	std::discrete_distribution<int> ColorProbabilityDistribution;

	// Accessors
	const std::string GetColorName(int index) const;

};