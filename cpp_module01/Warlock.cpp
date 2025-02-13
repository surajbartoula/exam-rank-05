#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title): _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
	for (std::map<std::string, ASpell*>::iterator it = spells.begin(); it != spells.end(); ++it)
		delete it->second;
	spells.clear();
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

const std::string& Warlock::getName() const {
	return (_name);
}

const std::string& Warlock::getTitle() const {
	return (_title);
}

void Warlock::setTitle(const std::string& title) {
	_title = title;
}

void Warlock::learnSpell(ASpell *spell) {
	if (spell) {
		if (spells.find(spell->getName()) != spells.end())
			delete spells[spell->getName()];
		spells[spell->getName()] = spell->clone();
	}
}

void Warlock::forgetSpell(const std::string& spellName) {
	std::map<std::string, ASpell*>::iterator it = spells.find(spellName);
	if (it != spells.end()) {
		delete it->second;
		spells.erase(it);
	}
}

void Warlock::launchSpell(const std::string& spellName, const ATarget& target) {
	std::map<std::string, ASpell*>::iterator it = spells.find(spellName);
	if (it != spells.end())
		it->second->launch(target);
}
