# Online Voting System

This is a simple command-line online voting system written in C. The system allows voters to cast their votes, administrators to manage voters and view vote counts, and anyone to view the current winner.

## Features

1. **Voter Registration**: Add new voters with their name, Aadhar number, and date of birth.
2. **Voting**: Voters can cast their vote to one of the five candidates.
3. **Admin Panel**: The admin can view the vote count, list of voters, and voters who have not yet voted.
4. **Vote Count**: Displays the current vote count for each candidate.
5. **Winner Announcement**: Displays the current winner based on the votes.

## Candidates

- **Mamata Banerjee** - Symbol: Fish
- **Deepa Dasmunsi** - Symbol: Boat
- **Protima Rajak** - Symbol: Motorcycle
- **Joydeb Halder** - Symbol: Broomstick
- **Kartik Chandra Ghosh** - Symbol: Wheel

## How to Use

### Voter

1. Run the program.
2. Enter `1` to log into the main voting log.
3. Enter `1` to cast your vote.
4. Enter your Aadhar ID.
5. If the Aadhar ID matches a registered voter who hasn't voted yet, you can cast your vote by entering the number corresponding to your chosen candidate.

### Admin

1. Run the program.
2. Enter `1` to log into the main voting log.
3. Enter `2` to access the admin panel.
4. Enter the admin password (`3692`).
5. Choose from the following options:
   - Enter `1` to see the vote count.
   - Enter `2` to see the list of all voters.
   - Enter `3` to see the list of voters who haven't voted yet.
   - Enter `4` to register a new voter.
   - Enter `5` to exit the admin panel.

### Viewing the Winner

1. Run the program.
2. Enter `1` to log into the main voting log.
3. Enter `3` to view the current winner based on the votes.

## Code Structure

- **main()**: The entry point of the program. Initializes the list of voters and provides the main menu for the user.
- **main_logs()**: Provides the main menu options for voting, accessing the admin panel, viewing the winner, and exiting the portal.
- **voter_insert()**: Handles voter login and allows voters to cast their votes if they haven't already voted.
- **voting()**: Displays the list of candidates and allows the voter to cast their vote.
- **admin()**: Provides the admin panel functionalities.
- **votecount()**: Displays the current vote count for each candidate.
- **winner()**: Determines and displays the current winner based on the votes.
- **stop()**: Displays a message when a voter enters incorrect credentials three times in a row.
- **details()**: Adds a new voter to the list.
- **traverse()**: Displays the list of all voters.
- **voters()**: Displays the list of voters who haven't voted yet.
- **new()**: Prompts for new voter details and adds them to the list.

## Dependencies

This program requires the `windows.h` library for the `Sleep` function. It also includes commented-out lines for `curses.h` which can be used for more advanced console handling, though it is not used in the current implementation.

## Running the Program

To compile and run the program, use a C compiler like `gcc`:

```bash
gcc voting_system.c -o voting_system
./voting_system
