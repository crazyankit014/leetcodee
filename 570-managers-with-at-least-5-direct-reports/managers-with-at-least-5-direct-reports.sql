# Write your MySQL query statement below


select e.name from Employee as e where e.id  in ( select managerId from Employee where managerId is not null GROUP BY managerId
HAVING COUNT(id) >= 5 )

