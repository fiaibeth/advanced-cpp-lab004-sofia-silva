#include "Person.h"

// TODO: Implement default constructor and parameterized constructor with validation.
Person::Person() : name_(""), id_(""), email_("") {}

// TODO: Implement default constructor and parameterized constructor with validation.
Person::Person(std::string name, std::string id, std::string email)
    : name_(name), id_(id), email_(email) {}

// TODO: Implement getName and setName methods.
const std::string &Person::getName() const noexcept { return name_; }
void Person::setName(const std::string &name) { name_ = name; }

// TODO: Implement getId and setId methods.
const std::string &Person::getId() const noexcept { return id_; }
void Person::setId(const std::string &id) { id_ = id; }

// TODO: Implement getEmail and setEmail methods.
const std::string &Person::getEmail() const noexcept { return email_; }
void Person::setEmail(const std::string &email) { email_ = email; }

std::ostream &operator<<(std::ostream &os, const Person &person)
{
    os << person.getName() << " (" << person.getId() << ")";
    return os;
}
