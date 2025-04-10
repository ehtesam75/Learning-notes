/*

Lab Task: 1
students (roll number(4), name varchar(20), enrolment_date date);
courses (c_id varchar(10), c_name varchar(30), year number(1), term
number(1));
1. describe the tables.
2. In students table, add a field named phone varchar(15).
3. In students table, alter the data type of roll field to number(7).
4. In courses table, rename field c_id to c_no.
5. Now describe the above created tables again.
6. Now insert two demo records in both the tables.
7. Now show both tables with data.

*/

drop table students;
drop table courses;

create table students(
    roll number(4),
    name varchar(20),
    enrolment_date date
);

create table courses(
    c_id varchar(10),
    c_name varchar(30),
    year number(1),
    term number(1)
);

-- 1
describe students;
describe courses;

-- 2
alter table students
    add phone varchar(15);

-- 3
alter table students
    modify roll number(7);

-- 4
alter table courses
    rename column c_id to c_no;

-- 5
describe students;
describe courses;

-- 6
insert into students(roll, name, enrolment_date) Values(3, 'aleen', '3/4/2022');
insert into students(roll, name , enrolment_date) values(5, 'galib', '5/8/2022');

insert into courses(c_name, year, term) values('dbms', 2022, 'mid term');
insert into courses(c_name, year, term) values('dbms', 1990, 'final term');


-- 7
select *from students;
select *from courses;
