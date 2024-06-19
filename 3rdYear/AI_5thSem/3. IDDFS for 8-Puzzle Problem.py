# Function to find the blank tile in the puzzle
def find_blank(puzzle):
    for i in range(len(puzzle)):
        for j in range(len(puzzle[i])):
            if puzzle[i][j] == 0:
                return i, j

# Function to check if the puzzle is solved
def is_goal(puzzle):
    goal_state = [[1, 2, 3], [4, 5, 6], [7, 8, 0]]
    return puzzle == goal_state

# Function to move tiles in the puzzle
def move_tile(puzzle, direction):
    blank_row, blank_col = find_blank(puzzle)
    new_puzzle = [row[:] for row in puzzle]  # Create a copy of the puzzle

    if direction == 'up' and blank_row > 0:
        new_puzzle[blank_row][blank_col], new_puzzle[blank_row -
                                                     1][blank_col] = new_puzzle[blank_row - 1][blank_col], new_puzzle[blank_row][blank_col]
    elif direction == 'down' and blank_row < 2:
        new_puzzle[blank_row][blank_col], new_puzzle[blank_row +
                                                     1][blank_col] = new_puzzle[blank_row + 1][blank_col], new_puzzle[blank_row][blank_col]
    elif direction == 'left' and blank_col > 0:
        new_puzzle[blank_row][blank_col], new_puzzle[blank_row][blank_col -
                                                                1] = new_puzzle[blank_row][blank_col - 1], new_puzzle[blank_row][blank_col]
    elif direction == 'right' and blank_col < 2:
        new_puzzle[blank_row][blank_col], new_puzzle[blank_row][blank_col +
                                                                1] = new_puzzle[blank_row][blank_col + 1], new_puzzle[blank_row][blank_col]

    return new_puzzle

# Function to print the puzzle state


def print_puzzle(puzzle):
    for row in puzzle:
        print(row)
    print()

# Iterative Deepening Search
def iterative_deepening_search(start_state):
    depth_limit = 4  # Set the fixed depth limit

    print(f"Checking depth: {depth_limit}")
    result = depth_limited_search(start_state, depth_limit)

    if result is not None:
        return result
    else:
        print("No solution found within the depth limit.")
        return None

# Depth-Limited Search
def depth_limited_search(state, depth_limit):
    return recursive_dls(state, depth_limit)


def recursive_dls(state, depth_limit):
    if is_goal(state):
        return state
    elif depth_limit == 0:
        return None
    else:
        for direction in ['up', 'down', 'left', 'right']:
            new_state = move_tile(state, direction)
            print(f"Moving {direction}:")
            print_puzzle(new_state)
            result = recursive_dls(new_state, depth_limit - 1)
            if result is not None:
                return result
        return None

# Function to take user input for the initial puzzle state
def get_user_input():
    print("Enter the initial puzzle state (3x3 matrix, use 0 for the blank tile):")
    puzzle = []
    for i in range(3):
        row = []
        for j in range(3):
            value = int(
                input(f"Enter value for position ({i + 1}, {j + 1}): "))
            row.append(value)
        puzzle.append(row)
    return puzzle


# Get user input for the initial puzzle state
initial_puzzle = get_user_input()

# Solve the puzzle using Iterative Deepening Search with a fixed depth limit of 4
solution = iterative_deepening_search(initial_puzzle)
if solution is not None:
    print("Solution found:")
    for row in solution:
        print(row)
