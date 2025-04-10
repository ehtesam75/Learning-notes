drop table registration cascade constraints;
drop table courses cascade constraints;
drop table students cascade constraints;

create table students (
    roll number(10) primary key, 
    name varchar2(20) not null, 
    enrolment_date date default sysdate, 
    hall_of_residence varchar2(20)
);

create table courses (
    c_id varchar2(20) primary key, 
    c_name varchar2(20),    
    year number(1), 
    term number(1)
);

create table registration (
    roll number(10), 
    c_id varchar2(20),
    date_of_registration date default sysdate, 
    payment_status varchar2(1) check (payment_status in ('y', 'n')), 
    constraint reg primary key (roll, c_id),
    -- foreign key (roll) references students(roll),
    constraint reg_student foreign key (roll) references students(roll) on delete cascade,
    constraint reg_course foreign key (c_id) references courses(c_id) on delete cascade 
);

insert into students (roll, name, enrolment_date, hall_of_residence) 
values (1, 'aleen', TO_DATE('2020-06-05', 'YYYY-MM-DD'), 'hall 1');

insert into students (roll, name, enrolment_date, hall_of_residence) 
values (2, 'sumon', TO_DATE('2012-06-02', 'YYYY-MM-DD'), 'hall 2');

insert into students (roll, name, enrolment_date, hall_of_residence) 
values (3, 'joy', TO_DATE('2024-09-02', 'YYYY-MM-DD'), 'hall 3');

insert into students (roll, name, enrolment_date, hall_of_residence) 
values (4, 'jakariya', TO_DATE('2023-12-04', 'YYYY-MM-DD'), 'hall 4');

insert into courses (c_id, c_name, year, term) values ('cse306', 'database', 1, 1);
insert into courses (c_id, c_name, year, term) values ('cse301', 'spl', 3, 1);
insert into courses (c_id, c_name, year, term) values ('cse305', 'chemistry', 4, 1);
insert into courses (c_id, c_name, year, term) values ('cse302', 'bangla', 1, 2);

insert into registration (roll, c_id, payment_status) values (1, 'cse306', 'y');
insert into registration (roll, c_id, payment_status) values (2, 'cse301', 'n');
insert into registration (roll, c_id, payment_status) values (3, 'cse305', 'y');
insert into registration (roll, c_id, payment_status) values (4, 'cse302', 'n');

delete from courses where c_id = 'cse306';

select * from courses order by c_id;
