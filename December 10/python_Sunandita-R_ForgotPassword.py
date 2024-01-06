""" If program throws database error try the folowing command in cmd :
    
        "pip install db-sqlite3"

                            *****   INPUT FORMAT ******

        Just a sql query to get all substrings from column empname from emp table 
        with the starting index and no of characters to be extracted.

       INPUT EXAMPLE:  select substring(empname,4,13) from emp;
"""

import sqlite3
db_file = "willow.db"
create_table_query = "CREATE TABLE IF NOT EXISTS emp (empno INT, empname TEXT)"
deletequery="delete from emp;"

insert_query1 = "INSERT INTO emp (empno, empname) VALUES (100, 'Shivnash Kumar')"
insert_query2 = "INSERT INTO emp (empno, empname) VALUES (101, 'Ragul Gupta')"

user_query = input("Enter SQL query: ")

connection = sqlite3.connect(db_file)
try:
    
    create_table_cursor = connection.cursor()
    create_table_cursor.execute(create_table_query)
    delete_cursor = connection.cursor()
    delete_cursor.execute(deletequery)
    
    insert_cursor = connection.cursor()
    insert_cursor.execute(insert_query1)
    insert_cursor.execute(insert_query2)
    connection.commit()
    user_query_cursor = connection.cursor()
    user_query_cursor.execute(user_query)
    result_set = user_query_cursor.fetchall()
    for row in result_set:
        empname = ''.join(c for c in row[0] if c.isalpha())
        print(empname)

finally:
    connection.close()
