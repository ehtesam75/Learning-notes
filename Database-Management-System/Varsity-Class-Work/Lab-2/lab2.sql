drop table cars;
drop table specs;
drop table stock;

-- create

create table cars (
    md_num number(3),
    md_name varchar2(10),
    style varchar2(10),
    year number(3)
);

create table specs (
    md_num number(3),
    mpg number(5),
    radio varchar2(10),
    engine varchar2(10)
);

create table stock (
    md_num number(3),
    qty number(3),
    price number(3)
);

drop table stock;

create table stock (
    md_num number(3),
    qty number(3),
    price number(3)
);


-- alter table


alter table cars
add (
    company varchar2(10),
    supplier varchar2(10)
);

alter table cars
modify (
    supplier varchar2(15),
    company varchar2(18)
);

describe specs;

alter table specs add tyre varchar2(10);
alter table specs modify tyre varchar2(3);
describe specs;
alter table specs drop column tyre;

alter table cars rename column company to manufacture;
alter table cars drop column manufacture;
alter table cars drop column supplier;

alter table cars modify year number(5);


-- insert


insert into cars (md_num, md_name, style, year) values (1, 'honda', 'copue', 2002);
insert into cars (md_num, md_name, style, year) values (2, 'toyoto', 'saloon', 1990);
insert into cars (md_num, md_name, style, year) values (5, 'honda', 'estate', 1999);
insert into cars (md_num, md_name, style, year) values (9, 'ford', 'salon', 1995);

insert into specs (md_num, mpg, radio, engine) values (1, 34, 'no', '3l-3l');
insert into specs (md_num, mpg, radio, engine) values (2, 76, 'yes', '9l-6l');
insert into specs (md_num, mpg, radio, engine) values (3, 33, 'no', '8l-6l');
insert into specs (md_num, mpg, radio, engine) values (5, 98, 'no', '8l-7l');

insert into stock (md_num, qty, price) values (1, 3, 87);
insert into stock (md_num, qty, price) values (2, 6, 98);
insert into stock (md_num, qty, price) values (3, 14, 109);
insert into stock (md_num, qty, price) values (4, 20, 189);

-- update and delete

update cars set year = 2024 where md_name = 'ford';
delete from cars where md_name = 'toyoto';


-- select

select * from cars;
select * from specs;
select * from stock;
