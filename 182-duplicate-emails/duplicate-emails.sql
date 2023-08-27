
SELECT Email
FROM person
GROUP BY Email
HAVING COUNT(*) > 1;
