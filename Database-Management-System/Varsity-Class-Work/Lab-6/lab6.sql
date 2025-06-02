drop table department cascade constraints;
drop table location cascade constraints;

create table department (
    dept_id int,
    name varchar(50),
    location_id int
);

create table location (
    location_id int,
    regional_group varchar(50)
);

insert into department values (1, 'HR', 1);
insert into department values (2, 'Finance', 2);
insert into department values (3, 'Sales', NULl);

insert into location values (1, 'Dhaka');
insert into location values (2, 'Chittagong');
insert into location values (3, 'Sylhet');


--JOIN

--natural join
--do not use explicit join condition
select regional_group, name from location
natural join department;

--inner join 
--uses an explicit join condition   
select l.regional_group, d.name from location l
inner join department d on d.location_id = l.location_id;

--left outer join
--all departments, even those with no matching location
select d.name, l.regional_group from department d
left join location l on d.location_id = l.location_id;

--right outer join
--all locations, even if no department is there
select d.name, l.regional_group from department d
right join location l on d.location_id = l.location_id;

--full outer join
--all departments and all locations
select d.name, l.regional_group from department d
full join location l on d.location_id = l.location_id;

--ouput
-- NAME	REGIONAL_GROUP
-- HR	Dhaka
-- Finance	Chittagong
-- Sales	NULL
-- NULL	Sylhet

--cross join
--all combination of location and dept
select name, regional_group from department
cross join location;

--join with using
--same as natual join but more explicit
select name, regional_group from department
join location using (location_id);

--multiple common coloum join with help of using
-- select name, regional_group from department
-- join location using (location_id, another_common_col_name);


--some modification
alter table department add manager_dept_id int;

update department set manager_dept_id = 1 where dept_id = 1;    
update department set manager_dept_id = NULL where dept_id = 2;
update department set manager_dept_id = 2 where dept_id = 3;   
--dept 3 manages dept 2


--self join
-- only those departments which manage the other (can be itself) department
select d1.name as dept, d2.name as manager_dept from department d1
join department d2 on d1.manager_dept_id = d2.dept_id;

-- output
-- DEPT	MANAGES_DEPT
-- HR	HR
-- Sales	Finance


-- self join with left join
--all departments are shown, even if they do not manage any other department
select d1.name as dept, d2.name as manages_dept from department d1
left join department d2 on d1.manager_dept_id = d2.dept_id;

-- output
-- DEPT	MANAGES_DEPT
-- HR	HR
-- Finance	NULL
-- Sales	Finance


-- self join with right join
select d1.name as dept, d2.name as manager_dept from department d1
right join department d2 on d1.manager_dept_id = d2.dept_id;

--output
-- DEPT	MANAGER_DEPT
-- HR	HR
-- Sales	Finance
-- NULL	Sales



--equi join
--is a type of inner join
--join condition uses an equals (=) operator
select l.regional_group, d.name from location l
join department d on d.location_id = l.location_id;


--non-equi join
--type of inner join
--here join condition does not use an equals (=) operator, but instead uses other comparison operators like:
-- >, <, >=, <=, BETWEEN, !=
select l.regional_group, d.name from location l
join department d on l.location_id < d.location_id;





