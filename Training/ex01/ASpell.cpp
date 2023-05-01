#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string const &Name, std::string const &Effects)
{
	this->name = Name;
	this->effects = Effects;
}

ASpell::ASpell(ASpell const &other)
{
	*this = other;
}

ASpell &ASpell::operator=(ASpell const &other)
{
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}


ASpell::~ASpell() {}

std::string const &ASpell::getName() const
{
	return (this->name);
}

std::string const &ASpell::getEffects() const
{
	return (this->effects);
}

void ASpell::launch(ATarget const &atarget_ref) const
{
	atarget_ref.getHitBySpell(*this);
}
