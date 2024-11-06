// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract SimpleTodo {
    struct Todo {
        string task;
        bool completed;
    }

    Todo[] public todos;

    function add(string memory task) public {
        todos.push(Todo({
            task: task,
            completed: false
        }));
    }

    function get(uint index) public view returns (string memory task, bool completed) {
        Todo memory todo = todos[index];
        return (todo.task, todo.completed);
    }

    function complete(uint index) public {
        todos[index].completed = true;
    }

    function getAll() public view returns (Todo[] memory) {
        return todos;
    }
}
