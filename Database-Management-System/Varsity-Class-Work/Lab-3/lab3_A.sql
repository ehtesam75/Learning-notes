/*
ON DELETE CASCADE: Automatically deletes related rows in the child table when a row in the parent table is deleted.
ON DELETE SET NULL: Sets the foreign key column in the child table to NULL when the corresponding row in the parent table is deleted.
ON DELETE NO ACTION (default): Prevents deletion of a row in the parent table if there are related rows in the child table (no action will be taken).
*/

drop table dependent cascade constraint;
drop table employee cascade constraint;
drop table department cascade constraint;

create table department (
  dname varchar2(15),
  dnumber number(2) not null,
  mgrssn number(12),
  mgrstartdate date,
  primary key (dnumber)
);

create table employee (
  fname varchar2(15),
  minit varchar2(2),
  lname varchar2(15),
  ssn number(12) not null,
  bdate date,
  address varchar2(35),
  sex varchar2(1),
  salary number(7) not null,
  superssn number(12),
  dno number(2) not null,
  primary key (ssn),
  foreign key (dno) references department(dnumber)
);

create table dependent (
  essn number(12),
  dependent_name varchar2(15),
  sex varchar2(1),
  bdate date,
  relationship varchar2(12),
  primary key (essn, dependent_name),
  foreign key (essn) references employee(ssn)
);

insert into department values ('research', 5, 333445555, '22-may-1978');
insert into department values ('administration', 4, 987654321, '01-jan-1985');
insert into department values ('headquarters', 1, 888665555, '19-jun-1971');

insert into employee values ('arif', 'm', 'rahman', 123456789, '09-jan-1955', '731 mirpur, dhaka, bangladesh', 'm', 30000, 333445555, 5);
insert into employee values ('farida', 't', 'begum', 333445555, '08-dec-1945', '638 uttara, dhaka, bangladesh', 'f', 40000, 888665555, 5);
insert into employee values ('tanveer', 'j', 'islam', 999887777, '19-jul-1958', '3321 bashundhara, dhaka, bangladesh', 'm', 25000, 987654321, 4);
insert into employee values ('nabila', 's', 'sultana', 987654321, '20-jun-1931', '291 gulshan, dhaka, bangladesh', 'f', 43000, 888665555, 4);
insert into employee values ('rakib', 'k', 'hasan', 666884444, '15-sep-1952', '975 mirpur, dhaka, bangladesh', 'm', 38000, 333445555, 5);
insert into employee values ('mahmuda', 'a', 'parvin', 453453453, '31-jul-1962', '5631 bashundhara, dhaka, bangladesh', 'f', 25000, 333445555, 5);
insert into employee values ('zahid', 'v', 'hossain', 987987987, '29-mar-1959', '980 dhanmondi, dhaka, bangladesh', 'm', 25000, 987654321, 4);
insert into employee values ('sabrina', 'e', 'rahman', 888665555, '10-nov-1927', '450 motijheel, dhaka, bangladesh', 'f', 55000, null, 1);

insert into dependent values (333445555, 'ayesha', 'f', '05-apr-1976', 'daughter');
insert into dependent values (333445555, 'kamal', 'm', '25-oct-1973', 'son');
insert into dependent values (333445555, 'shaon', 'f', '03-may-1948', 'spouse');
insert into dependent values (123456789, 'sajid', 'm', '01-jan-1978', 'son');
insert into dependent values (123456789, 'maria', 'f', '31-dec-1978', 'daughter');
insert into dependent values (123456789, 'parveen', 'f', '05-may-1957', 'spouse');
insert into dependent values (987654321, 'junaid', 'm', '26-feb-1932', 'spouse');


select * from department;
select fname, lname, dno from employee;
select ssn, fname, lname from employee;
select essn, dependent_name from dependent;

SELECT ssn, fname, lname FROM employee;
SELECT essn, dependent_name FROM dependent;


-- DELETE FROM department WHERE dnumber=5;
-- DELETE FROM employee WHERE dno=5;
-- delete from employee where ssn = 123456789;
-- error; cuz on delete no action

