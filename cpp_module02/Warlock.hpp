#pragma once

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
private:
	std::string _name;
	std::string _title;
	SpellBook spellBook;

	Warlock(void);
	Warlock(const Warlock& old);
	Warlock& operator=(const Warlock& rhs);
public:
	Warlock(const std::string& name, const std::string& title);
	~Warlock();
	void introduce() const;
	const std::string& getName() const;
	const std::string& getTitle() const;
	void setTitle(const std::string& title);

	void learnSpell(ASpell *aspell);
	void forgetSpell(const std::string &aspellName);
	void launchSpell(const std::string &aspellName, const ATarget& atarget);
};