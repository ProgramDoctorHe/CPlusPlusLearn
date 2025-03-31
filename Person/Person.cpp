#include "Person.h"

Person::Person(const Person& p) {
	m_id = p.m_id;
	m_name = p.m_name;
	m_gender = p.m_gender;
}