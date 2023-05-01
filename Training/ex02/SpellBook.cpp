#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook()
{
	std::map<std::string, ASpell *>::iterator it1 = this->arr_spell.begin();
	std::map<std::string, ASpell *>::iterator it2 = this->arr_spell.end();

	while (it1 != it2)
	{
		delete it1->second;
		++it1;
	}
	this->arr_spell.clear();
}

void SpellBook::learnSpell(ASpell *spell_ptr)
{
	if (spell_ptr)
		this->arr_spell.insert(std::pair<std::string, ASpell*>(spell_ptr->getName(), spell_ptr->clone()));
}

void SpellBook::forgetSpell(std::string const &name)
{
	std::map<std::string, ASpell *>::iterator it = arr_spell.find(name);
	if (it != arr_spell.end())
		delete it->second;
	arr_spell.erase(name);
}

ASpell* SpellBook::createSpell(std::string const &spell_name)
{
	std::map<std::string, ASpell *>::iterator it = arr_spell.find(spell_name);
	if (it != arr_spell.end())
		return arr_spell[spell_name];
	return NULL;
}
