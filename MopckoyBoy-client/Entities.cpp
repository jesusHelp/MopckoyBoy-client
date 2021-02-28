#include "Entities.h"

Kletka::Kletka(string ID, string playername, double x, double y)
{
	this->ID = ID;
	this->playername = playername;
	this->x = x;
	this->y = y;
}

void Kletka::setObstrelen(bool obstrelen)
{
	this->obstrelen = obstrelen;
}

void Kletka::setBusy(bool busy)
{
	this->busy = busy;
}

void Kletka::setShipID(string ShipID)
{
	this->ShipID = ShipID;
}

string Kletka::getId()
{
	return this->ID;
}

string Kletka::getShipID()
{
	return this->ShipID;
}

double Kletka::getX()
{
	return this->x;
}

double Kletka::getY()
{
	return this->y;
}

bool Kletka::getObstrelen()
{
	return this->obstrelen;
}

bool Kletka::getBusy()
{
	return this->busy;
}

Kletka::~Kletka()
{
	//бля буду, он для чего-то нужен, но я забыл
}



Ship_1x::Ship_1x(string ID)
{
	this->ID = ID;
}

void Ship_1x::setAlive(bool alive)
{
	this->alive = alive;
}


void Ship_2x::setHealth(int health)
{
	this->health = health;
}