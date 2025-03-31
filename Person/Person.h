#pragma once
#include <string>
class Person {
public:
	enum { male, female };
	Person() = default;
	Person(int id,std::string name,int gender):m_id(id),m_name(name),m_gender(gender){}
	Person(const Person& p);
	~Person() = default;

	int getId() const { return m_id; }
	std::string getName() const { return m_name; }
	int getGender() const{ return m_gender; }
private:
	int m_id;
	std::string m_name;
	int m_gender;
};
