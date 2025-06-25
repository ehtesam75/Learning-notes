
/*
Transaction Management 
Transactions begin with a single DML statement (INSERT, UPDATE, DELETE) and end 
(successfully or unsuccessfully) when one of the following events occurs:

* Either a COMMIT or ROLLBACK statement is executed. A COMMIT statement
makes the changes to the table permanent, while the ROLLBACK undoes the
changes to the table since the last commit.
* The user exits SQL*Plus or iSQL*Plus normally (automatic COMMIT).
* A DDL (Data Definition Language) or DCL (Data Control Language) statement is
executed (automatic COMMIT).
* The database crashes (automatic ROLLBACK).
* The SQL*Plus or iSQL*Plus session crashes (automatic ROLLBACK
*/

drop table employees;

create table employees (
    emp_id number primary key,
    emp_name varchar2(50),
    emp_salary number
);

insert into employees (emp_id, emp_name, emp_salary) values (1, 'Istihak', 50000);
insert into employees (emp_id, emp_name, emp_salary) values (2, 'Sakib', 60000);
insert into employees (emp_id, emp_name, emp_salary) values (3, 'Tamim', 70000);
--nothing is saved yet as no data is committed

commit;
--now the data is saved parmanently

delete from employees where emp_id = 2;
--lets just say this was deleted by mistake

select * from employees;
--     EMP_ID EMP_NAME                                           EMP_SALARY
-- ---------- -------------------------------------------------- ----------
--          1 Istihak                                                 50000
--          3 Tamim                                                   70000

rollback;
--this will undo the last delete operation

select * from employees;
--     EMP_ID EMP_NAME                                           EMP_SALARY
-- ---------- -------------------------------------------------- ----------
--          1 Istihak                                                 50000
--          2 Sakib                                                   60000
--          3 Tamim                                                   70000



--SAVEPOINTS:
--A savepoint is a way to set a point in a transaction that one can roll back to later

insert into employees (emp_id, emp_name, emp_salary) values (4, 'Rafiq', 80000);
savepoint s1;

insert into employees (emp_id, emp_name, emp_salary) values (5, 'Rahim', 90000);

rollback to s1;
--this will undo the last insert operation but keep the first one

select * from employees;
--     EMP_ID EMP_NAME                                           EMP_SALARY
-- ---------- -------------------------------------------------- ----------
--          1 Istihak                                                 50000
--          2 Sakib                                                   60000
--          3 Tamim                                                   70000
--          4 Rafiq                                                   80000