#pragma once

// I also decided that this would probably be initialized through static data or from an 
// excel sheet so this constructor model works.. we could certainly have done the same 
// through normal accessors
class Player;
#include <string>


class Card
{
public:
	Card( int manaCost, int damage, int heal, int cardsDrawn, int manaEarned, const char* name );
	~Card();

	int 	GetCost() const { return m_manaCost; }
	int 	GetDamage() const { return m_damage; }
	int 	GetHealing() const { return m_heal; }
	int 	GetNumToDraw() const { return m_numCardsToDraw; }
	int 	GetManaEarned() const { return m_manaEarned; }

	void	PrintStats( int index = -1 ) const;
	void	PrintSimpleStats( int index = -1 ) const;
	//virtual void	Play() {}

	void	PlayCard( Player& personPlayingCard, Player& opponent ) const;

public:
	int 		m_manaCost;
	int 		m_damage;
	int 		m_heal; 
	int 		m_numCardsToDraw;
	int 		m_manaEarned;
	std::string m_name;
};

/*
class Card_a
{
};*/