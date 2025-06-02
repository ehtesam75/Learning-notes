drop table student cascade constraints;
drop table department cascade constraints;
drop table enrollment cascade constraints;

create table student (
    sid int,
    sname varchar(50),
    dept_id int
);

create table department(
    dept_id int,
    dept_name varchar(30)
);

create table enrollment(
    sid int,
    course varchar(30),
    instructor varchar(30)
);

insert into student values (1, 'Kamal', 5);
insert into student values (2, 'Rahim', 3);
insert into student values (3, 'Karim', 5);
insert into student values (4, 'Ratul', 2);    
insert into student values (4, 'Ratul', 2);    


insert into department values (1, 'CSE');
insert into department values (2, 'English');                            
insert into department values (3, 'EEE');
insert into department values (5, 'BBA');   

insert into enrollment values (1, 'CSE-101', 'Mr. Hasan');
insert into enrollment values (5, 'CSE-101', 'Mr. Hasan');
insert into enrollment values (3, 'CSE-102', 'Mr. Jmaiul Reza');
insert into enrollment values (6, 'CSE-103', 'Mr. Sajal');


-- subquery
--list of student of the dept of 'BBA'
select sid, sname from student where dept_id = (
    select dept_id from department where dept_name = 'BBA');


--subquery with insert
--create a table bba_dept and insert all bba student into this
drop table bba_dept cascade constraints;
create table bba_dept(
    sid int, 
    sname varchar(30)
);

insert into bba_dept(sid, sname)
    select sid, sname from student where dept_id = (
        select dept_id from department where dept_name = 'BBA'
    );

select * from bba_dept;


--comparison operators with subquery
-- get students whose dept_id is greater than the dept_id of bba
select sname from student where dept_id > (
    select dept_id from department where dept_name = 'BBA'
);


--union all : includes duplicates
--combine student of dept_id 2 and 3
select sname from student where dept_id = 2
union all
select sname from student where dept_id = 3;


--union : excludes duplicates
--combine student of dept_id 2 and 3
select sname from student where dept_id = 2
union
select sname from student where dept_id = 3;


--intersect
--find student name who are in both student and enrollment table
select sid, sname from student where sid in (   --in is used; cuz subquery can return multiple lines
    select sid from student
    intersect
    select sid from enrollment
);


--minus
--student who are not in any course (remove duplicates)
select distinct sid, sname from student where sid in (  
    --distinct will make sure duplicate value are removed
    select sid from student
    minus
    select sid from enrollment
);


--precdence
--Oracle evaluates set operators from left to right unless parentheses are used
select sname from student where dept_id = 2
intersect
select sname from student where dept_id = 5
union
select sname from student where dept_id = 3;
--here first intersect will perform then union

select sname from student where dept_id = 2
intersect
(
    select sname from student where dept_id = 5
    union
    select sname from student where dept_id = 3
);
--but here union will perfrom first, then intersect
--union happens first, because it's to the left, not because it has higher precedence
