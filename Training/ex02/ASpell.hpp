#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
protected:
	std::string name;
	std::string effects;
public:
	ASpell();
	ASpell(std::string const &Name, std::string const &Effects);
	ASpell(ASpell const &other);
	ASpell &operator=(ASpell const &other);
	virtual ~ASpell();

	std::string const &getName() const;
	std::string const &getEffects() const;

	void launch(ATarget const &atarget_ref) const;

	virtual ASpell *clone() const = 0;
};


#endif
