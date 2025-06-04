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



--What is the maximum author id? What is the maximum author id? 

set serveroutput on;
DECLARE
    max_author_id authors.id%type;
BEGIN
    select max(id) into max_author_id from authors;

    dbms_output.put_line('Max author id is ' || max_author_id);

END;
/

--ans
--Max author id is 4


--Write an anonymous block to display the date on which status was entered in ‘inventory’ 
--table for the book titled ‘Oracle DBA 101’ 

set serveroutput on;
DECLARE
    book_title varchar2(100) := 'Oracle DBA 101';
    var_status_date date;

BEGIN
    select status_date into var_status_date from inventory i, books b
    where i.isbn = b.isbn and b.title = 'Oracle DBA 101';

    dbms_output.put_line('The status date is : ' || var_status_date);

END;
/

--ans
--The status date is : 01-JUN-25
