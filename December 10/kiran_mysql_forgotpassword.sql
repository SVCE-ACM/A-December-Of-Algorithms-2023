-- create
create database emp;
use emp;
CREATE TABLE EMPLOYEE (
  empno INTEGER PRIMARY KEY,
  empname varchar(100)
  
);

-- insert
INSERT INTO EMPLOYEE VALUES (0001, 'Clark');
INSERT INTO EMPLOYEE VALUES (0002, 'Dave');

select substring(empname,2,2) from EMPLOYEE;