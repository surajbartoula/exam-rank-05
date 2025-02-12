#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
protected:
	std::string _type;
public:
	ATarget();
	ATarget(const std::string& type);
	ATarget(const ATarget& old);
	ATarget& operator=(const ATarget& rhs);
	virtual ~ATarget();
	const std::string& getType() const;
	virtual ATarget* clone() const = 0;
	void getHitBySpell(const ASpell& aspell) const;
};