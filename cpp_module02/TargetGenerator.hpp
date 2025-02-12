#pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator {
private:
	std::map<std::string, ATarget*> targets;
	TargetGenerator(const TargetGenerator& old);
	TargetGenerator& operator=(const TargetGenerator& rhs);
public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget* target);
	void forgetTargetType(const std::string& type);
	ATarget* createTarget(const std::string& type);
};