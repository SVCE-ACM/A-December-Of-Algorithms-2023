SELECT 'sql_gowsrini2004_day_10' as '';
CREATE DATABASE gowtham;
USE gowtham;

CREATE TABLE emp (
  empno INTEGER PRIMARY KEY,
  empname VARCHAR(100)
);
 
INSERT INTO emp VALUES (100, 'Shivnash Kumar');
INSERT INTO emp VALUES (110, 'Ragul Gupta');


SELECT SUBSTRING(empname, 4, 13) FROM emp;
SELECT SUBSTRING(empname,2,2) FROM emp;