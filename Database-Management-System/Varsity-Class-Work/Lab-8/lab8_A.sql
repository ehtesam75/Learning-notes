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
b


-- Write an anonymous block to display ONLY the first 6 titles from ‘books’ table.
-- Hint: Use a simple cursor and the cursor function %ROWCOUNT.

set serveroutput on

declare 
    cursor book_cur is select isbn, title from books;
    record book_cur%rowtype;
    counter number := 0;

begin
    open book_cur;
        loop
            fetch book_cur into record;
            exit when book_cur%notfound or counter = 6;
            dbms_output.put_line('isbn : ' || record.isbn || ' and ' || 'record: ' || record.title);
            counter := counter + 1;
        end loop;
    close book_cur;

end;
/

-- output:
-- isbn : 1234567890 and record: shonkhonil karagar
-- isbn : 2345678901 and record: robot somogro
-- isbn : 3456789012 and record: ekattorer dinguli
-- isbn : 4567890123 and record: Oracle DBA 101


