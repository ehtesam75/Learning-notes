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
('1234567890', 'novel', 'shonkhonil karagar', 200, 479, 2005, 1, null, null);
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



--Write an anonymous PL/SQL block to retrieve and display the status from the 
--inventory table for the book titled 'ekattorer dinguli'

set serveroutput on;
DECLARE
    book_title books.title%type := 'ekattorer dinguli';
    var_status inventory.status%type;

BEGIN
    select status into var_status from inventory i, books b
    where i.isbn = b.isbn and b.title = 'ekattorer dinguli';

    dbms_output.put_line('The status is : ' || var_status);

END;
/

--ans
--The status is : reserved


/*
Write an anonymous block to calculate and display the full price of the 
book titled “shonkhonil karagar”. 
The code should then check and apply the discount using the guidelines below t o produce the 
discounted price which should also be outputted. You should ensure that your discounted 
price is round up to 2 decimal places e.g. £12.99. 
 
No discount if the price is less than £25,  
25% discount if the price is less than £40,  
40% discount if the price is less than £50.  
For any other price, the discount is 50% 
 
What is the discount price does you program give for shonkhonil karagar? 
*/

set serveroutput on;
DECLARE
    book_title books.title%type := 'shonkhonil karagar';
    discount_price books.price%type;
    full_price books.price%type;

BEGIN
    select price into full_price from books
    where title = 'shonkhonil karagar';

    if full_price < 25 then
        discount_price := full_price;
    elsif full_price < 40 and full_price >= 25 then
        discount_price := full_price - (full_price * .25);
    elsif full_price < 50 and full_price >= 40 then
        discount_price := full_price - (full_price * .4);
    else 
        discount_price := full_price / 2;
    end if;

    dbms_output.put_line('The full price for shonkhonil karagar is  : ' || full_price);
    dbms_output.put_line('The discount price for shonkhonil karagar is  : ' || to_char(round(discount_price, 2), '999.99'));
    --to_char(round) used to ensure the discounted book price shows exactly 2 decimal places
    --but just round(discount_price, 2) should also do this task
    --but in this case it didn't work out for some reason; so to_char(round) is used

END;
/

--ans
-- The full price for shonkhonil karagar is  : 479
-- The discount price for shonkhonil karagar is  :  239.50

