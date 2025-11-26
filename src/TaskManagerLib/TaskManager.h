#pragma once
#include<string>
#include<vector>
#include<memory>
#include<fstream>
#include"../TaskLib/Task.h"

class TaskManager {
private:
	std::string filePath;
	std::unique_ptr<Task> taskOfVector = std::make_unique<Task>();
	std::vector<std::unique_ptr<Task>> Tasks;
public:
	void setPathToFile(const std::string& path);
	void addTask();
	void deleteTask();
	void setTaskName();
	void setTaskDescription();
	void setTaskPriority();
	void setTaskStatus();
	void editTaskName();
	void editTaskDescription();
	void editTaskPriority();
	void editTaskStatus();
	void showAll() const;
	void showCompleted() const;
	void showInProgress() const;
	void showUnDone() const;
	void loadFromFile();
	void saveToFile() const;
};