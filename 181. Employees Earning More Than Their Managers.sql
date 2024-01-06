# Write your MySQL query statement below
select a.Name as employee
from employee as a join employee as b
on a.managerId = b.Id
and a.salary > b.salary
