#pragma once
#include <string>

using namespace std;

class Kletka
{
private:
	string ID, ShipID, playername;
	double x, y;
	bool obstrelen = false,
		busy = false;

public:
	Kletka(string ID, string playername, double x, double y);
	void setObstrelen(bool obstrelen);
	void setBusy(bool busy);
	void setShipID(string ShipID);
	string getId();
	string getShipID();
	double getX(); double getY();
	bool getObstrelen();
	bool getBusy();
	~Kletka();
};

class Ship_1x //Одноклеточный
{
protected:
	string ID;
	bool alive = true;
public:
	Ship_1x(string ID);
	void setAlive(bool alive);
};

class Ship_2x : public Ship_1x //Двуклеточный
{
private:
	int health = 2;
public:
	using Ship_1x::Ship_1x;
	void setHealth(int health);
};

class Ship_3x : public Ship_2x //Трёхклеточный
{
private:
	int health = 3;
public:
	using Ship_2x::Ship_2x;
};

class Ship_4x : public Ship_2x //Четырёхклеточный
{
private:
	int health = 4;
public:
	using Ship_2x::Ship_2x;
};