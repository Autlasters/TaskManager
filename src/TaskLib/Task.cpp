#include"Task.h"
#include<iostream>

Task::Task(const std::string& Name, const std::string& newDescription) : Name(Name),
Description(newDescription),
Priority(enumPriority::NoPriority),
Status(enumStatus::UnDone)
{
}

Task::Task() : Name(""), Description(""), Priority(enumPriority::NoPriority), Status(enumStatus::UnDone) {}

void Task::setName(const std::string& Name) {
	this->Name = Name;
}

void Task::setDescription(const std::string& Description) {
	this->Description = Description;
}

void Task::setPriority(const enumPriority Priority) {
	this->Priority = Priority;
}

void Task::setStatus(const enumStatus Status) {
	this->Status = Status;
}

std::string Task::getStatus() const {
	switch (Status) {
	case InProgress:
		return "InProgress";
	case Done:
		return "Done";
	case UnDone:
		return "UnDone";
	default:
		return "Unknown";
	}
}

std::string Task::getName() const {
	return Name;
}

std::string Task::getDescription() const {
	return Description;
}

std::string Task::getPriority() const {
	switch (Priority) {
	case NoPriority:
		return "NoPriority";
	case Low:
		return "Low";
	case Medium:
		return "Medium";
	case High:
		return "High";
	default:
		return "Unknown";
	}
}

void Task::printTask() const {
	std::cout << "Task Name: " << this->Name << std::endl;
	std::cout << "Description: " << this->Description << std::endl;
	std::cout << "Priority: " << getPriority() << std::endl;
	std::cout << "Status: " << getStatus() << std::endl;
}
