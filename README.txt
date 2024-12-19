Forge Template Storage & Fitness Application

IMPORTANT NOTES BEFORE WE BEGIN:

- The password for the test account I created for you is 1. I also encourage you to create your own account afterwards to see all the functionality

- IF YOU'D LIKE TO SEE THE DATABASE IN ACTION, DOWNLOAD "DB BROWSER FOR SQLITE" IF NOT, YOU CAN STILL USE IT, BUT CANT SEE BEHIND THE SCENES. I HIGHLY 
RECCOMEND YOU DO SO YOU CAN BETTER UNDERSTAND THE APPLICATION. IF YOU DO CHOOSE TO, STEPS ARE INCLUDED BELOW UNDER THE SECTION TITLED "DEPENDENCIES"

- The application should run regularly, nothing special was added on to it. The only thing was SQLite, but you don't need to download anything for that either. This
README is mostly just for a description of the program, and if someone outside of the TA grading it wants to run it from my personal github they'd be able to. But for you reading
this, (I am talking about you, the TA) just run it normally, there's nothing special about it.



Description:

Forge is a desktop fitness application designed to help users plan, track, and manage their workouts. Users can create customized workout templates for weightlifting and cardio exercises, 
calculate their BMI and caloric needs, and navigate through fitness-related resources such as terminology, tips, and goals.

The system dynamically loads user-specific templates and exercises, providing an intuitive and responsive user interface for managing workout plans. Forge leverages a local SQLite database for storing user data and workout templates.



Features:
User Authentication: Add, log in, or delete user accounts securely.

Dynamic Workout Templates: Create and manage weightlifting or cardio workout templates.

Exercise Management: Add exercises to templates and update sets, reps, and weight values.

Calorie Calculator: Calculate caloric needs based on user inputs like age, height, weight, gender, and activity level.

BMI Calculator: Compute BMI using user-provided height and weight.

Informational Pages: Access fitness-related tips, terminology, and workout goals.



Dependencies:
The following external libraries and tools are required to build and run Forge:

Qt Framework (Qt 5 or Qt 6):

Qt Core
Qt Widgets
Qt SQL (for database support)
SQLite:

The project uses SQLite as its database for persistent storage.
C++ Compiler:

A compiler that supports C++11 or higher.
Development Environment:

Recommended: Qt Creator (comes with Qt installation) for building and running the application.
Setup Instructions
1. Install Qt Framework
Download and install the Qt Framework from the official website: Qt Download.
During installation, ensure the following modules are selected:
Qt Widgets
Qt SQL
Qt Creator IDE (optional but recommended).

2. Clone or Download the Project
Clone the repository using Git:
bash
Copy code
git clone https://github.com/amroomargit/forge.git
Or download the project files as a .zip and extract them.

3. Open the Project in Qt Creator
Launch Qt Creator.
Open the project by selecting the Forge.pro file (if provided) or the main main.cpp file.

Building the Project:
1. Configure the Project
In Qt Creator, configure the project for your desired build kit (e.g., Desktop Qt 6.5.2 MinGW 64-bit).

2. Build the Project
Click on the Build button (or press Ctrl+B).
Ensure there are no build errors or missing dependencies.

3. Run the Project
Click on the Run button (or press Ctrl+R) to launch the application.



DBBrowser for SQLite Download Instructions:

1. Go to: https://sqlitebrowser.org/blog/version-3-13-1-released/

2. Download latest version for your system

3. After selecting the appropriate OS version:
Windows: Download the Installer executable (.exe) file and run it to start the installation.
macOS: Download the .dmg file, open it, and drag the DB Browser for SQLite app to your Applications folder.
Linux: Follow the installation instructions specific to your distribution (e.g., using apt for Ubuntu, dnf for Fedora, etc.) or download the generic .tar.gz file.

4. Install the Application
Windows: After downloading the installer, double-click the .exe file and follow the on-screen instructions to complete the installation.
macOS: Once you drag the app to your Applications folder, the installation is complete.
Linux: Use the terminal to extract and install the package as per the instructions, or if using a package manager, simply install the package (e.g., sudo apt install sqlitebrowser).

5. Launch DB Browser for SQLite
After installation, you can launch the application:
Windows: You can find it in the Start menu.
macOS: Open the Applications folder and click on the DB Browser for SQLite icon.
Linux: Use your application launcher or terminal to run the program.

6. To load the database, open the DB Browser for SQLite application you just downloaded, and click "Open Database" in the top left of your screen. From there, navigate to the folder with
my project in it. Once inside of the directory called "project-deliverable-2-amro-s-team" go into the following path: code\build\Desktop_Qt_6_8_0_MinGW_64_bit-Debug\users the file called
users.db is the one you want.

7. In the top left again, you'll notice 4 tabs, click on the one called "Browse Data". From there, there is a little dropdown menu next to a title "tables:". From there, you can
click the table you want to navigate through the tables (The tables and what they do are described below in the next section).

8. IMPORTANT NOTE: If you make a change in the program and want to see it reflected in the DB Browser, you have to click the refresh button in DB Browser after making the change in the
application. The change will go through regardless, but if you'd like to SEE it, you have to click the refresh button. IT IS THE SECOND BUTTON TO THE RIGHT FROM THE DROPDOWN MENU OF THE 
TABLES DESCRIBED IN THE PREVIOUS STEP


Database Setup:
The application automatically creates and initializes the SQLite database file (users.db) in the project directory when the program runs for the first time.

The following tables are created:

users: Stores user data (name, password, height, weight, caloric intake).

templates: Tracks user workout templates (weightlifting or cardio).

template_exercises: Stores exercises for each template.

all_weightlifting_exercises: Master list of weightlifting exercises.

all_cardio_exercises: Master list of cardio exercises.



Usage:

Launch the Application:
On the home screen, add a new user or log in as an existing user.

Create Workout Templates:
Choose between weightlifting or cardio templates and add exercises.

Manage Workouts:
Update sets, reps, weights, and other exercise details dynamically.

Calculate Metrics:
Use the built-in calculator to determine BMI and caloric needs.

Explore Resources:
Access pages for workout tips, terminology, and goals.
