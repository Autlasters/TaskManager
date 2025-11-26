#pragma once
#include<string>
enum enumPriority { NoPriority, Low, Medium, High };
enum enumStatus { Done, InProgress, UnDone };

class Task {
protected:
	std::string Name;
	std::string Description;
	enumPriority Priority;
	enumStatus Status;
public:
	Task();
	Task(const std::string& Name, const std::string& newDescription);
	void setName(const std::string& Name);
	void setDescription(const std::string& Description);
	void setPriority(const enumPriority Priority);
	void setStatus(const enumStatus Status);
	std::string getName() const;
	std::string getDescription() const;
	std::string getPriority() const;
	std::string getStatus() const;
	void printTask() const;
};
