import psycopg2
import json

# Connect to the PostgreSQL database
conn = psycopg2.connect(
    host="your_host",
    database="your_database",
    user="your_username",
    password="your_password"
)

# Function to retrieve data from the user_table and return it as JSON string
def get_users():
    try:
        # Create a cursor object to interact with the database
        cursor = conn.cursor()

        # Execute the query to retrieve data from the user_table
        cursor.execute("SELECT * FROM public.user_table")

        # Fetch all rows from the result set
        rows = cursor.fetchall()

        # Define a list to store the data rows
        data = []

        # Iterate over the rows and convert them to dictionaries
        for row in rows:
            user_id, name, age, phone = row
            user_data = {
                "user_id": user_id,
                "name": name,
                "age": age,
                "phone": phone
            }
            data.append(user_data)

        # Create the response dictionary
        response = {
            "status_code": 200,
            "data": data
        }

        # Convert the response dictionary to a JSON string
        json_string = json.dumps(response, indent=2)
        return json_string

    except (Exception, psycopg2.Error) as error:
        print("Error retrieving data from PostgreSQL:", error)
        return None

    finally:
        # Close the cursor and connection
        if cursor:
            cursor.close()
        if conn:
            conn.close()

# Call the get_users function to retrieve the data
json_data = get_users()
if json_data:
    print(json_data)
