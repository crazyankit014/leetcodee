# Write your MySQL query statement belowSELECT e.unique_id, em.name
SELECT e.unique_id, em.name
FROM EmployeeUNI AS e
RIGHT JOIN Employees AS em ON e.id = em.id;
