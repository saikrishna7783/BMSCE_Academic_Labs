class State:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __str__(self):
        return f"({self.x}, {self.y})"

def is_valid(state, capacity1, capacity2):
    return state.x >= 0 and state.y >= 0 and state.x <= capacity1 and state.y <= capacity2

def dfs(capacity1, capacity2, target):
    stack = [(State(0, 0), [])]
    visited = set()

    while stack:
        state, path = stack.pop()
        if (state.x, state.y) in visited:
            continue
        visited.add((state.x, state.y))
        path.append(str(state))

        if state.x == target or state.y == target:
            return path

        # Fill jug1
        if is_valid(State(capacity1, state.y), capacity1, capacity2):
            stack.append((State(capacity1, state.y), path[:]))
        # Fill jug2
        if is_valid(State(state.x, capacity2), capacity1, capacity2):
            stack.append((State(state.x, capacity2), path[:]))
        # Empty jug1
        if is_valid(State(0, state.y), capacity1, capacity2):
            stack.append((State(0, state.y), path[:]))
        # Empty jug2
        if is_valid(State(state.x, 0), capacity1, capacity2):
            stack.append((State(state.x, 0), path[:]))
        # Pour from jug1 to jug2
        if is_valid(State(state.x - min(state.x, capacity2 - state.y), state.y + min(state.x, capacity2 - state.y)), capacity1, capacity2):
            stack.append((State(state.x - min(state.x, capacity2 - state.y), state.y + min(state.x, capacity2 - state.y)), path[:]))
        # Pour from jug2 to jug1
        if is_valid(State(state.x + min(state.y, capacity1 - state.x), state.y - min(state.y, capacity1 - state.x)), capacity1, capacity2):
            stack.append((State(state.x + min(state.y, capacity1 - state.x), state.y - min(state.y, capacity1 - state.x)), path[:]))

    return None

capacity1 = int(input("Enter the capacity of the first jug: "))
capacity2 = int(input("Enter the capacity of the second jug: "))
target = int(input("Enter the target amount of water: "))

path = dfs(capacity1, capacity2, target)
if path is None:
    print("No solution found.")
else:
    print("The sequence of states to reach the target is:")
    print(" -> ".join(path))
