#pragma once

#include <iostream>
#include <string>
#include <map>
#include "ATarget.hpp"
#include "ATarget.hpp"

class TargetGenerator {
private:
	std::map<std::string, ATarget*> targets;
	TargetGenerator(const TargetGenerator& old);
	TargetGenerator& operator=(const TargetGenerator& rhs);
public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget *target);
	void forgetTargetType(const std::string& type);
	ATarget* createTarget(const std::string& type);
};