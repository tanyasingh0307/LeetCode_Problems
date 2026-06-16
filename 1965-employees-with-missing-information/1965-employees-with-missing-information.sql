# Write your MySQL query statement below
Select e.employee_id from employees e left join salaries s on e.employee_id=s.employee_id where s.employee_id is null 
union
Select s1.employee_id from salaries s1 left join employees e1 on e1.employee_id=s1.employee_id where e1.employee_id is null 

order by employee_id;


