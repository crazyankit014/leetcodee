# Write your MySQL query statement below
select p.project_id,round(AVG(experience_years),2)as average_years from project  p  
 , Employee  e where p.employee_id=e.employee_id group by project_id;