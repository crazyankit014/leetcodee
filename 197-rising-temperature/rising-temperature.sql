# Write your MySQL query statement below

# SELECT w1.id
# FROM Weather w1
# JOIN Weather w2 ON w1.recordDate = DATE_ADD(w2.recordDate, INTERVAL 1 DAY)
# WHERE w1.temperature > w2.temperature;




select t1.ID from Weather as T1, Weather  as T2 where t1.temperature > t2.temperature AND
DATEDIFF(T1.recordDate , T2.recordDate) =1

# SELECT w1.id
# FROM Weather AS w1 , Weather AS w2
# WHERE w1.Temperature > w2.Temperature AND DATEDIFF(w1.recordDate , w2.recordDate) = 1

