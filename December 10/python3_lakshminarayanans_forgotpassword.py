"""
Module Documentation: Forgot Password

This module processes substring queries on a specified table and column.

Functions:
    - process_substring_query(query): Processes a substring query on a specified table and column.

Usage:
    - Call process_substring_query(query) to process substring queries and print the results.

"""

import re

# Database information
tables = {"emp"}
table_column_map = {"emp": ["empname"]}
column_values = {"empname": ["Shivnash Kumar", "Ragul Gupta"]}


def process_substring_query(query):
    """
    Processes a substring query on a specified table and column.

    Parameters:
        query (str): The substring query.

    Raises:
        ValueError: Raises an error if the query format is invalid, the table name is not present, or the column is not present in the table.
    """
    query = query.lower()
    pattern = re.compile(r"select\s+substring\((\w+),(\d+),(\d+)\)\s+from\s+(\w+);")
    matches = re.match(pattern, query)

    if not matches:
        raise ValueError("Invalid query format.")

    columnName = matches.group(1)
    startIndex = int(matches.group(2)) - 1
    length = int(matches.group(3))
    tableName = matches.group(4)

    if tableName not in tables:
        raise ValueError("Invalid Table Name")

    if tableName not in table_column_map or columnName not in table_column_map[tableName]:
        raise ValueError("Column is not present in the table.")

    for value in column_values[columnName]:
        print(value[startIndex:startIndex + length])


if __name__ == "__main__":
    query_input = "select substring(empname,4,13) from emp;"
    try:
        process_substring_query(query_input)
    except ValueError as e:
        print(e)
