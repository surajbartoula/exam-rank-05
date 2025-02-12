#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell {
protected:
	std::string _name;
	std::string _effects;
public:
	ASpell();
	ASpell(const std::string& name, const std::string& effects);
	ASpell(const ASpell& old);
	ASpell &operator=(const ASpell& rhs);
	virtual ~ASpell();
	const std::string& getName() const;
	const std::string& getEffects() const;
	virtual ASpell* clone() const = 0;
	void launch(const ATarget& atarget) const;
};
