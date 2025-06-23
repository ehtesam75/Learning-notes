-- procedure in pl sql

drop table authors cascade constraints;
drop table books cascade constraints; 
drop table inventory cascade constraints;

create table authors (
    id number primary key,
    first_name varchar2(20),
    family_name varchar2(20)
);

create table books (
    isbn char(10) primary key,
    category varchar2(20),
    title varchar2(100),
    num_pages number,
    price number,
    copyright number(4),
    author1 number,
    author2 number,
    author3 number,
    foreign key (author1) references authors(id),
    foreign key (author2) references authors(id),
    foreign key (author3) references authors(id)
);

create table inventory (
    isbn char(10) primary key,
    status varchar2(16),
    status_date date,
    quantity number,
    foreign key (isbn) references books(isbn)
);


-- inserting data
insert into authors (id, first_name, family_name) values 
(1, 'humayun', 'ahmed');
insert into authors (id, first_name, family_name) values 
(2, 'muhammed', 'zafar iqbal');
insert into authors (id, first_name, family_name) values 
(3, 'tamim', 'subin');
insert into authors (id, first_name, family_name) values 
(4, 'jahanara', 'imam');

insert into books (isbn, category, title, num_pages, price, copyright, author1, author2, author3) values 
('1234567890', 'novel', 'shonkhonil karagar', 200, 450, 2005, 1, null, null);
insert into books (isbn, category, title, num_pages, price, copyright, author1, author2, author3) values
('2345678901', 'sci-fi', 'robot somogro', 320, 500, 2012, 2, null, null);
insert into books (isbn, category, title, num_pages, price, copyright, author1, author2, author3) values
('3456789012', 'memoir', 'ekattorer dinguli', 280, 550, 1989, 4, null, null);
insert into books (isbn, category, title, num_pages, price, copyright, author1, author2, author3) values
('4567890123', 'learning', 'Oracle DBA 101', 240, 600, 1993, 3, null, null);

insert into inventory (isbn, status, status_date, quantity) values 
('1234567890', 'available', to_date('2025-06-04', 'yyyy-mm-dd'), 10);
insert into inventory (isbn, status, status_date, quantity) values 
('2345678901', 'out of stock', to_date('2025-06-03', 'yyyy-mm-dd'), 0);
insert into inventory (isbn, status, status_date, quantity) values 
('3456789012', 'reserved', to_date('2025-06-02', 'yyyy-mm-dd'), 5);
insert into inventory (isbn, status, status_date, quantity) values 
('4567890123', 'available', to_date('2025-06-01', 'yyyy-mm-dd'), 8);


-- procedure with no input paramiter
-- get the authros name from id

create or replace procedure get_authors_name is
    -- if the procedure already exist then replace
    id_authors authors.id%type;
    name_authors varchar2(30);

begin
    id_authors := 3;
    select first_name || ' ' || family_name into name_authors from authors where authors.id = id_authors;
    -- || is used to concatenate first name and last name with a space.
    dbms_output.put_line('Employee name ' || name_authors);

exception
    when no_data_found then
        dbms_output.put_line('No employee with id 3');
    -- Oracle provides built-in exception names for common errors.
    -- These are called predefined exceptions.
    -- NO_DATA_FOUND is a predefined exception that
    -- Occurs when a SELECT INTO returns no rows.
end;
/

-- Employee name tamim subin

set serveroutput on;

begin
    get_authors_name;
end;
/




--procedure with paramiter
--add a new row in authors table

create or replace procedure add_authors(
    id_authors authors.id%type,
    firstname_authors authors.first_name%type,
    family_name_authors authors.family_name%type) is

begin
    insert into authors(id, first_name,family_name) values(id_authors, firstname_authors, family_name_authors);
end;
/

set serveroutput on;
begin
    add_authors(99, 'ehtesam', 'zunnuryn');
end;
/

select * from authors;

--         ID FIRST_NAME           FAMILY_NAME
-- ---------- -------------------- --------------------
--          1 humayun              ahmed
--          2 muhammed             zafar iqbal
--          3 tamim                subin
--          4 jahanara             imam
--         99 ehtesam              zunnuryn


-- NOTE:
-- VARCHAR2 is the standard and recommended data type for variable-length character strings. 
-- It is fully supported and guarantees correct storage and retrieval of character data.
-- VARCHAR is a reserved keyword for ANSI compatibility, but it is treated as VARCHAR2 in Oracle. 
-- However, Oracle recommends always using VARCHAR2 because future versions may change the behavior of VARCHAR.



