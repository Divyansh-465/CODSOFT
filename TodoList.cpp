#include <iostream>
#include <string>
#include <vector>

using namespace std;

// A structure about how the task is defined
struct Task {
    string description;
    bool completed;

    Task(const string& desc) : description(desc), completed(false) {}
};

// Add task
void AddTask(vector<Task>& tasks, const string& description) {
    Task newTask(description);
    tasks.push_back(newTask);
    cout << "Task added: " << description << endl;
}

// View Task
void ViewTasks(const vector<Task>& tasks) {
    cout << "Tasks:" << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". ";
        if (tasks[i].completed) {
            cout << "[Completed] ";
        } else {
            cout << "[Pending] ";
        }
        cout << tasks[i].description << endl;
    }
}

// To mark the task complete
void MarkTaskAsCompleted(vector<Task>& tasks, int taskIndex) {
    if (taskIndex >= 1 && taskIndex <= static_cast<int>(tasks.size())) {
        tasks[taskIndex - 1].completed = true;
        cout << "Task marked as completed: " << tasks[taskIndex - 1].description << endl;
    } else {
        cout << "Invalid task index!" << endl;
    }
}

// Removing task
void RemoveTask(vector<Task>& tasks, int taskIndex) {
    if (taskIndex >= 1 && taskIndex <= static_cast<int>(tasks.size())) {
        cout << "Task removed: " << tasks[taskIndex - 1].description << endl;
        tasks.erase(tasks.begin() + taskIndex - 1);
    } else {
        cout << "Invalid task index!" << endl;
    }
}

int main() {
    vector<Task> tasks;

    while (true) {
        cout << "\nTo-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            cin.ignore();
            cout << "Enter task description: ";
            string description;
            getline(cin, description);
            AddTask(tasks, description);
        } else if (choice == 2) {
            ViewTasks(tasks);
        } else if (choice == 3) {
            cout << "Enter the task number to mark as completed: ";
            int taskIndex;
            cin >> taskIndex;
            MarkTaskAsCompleted(tasks, taskIndex);
        } else if (choice == 4) {
            cout << "Enter the task number to remove: ";
            int taskIndex;
            cin >> taskIndex;
            RemoveTask(tasks, taskIndex);
        } else if (choice == 5) {
            cout << "Exiting the program." << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}