drop table students cascade constraints;

create table students (
    id number primary key,
    name varchar2(50),
    marks number,
    grade varchar2(10)
);

insert into students (id, name, marks, grade) values (1, 'Ehtesam', 85, 'A');
insert into students (id, name, marks, grade) values (2, 'Sakib', 75, 'B');
insert into students (id, name, marks, grade) values (3, 'Rafiq', 65, 'C');
insert into students (id, name, marks, grade) values (4, 'Rahim', 55, 'D');

select * from students;

create or replace trigger update_grade
before insert or update on students
-- why before? explained below
for each row

begin
    if :new.marks < 40 then
        :new.grade := 'F';
    elsif :new.marks >= 40 and :new.marks < 50 then
        :new.grade := 'D';
    elsif :new.marks >= 50 and :new.marks < 60 then
        :new.grade := 'C';
    elsif :new.marks >= 60 and :new.marks < 70 then
        :new.grade := 'B';      
    elsif :new.marks >= 70 and :new.marks < 80 then
        :new.grade := 'A';
    else
        :new.grade := 'A+';
    end if;
end;
/

update students set marks = 45 where id = 1;
select * from students;


/*

BEFORE vs AFTER Triggers in this context:
BEFORE Trigger:
Fires before the actual INSERT/UPDATE operation happens
The row has not yet been written to the database
You CAN modify :new values because the data hasn't been committed yet
Changes to :new values will be reflected in the final row stored in the database
AFTER Trigger:
Fires after the INSERT/UPDATE operation has completed
The row has already been written to the database
You CANNOT modify :new values because the data is already committed
:new values are read-only at this point

*/