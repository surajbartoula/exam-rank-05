#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const std::string& type): _type(type){}

ATarget::ATarget(const ATarget& old) {
	*this = old;
}

ATarget &ATarget::operator=(const ATarget& rhs) {
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}

ATarget::~ATarget() {}

const std::string& ATarget::getType() const {
	return (_type);
}

void ATarget::getHitBySpell(const ASpell& aspell) const {
	std::cout << _type << " has been " << aspell.getEffects() << "!" << std::endl;
}
