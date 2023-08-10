# Write your MySQL query statement below
SELECT max(salary) SecondHighestSalary FROM Employee
where salary <>(SELECT max(salary) FROM Employee);