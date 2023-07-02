    ## Setup Instructions

This section will guide you through setting up and running this repository on your local machine.

### Program

* Clone the repository
    ```
    git clone https://github.com/Calebbii/Apache-Internship-Program
    ```
* Navigate to the project folder
    ```
    cd Apache Internship Program
    ```
* To interact with the solution for the first Question, navigate to the `QuestionThree` folder
    ```
    cd QuestionThree/py
    ```
### Environment setup
*  To create a virtual environment
    ```
    python3 -m venv env

    ```
* To activate the virtual environment
    For Unix/Linux:
        ```
        source env/bin/activate
        ```
    For Windows (PowerShell):
        ```
        .\env\Scripts\Activate.ps1

        ```
    For Windows (Command Prompt):
        ```
        env\Scripts\activate.bat
        ```



    ## Database Setup
Our application uses two main types of databases:

- **PostgreSQL** - Used in all our `development` and `production` environments.
- **SQLite3** - Used when running our tests.

The following section illustrates how to set up PostgreSQL on Debian based Linux distros `Ubuntu, Parrot, Kali Linux etc.`<br/>
You can find alternate installation instructions for a different operating system [here](https://www.postgresql.org/download/).

### Step 1 :- Installing PostgreSQL

Postgres is available from the default repositories of all Debian distributions. You can use `apt` for installation.

- Install Postgres
```
$ sudo apt update
$ sudo apt install postgresql postgresql-contrib
```

- Ensure that the server is running using the systemctl start command:
```{shell}
$ sudo systemctl start postgresql.service
```

### Step 2 :- Using PostgreSQL Roles and Databases

- Switch over to the postgres account on your server by typing:
```{shell}
$ sudo -i -u postgres
```
- Access the Postgres prompt immediately by typing:
```{shell}
$ psql
```
- Exit out of the PostgreSQL prompt by typing:
```{shell}
$ \q
```