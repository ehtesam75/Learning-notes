/*
Lab Task: 2
Create the following table namely Employee
(employee_id NUMBER(10) NOT NULL,
first_name VARCHAR(25) NOT NULL,
last_name VARCHAR(30) NOT NULL,
hire_date DATE DEFAULT sysdate)
1. Insert appropriate data
2. Try to insert null value
3. See the effect of sysdate
*/



drop table employee cascade constraints;
/*
NOTE : When I drop a table without cascade constraints:
If other tables reference this table through foreign keys, Oracle will not allow to drop the table.
but if i drop with cascade constraints then it will drop the table and all foreign key constraints that reference it
*/

create table employee (
    employee_id number(10) not null,
    first_name varchar2(25) not null,
    last_name varchar2(30) not null,
    hire_date date default sysdate
);

-- 1

insert into employee (employee_id, first_name, last_name) values (101, 'ehtesam', 'zunnu');
insert into employee (employee_id, first_name, last_name) values (102, 'jisan', 'hasan');
insert into employee (employee_id, first_name, last_name, hire_date) values (103, 'karim', 'rahman', to_date('2023-01-15', 'yyyy-mm-dd'));

-- 2

-- commented out; cuz it will show error
-- insert into employee (employee_id, first_name, last_name) values (null, 'lisa', 'rahim');

-- 3
select * from employee;
