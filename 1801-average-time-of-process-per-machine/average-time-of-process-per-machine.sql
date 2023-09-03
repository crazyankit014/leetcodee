# Write your MySQL query statement below

select machine_id, round(avg(end-start), 3) as processing_time

from (select machine_id, process_id ,max(timestamp) as end, min(timestamp) as start from Activity group by machine_id, process_id) as a 
group by machine_id; 