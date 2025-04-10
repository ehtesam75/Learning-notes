drop table hr.admin_emp cascade constraints;

create table hr.admin_emp (
    empno number(5) primary key, 
    ename varchar2(15) not null, 
    ssn number(9), 
    job varchar2(10), 
    mgr number(5), 
    hiredate date default sysdate, 
    photo blob, 
    sal number(7,2), 
    hrly_rate number(7,2), 
    comm number(7,2), 
    deptno number(3) not null
);

insert into hr.admin_emp (empno, ename, ssn, job, mgr, sal, hrly_rate, comm, deptno) 
values (1, 'jalal', 123456789, 'manager', 30, 2240, 23, 543, 130);

insert into hr.admin_emp (empno, ename, ssn, job, mgr, sal, hrly_rate, comm, deptno) 
values (2, 'marjan', 987654321, 'head', 1, 3230, 43, 2, 1);

alter table hr.admin_emp rename column photo to img;
alter table hr.admin_emp add email varchar2(30);
alter table hr.admin_emp add pos varchar2(32);
alter table hr.admin_emp modify ssn number(10);
alter table hr.admin_emp drop column img;

-- select empno, ename, ssn, job, mgr, sal, hrly_rate, comm, deptno from hr.admin_emp;
describe hr.admin_emp;
select * from hr.admin_emp;
