create database e;
use e;
CREATE table emp (
  empno int PRIMARY KEY,
  empname varchar(50)
);
INSERT INTO emp VALUES (1, 'December');
INSERT INTO emp VALUES (2, 'Algorithm');
SELECT substring(empname,4,13) from emp;
SELECT substring(empname,2,2) from emp;
