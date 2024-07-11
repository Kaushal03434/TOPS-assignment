create database sql_query;
use sql_query;
create table student
(rollno int primary key,
name text,
branch text);

insert into student values
('1',"jay","computer science"),
('2',"suhani","Electronics and com"),
('3',"Kriti","Electronics and com");

select * from student;

create table exam
(rollno int,
s_code varchar(10) not null,
marks int,
p_code varchar(10) not null);

insert into exam values
('1',"CS11","50","CS"),
('1',"CS12","60","CS"),
('2',"EC101","66","EC"),
('2',"EC102","70","EC"),
('3',"EC101","45","EC"),
('3',"EC102","50","EC");

select * from exam;


