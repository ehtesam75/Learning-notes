-- create database college;
use world; 
drop table student;
-- college db will be used

create table student(
	name varchar(20),
    roll int primary key,
    session int not null
);

insert into student(name, roll, session) values('aleen', 3, 2022);
insert into student(name, roll, session) values('kamal', 1, 2022);

select *  from student;