
/*
connect system;
password : 3538

create user aleen identified by newpass;

grant all privileges to aleen;

// alter user username identified by aleen_new replace aleen;

disconnect;

connect aleen;
password newpass

*/

drop table test;

create table test (
    id number(3),
    name varchar(20),
    cgpa number(3,2)
);

describe test;

insert into test (id, name, cgpa) values (1, 'olin', 3.32);
insert into test (id, name, cgpa) values (2, 'joy', 3.62);

select name, cgpa from test;
select * from test;
