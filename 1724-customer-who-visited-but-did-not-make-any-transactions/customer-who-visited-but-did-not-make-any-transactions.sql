# Write your MySQL query statement below

select customer_id, count(*) AS count_no_trans from Visits where visit_id not IN (select visit_id FROM Transactions) group by customer_id;

