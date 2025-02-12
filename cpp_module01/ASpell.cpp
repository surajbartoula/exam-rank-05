#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const std::string& name, const std::string& effects): _name(name), _effects(effects) {}

ASpell::ASpell(const ASpell& old) {
	*this = old;
}

ASpell &ASpell::operator=(const ASpell& rhs) {
	if (this != &rhs)
	{
		_name = rhs._name;
		_effects = rhs._effects;
	}
	return (*this);
}

ASpell::~ASpell() {}

const std::string& ASpell::getName() const {
	return (_name);
}

const std::string& ASpell::getEffects() const {
	return (_effects);
}

void ASpell::launch(const ATarget& atarget) const {
	atarget.getHitBySpell(*this);
}
