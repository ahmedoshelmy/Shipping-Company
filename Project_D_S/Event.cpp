#include "Event.h"

void Event::setEventTime(Time evt)
{
	this->event_time.sethour(evt.gethour());
	this->event_time.setminute(evt.getminute());
}

void Event::setID(int id)
{
	this->ID = id;
}

Time Event::getEventTime()
{
	return this->event_time;
}

int Event::getID()
{
	return this->ID;
}
