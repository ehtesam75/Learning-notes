
-- unique, check and default
drop table course_contents cascade constraints;

create table course_contents (
    course_id varchar(10) not null,
    course_name varchar(20) unique,
    pass_mark number(10) default 40,
    credit integer check(credit>0 and credit<5)
);

insert into course_contents(course_id, course_name, pass_mark, credit)
values ('cse2101', 'data structure', 3, 4);

insert into course_contents(course_id, course_name, credit) 
values ('cse2102', 'discrete math', 2);

-- insert into course_contents(course_id, course_name) 
-- values ('cse2107', 'discrete math'); unique constraint (ALEEN.SYS_C005318) violated

-- insert into course_contents(course_id, course_name, pass_mark, credit) 
-- values ('cse2108', 'algorithm', 5, 5);  check constraint (ALEEN.SYS_C005323) violated 

select * from course_contents;